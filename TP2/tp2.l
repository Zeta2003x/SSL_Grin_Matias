%option noyywrap 
%option yylineno
%{
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones.c"
int count =0;
char* noyy ;
int countB=0;

%}

%x C
ENTERA_DECIMAL      [0-9]
ENTERA_OCTAL        [0-7]
ENTERA_HEXADECIMAL  [a-fA-F0-9]
LETRA [a-zA-Z]



NATURAL {ENTERA_DECIMAL}|([1-9]{ENTERA_DECIMAL}*)
INTEGER [+|-]*{NATURAL}
REAL {INTEGER}[.]{INTEGER}|{INTEGER}[.]|[.]{INTEGER}
CHAR [']{LETRA}[']
CTE_CHAR \'[^\n']*\'




RESERVADA_TDD (char|short|int|long|float|double|enum)
RESERVADA_EDC(if|else|switch|for|auto|while|break|goto|break|continue|void|return|case|continue|default|do|extern|register|signed|sizeof|static|struct|typedef|union|unsigned|volatile|_Packed)

%%

["/*"][.]*"*/"	{count++;}
"/*"		{yymore();BEGIN C;}
<C>"*/"		{noyy=strdup(yytext);new_node = newNode(noyy);sortedInserLen(&comentMulti, new_node,yyleng);BEGIN 0;}
<C>\n		{yymore();}
<C>.		{yymore();}
\/\/.*		{noyy=strdup(yytext);new_node = newNode(noyy);sortedInserLen(&comentLinea, new_node,yyleng);}


"+"|"-"|"/"|"%"|"+="|"-="|"*="|"/="|"%="|"&="|"^="|"|="|"<<="|">>=" {noyy=strdup(yytext);new_node = newNode(noyy);push(&operYCarac,new_node);}
"++"|"--"|"<"|">"|"<="|">="|"=="|"!="|"!"|"&&"|"||"|"&"|"->"|"." {noyy=strdup(yytext);new_node = newNode(noyy);push(&operYCarac,new_node);}
"="|"("|")"|"["|"]"|"*"|","|"?"|":"|";"|"{"|"}"|"..."|"#"|"##"|"'"|"\\" {noyy=strdup(yytext);new_node = newNode(noyy);push(&operYCarac,new_node);}

{RESERVADA_TDD} {noyy=strdup(yytext);new_node = newNode(noyy);push(&reservadas,new_node);}
{RESERVADA_EDC} {noyy=strdup(yytext);new_node = newNode(noyy);push(&reservadas,new_node);}
({LETRA}|"_")({LETRA}|{ENTERA_DECIMAL}|"_")* {noyy=strdup(yytext);new_node = newNode(noyy);sortedInsertAlfa(&identificadores, new_node);}
[1-9]{ENTERA_DECIMAL}* {count = count + atoi(yytext);noyy=strdup(yytext);new_node = newNode(noyy);push(&decimales,new_node);}
0[xX]{ENTERA_HEXADECIMAL}+ {noyy=strdup(yytext);new_node = newNode(noyy);push(&hexadecimales,new_node);}
0{ENTERA_OCTAL}* {;pushE(&octales,strtol(yytext, NULL, 8));}
{CHAR} {countB++,noyy=strdup(yytext);new_nodo = newNodo(noyy,countB);pushNodo(&caracteres,new_nodo);}
{REAL}* {;pushR(&reales,atof(yytext));}
{CTE_CHAR} {noyy=strdup(yytext);new_node = newNode(noyy);sortedInserLen(&litCadena, new_node,yyleng);}

"\t"
"\n"
" "
.   {;noyy=strdup(yytext);new_nodo = newNodo(noyy,yylineno);pushNodo(&noReconocidos,new_nodo);}

%%


int main() {
    
    yyin = fopen("input.txt", "r");
    yyout = fopen("output.txt", "w");	
    yylex();
  
    printList(identificadores); 
    printCount(&identificadores);
    printList2(litCadena);  
    printListSL(comentLinea);
    printListMl(comentMulti); 
    printListReserv(reservadas); 
     
    printListO(octales); 
    printListH(hexadecimales);
    printListD(decimales);
    printf("La suma total de decimales es: %d\n",count); 

    printListR(reales);
    printListC(caracteres);
    printListNR(noReconocidos);
    printListOperYCarac(&operYCarac);
    
    free(octales);
    free(hexadecimales);
    free(decimales);
    free(reales);
    free(caracteres);
    free(noReconocidos);
    free(operYCarac);
    free(reservadas);
    free(litCadena);
    free(comentMulti);
    free(comentLinea);
    free(identificadores);

    system("pause");    
    return 0;
}