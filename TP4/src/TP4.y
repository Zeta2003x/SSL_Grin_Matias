%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "funcionesC.c"
#include "funcionesC.h"

int linea;

int yylex();		
int yywrap() { return(1); }				
int yyerror(char* s);
extern FILE *yyin;


int yyerror(char* s)
{
}

extern int yylineno;

%}


%union {
	struct yylval_struct
	{
		char tipo[30];
		int entero;
		float real;
		char cadena[30];
		char caracter;
	} myStruct;	
}


%token <myStruct> TIPO_DATO
%token <myStruct> IDENTIFICADOR
%token <myStruct> DECIMAL
%token <myStruct> OCTAL
%token <myStruct> HEXADECIMAL
%token <myStruct> CTE_CHAR
%token <myStruct> LITERAL_CADENA
%token <myStruct> REAL
%token <myStruct> ERROR_LEX


%token SIZE_OF
%token INT_MAIN
%token INCLUDE
%token DEFINE

%token DEFAULT
%token CASE
%token IF
%token ELSE
%token SWITCH
%token WHILE
%token DO
%token FOR
%token GOTO
%token CONTINUE
%token RETURN
%token BREAK


%token MAYOR_IGUAL MENOR_IGUAL IGUALDAD DESIGUALDAD
%token AND OR
%token DOBLE_MAS DOBLE_MENOS
%token ARROW
%token OPER_ASIGNACION

%token STDIO
%token LIBRERIA

%left ','
%left '?'
%left ':'
%left '>' '<' 
%left '+' '-'
%left '*' '/' '%' '^'
%right '#'


%%

input:	  miniProgramaC
		| programaC
;

programaC: directivas prototipo main funciones
;

directivas: '#' INCLUDE STDIO variasDirectivas
;

variasDirectivas: /* vacio */
				| directiva variasDirectivas
;

directiva:	  '#' INCLUDE LIBRERIA 
			| '#' DEFINE IDENTIFICADOR constante
;

prototipo: variasDeclaraciones
;

main: encabezado cuerpo
;

encabezado: INT_MAIN '(' ')'
;

cuerpo: sentCompuesta
;

funciones:  /* vacio */
		  |  definicionFuncion funciones
;

definicionFuncion:  TIPO_DATO IDENTIFICADOR '(' listaTipoParametros ')' {linea = yylineno} sentCompuesta {insertarTipoDeDatoNodo(&datoAux, $<myStruct>1.cadena); insertarVariableNodo(&datoAux,$<myStruct>2.cadena,linea,0);insertarOrdenadoVariable(&listaVariables, &datoAux);}
				  | TIPO_DATO IDENTIFICADOR '(' /* vacio */ ')' {linea = yylineno} sentCompuesta {insertarTipoDeDatoNodo(&datoAux, $<myStruct>1.cadena); insertarVariableNodo(&datoAux,$<myStruct>2.cadena,linea,0);insertarOrdenadoVariable(&listaVariables, &datoAux);}
				  | TIPO_DATO IDENTIFICADOR '(' listaTipoParametros ')' ';' {insertarTipoDeDatoNodo(&datoAux, $<myStruct>1.cadena); insertarVariableNodo(&datoAux,$<myStruct>2.cadena,yylineno,0);insertarOrdenadoVariable(&listaVariables, &datoAux);}
				  | TIPO_DATO IDENTIFICADOR '(' /* vacio */ ')' ';' { insertarTipoDeDatoNodo(&datoAux, $<myStruct>1.cadena); insertarVariableNodo(&datoAux,$<myStruct>2.cadena,yylineno,0);insertarOrdenadoVariable(&listaVariables, &datoAux); }
;

parametrosFuncion:  /* vacio */
					| listaTipoParametros
;

listaTipoParametros:  declaracionParametro 
					| listaTipoParametros ',' declaracionParametro
;

declaracionParametro: TIPO_DATO nombreParam {
	char corchetes[] = "";
	for(linea;linea>0;linea-=1){
		strcat(corchetes,"[]");
	}
	char corchetesAux[sizeof($<myStruct>1.cadena)+sizeof(corchetes)];
	strcpy(corchetesAux,$<myStruct>1.cadena);
	strcat(corchetesAux,corchetes);
	insertarParametrosNodo($<myStruct>2.cadena, corchetesAux);linea=0;}
					| TIPO_DATO {insertarParametrosNodo("Parametro sin nombre", $<myStruct>1.cadena)}
