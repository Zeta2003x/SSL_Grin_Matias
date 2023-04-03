%{
#include "TP4.tab.h"
#include <stdio.h>
#include <string.h>
%}

%option yylineno




OPER_ASIGNACION					"+="|"-="|"*="|"/="|"%="|"^="
DATA_TYPE						int|char|float|double|long|short|signed|unsigned|void
LIBRARIES						"<string.h>"|"<stdlib.h>"|"<math.h>"|"<stdbool.h>"|"<ctype.h>"|"<time.h>"

%%

"int main"              		{ return INT_MAIN; }

"sizeof"			    		{ return SIZE_OF; }
"include"						{ return INCLUDE; }
"define"						{ return DEFINE; }

"default"               		{ return DEFAULT; } 
"case"                  		{ return CASE; }
"if"                    		{ return IF; }
"else"                  		{ return ELSE; }
"switch"                		{ return SWITCH; }
"while"                 		{ return WHILE; }
"do"                    		{ return DO; }
"for"                   		{ return FOR; }
"goto"                  		{ return GOTO; }
"continue"              		{ return CONTINUE; }
"return"                		{ return RETURN; }
"break"                 		{ return BREAK; }

"<stdio.h>"						{ return STDIO;}
{LIBRARIES}						{ strcpy(yylval.myStruct.cadena,yytext);   return LIBRERIA;} 

{DATA_TYPE}						{ strcpy(yylval.myStruct.cadena,yytext);  return TIPO_DATO;} 
[A-Za-z_][A-Za-z_0-9]* 			{ strcpy(yylval.myStruct.cadena,yytext);  return IDENTIFICADOR;}
[1-9][0-9]*             		{ yylval.myStruct.entero = atoi(yytext);  return DECIMAL;}
0[0-7]*							{ strcpy(yylval.myStruct.cadena,yytext);  return OCTAL;}
0[xX][a-fA-F0-9]				{ strcpy(yylval.myStruct.cadena,yytext);  return HEXADECIMAL;}
\'.\'							{ yylval.myStruct.caracter=yytext[1]; 	 return CTE_CHAR;}
\"(\\.|[^\\"])*\"    			{ strcpy(yylval.myStruct.cadena,yytext); return LITERAL_CADENA;}
[0-9]*\.[0-9]+([eE][\+\-]?[0-9]+)?|[0-9]+\.([eE][\+\-]?[0-9]+)?|[0-9]([eE][\+\-]?[0-9]+)? { yylval.myStruct.real = atof(yytext); return REAL;}


">="                    		{ return MAYOR_IGUAL; }
"<="                    		{ return MENOR_IGUAL; }
"=="                    		{ return IGUALDAD; }
"!="                    		{ return DESIGUALDAD; }
"&&"                    		{ return AND; }
"\|\|"                  		{ return OR; }
"++"				    		{ return DOBLE_MAS; }
"--"				    		{ return DOBLE_MENOS; }
"->"				    		{ return ARROW; }

{OPER_ASIGNACION}				{ return OPER_ASIGNACION; }

("+"|"-"|"*"|"/"|"^"|"%"|"&"|"~"|"!"|"<"|">"|","|";"|"="|"("|")"|"["|"]"|"{"|"}"|"."|":"|"?"|"="|"#")	{ return yytext[0]; }


[ \t\r\n]+                		;

.					    		{return ERROR_LEX;}



%%