;

nombreParam: IDENTIFICADOR {linea=0;} nombreParamExpConst {strcpy($<myStruct>$.cadena,$<myStruct>1.cadena)}
;

nombreParamExpConst:  /* vacio */
				   | '[' expConstante ']' nombreParamExpConst {linea++;}
;

miniProgramaC:    /* vacio */
				| variasDeclaraciones miniProgramaC
				| variasSentencias miniProgramaC
				| funciones miniProgramaC
				| directivas miniProgramaC
;

declarador:   IDENTIFICADOR declaArray {insertarVariableNodo(&datoAux,$<myStruct>1.cadena,yylineno,2)}
			| IDENTIFICADOR {insertarVariableNodo(&datoAux,$<myStruct>1.cadena,yylineno,1);}
			| IDENTIFICADOR '(' parametrosFuncion ')' { insertarVariableNodo(&datoAux,$<myStruct>1.cadena,yylineno,0)}
;

declaArray:   '[' expConstante ']'
			| '[' expConstante ']' declaArray 
;

declaracion:  TIPO_DATO inicializacionDecla ';' {insertarTipoDeDatoNodo(&datoAux, $<myStruct>1.cadena); insertarOrdenadoVariable(&listaVariables, &datoAux);}
			| TIPO_DATO '*' inicializacionDecla ';' {strcpy(tipoDeDatoAux,$<myStruct>1.cadena); insertarTipoDeDatoNodo(&datoAux, strcat(tipoDeDatoAux,"*")); insertarOrdenadoVariable(&listaVariables, &datoAux);}
			| error
;

inicializacionDecla:  declarador declaradorFactorizado
					| inicializacionDecla ',' declarador
;

declaradorFactorizado:  /* vacio */
						| '=' inicializador
;

inicializador:	  expCondicional
				| inciaArray
;


inciaArray:   '{' inicializadorLista '}'
			| '{' inicializadorLista ',' '}'
;

inicializadorLista:   inicializador
					| inicializadorLista ',' inicializador
;

variasDeclaraciones:  /* vacio */ 
					| declaracion variasDeclaraciones
;

variasSentencias: /* vacio */ 
				| sentencia variasSentencias
;

sentencia:    sentExpresion 
			| sentEtiquetada
			| sentCompuesta
			| sentSeleccion
			| sentIteracion
			| sentSalto	
			| ERROR_LEX {insertarError(&listaCadenasNoRec, "ERROR LEXICO", yylineno)}
;

sentCompuesta: 	  '{' variasDeclaraciones variasSentencias '}'
				| error {insertarError(&listaEstructurasNoRec, "ERROR SINTACTICO en la Sentencia Compuesta", yylineno);}
;

sentExpresion: 	  /* vacio */ ';'
				| expresion ';'
;

sentSeleccion:	  IF '(' expresion ')' sentencia segundaParteIf
				| SWITCH '(' expresion ')' sentencia
;

segundaParteIf:   /* vacio */
				| ELSE sentencia
;

sentIteracion:	  WHILE '(' expresion ')' sentencia
                | DO sentencia WHILE '(' expresion ')' ';'
                | FOR '(' expOVacio ';' expOVacio ';' expOVacio ')' sentencia
;

sentSalto:    GOTO IDENTIFICADOR ';'
			| CONTINUE ';'	
			| BREAK ';'	
			| RETURN expOVacio ';'			
;

sentEtiquetada:	  IDENTIFICADOR ':' sentencia
				| CASE expConstante ':' sentencia		
				| DEFAULT ':' sentencia
;


expOVacio:    /* vacio */
			| expresion	
;

expresion: 	  expAsignacion 		{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo)}
			| expresion ',' expAsignacion 
			| error {insertarError(&listaEstructurasNoRec, "ERROR SINTACTICO en la Expresion", yylineno);}
;

expAsignacion:	  expCondicional 	{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo)}
				| expUnaria operAsignacion expAsignacion
;

operAsignacion:   '='
				| OPER_ASIGNACION
;

expConstante:  /* vacio */
			| expCondicional		{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo)}
;

expCondicional:   expOr 			{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo)}
				| expOr '?' expresion ':' expCondicional	
;

expOr:    expAnd					{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo)}
		| expOr OR expAnd
;

expAnd:   expIgualdad				{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo)}
		| expAnd AND expIgualdad
;

expIgualdad:  expRelacional 						{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo)}
			| expIgualdad IGUALDAD expRelacional
			| expIgualdad DESIGUALDAD expRelacional
;

expRelacional:    expAditiva							{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo)}
				| expRelacional MAYOR_IGUAL expAditiva 
				| expRelacional '>' expAditiva 
				| expRelacional MENOR_IGUAL expAditiva 
				| expRelacional '<' expAditiva 
;

expAditiva:   expMultiplicativa						{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo)}
			| expAditiva '+' expMultiplicativa		{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo); controlTiposDeDatos($<myStruct>1.tipo,$<myStruct>3.tipo,yylineno,0)}
			| expAditiva '-' expMultiplicativa 		{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo); controlTiposDeDatos($<myStruct>1.tipo,$<myStruct>3.tipo,yylineno,1)}
;

expMultiplicativa:	  expUnaria 						{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo)}
					| expMultiplicativa '*' expUnaria 	{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo); controlTiposDeDatos($<myStruct>1.tipo,$<myStruct>3.tipo,yylineno,2)}
					| expMultiplicativa '/' expUnaria	{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo); controlTiposDeDatos($<myStruct>1.tipo,$<myStruct>3.tipo,yylineno,3)}
					| expMultiplicativa '%' expUnaria
					| expMultiplicativa '^' expUnaria
;

expUnaria: 	  expPostfijo 			{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo)}
			| DOBLE_MAS expUnaria 			
			| DOBLE_MENOS expUnaria 		
			| operUnario expUnaria 			
			| SIZE_OF '(' expPostfijo ')' 	
			| SIZE_OF '(' TIPO_DATO ')' 	
;

operUnario:   '&'
			| '*'
			| '+'
			| '-'
			| '~'
			| '!'
;

expPostfijo:  expPrimaria expPostfijoFactorizada					{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo)}
			| expUnaria expUnariaFactorizada expPostfijoFactorizada {strcpy($<myStruct>$.tipo,devolverTipoIdentificador($<myStruct>1.cadena))}
;

expUnariaFactorizada: ARROW IDENTIFICADOR
					| DOBLE_MAS
					| DOBLE_MENOS
;

expPostfijoFactorizada:   /* vacio */
						| declaArray declaradorFactorizado 
						| '(' listaArgumentos ')' expPostfijoFactorizada {controlInvocacionFuncion(idLlamadoAFunc, tipoLlamadoAFunc, tipoParametro, yylineno, &listaVariables); contadorParametros=0;}
						| '.' IDENTIFICADOR expPostfijoFactorizada
;

listaArgumentos:   /* vacio */
				| expPrimaria {strcpy(tipoParametro[contadorParametros],$<myStruct>1.tipo); contadorParametros++;}
				| listaArgumentos ',' expPrimaria {strcpy(tipoParametro[contadorParametros],$<myStruct>3.tipo); contadorParametros++;}
;

expPrimaria:	  IDENTIFICADOR 	{strcpy($<myStruct>$.tipo,devolverTipoIdentificador($<myStruct>1.cadena)); strcpy(idLlamadoAFunc,$<myStruct>1.cadena); strcpy(tipoLlamadoAFunc,devolverTipoIdentificador($<myStruct>1.cadena))}
				| constante			{strcpy($<myStruct>$.tipo,$<myStruct>1.tipo)}
				| LITERAL_CADENA 	{strcpy($<myStruct>$.tipo,"char*")}	
				| '(' expresion ')' {strcpy($<myStruct>$.tipo,$<myStruct>2.tipo)}
;

constante:	  constanteEntera 	{strcpy($<myStruct>$.tipo,"int")}
			| CTE_CHAR 			{strcpy($<myStruct>$.tipo,"char")}		
			| REAL				{strcpy($<myStruct>$.tipo,"float")}
;

constanteEntera:	  DECIMAL 		
					| OCTAL			
					| HEXADECIMAL 	
;
	


%%
int main ()
{
	#ifdef BISON_DEBUG
    	yydebug = 1;
    #endif

	yyin = fopen("./src/entrada.txt","r");
	FILE *output = fopen("./reporte.txt","w");

    if(yyin==NULL)
	{
    	printf("No se encontro el archivo\n");
	}
	else 
	{
		printf("Se ha encontrado el archivo\n");
		yyparse();
		escribirReporte(output);
	} 

	fclose(yyin);
	fclose(output);
}