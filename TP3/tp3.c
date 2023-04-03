#include <stdio.h>
#include <string.h>
#include "stack.h"

int consultarPila()
{
    if(peek() == 'R') return 1;
    return 0;
}

int definirColumna(char caracter)
{
    char *columnas[5] = {"0","123456789","+-*/","(",")"};
    char cadena[2];
    cadena[0] = caracter;
    for(int i=0;i<5;i++)
    {
        if(strstr(columnas[i], cadena))
        {
        return i;
        }
    }
    return 5;
}

void definirEstado(int estado, int pila, int columna, int* resultado)
{
    /*
    Lo que se pushea a la pila:
    $ -> 0
    R$ -> 1
    R -> 2
    RR -> 3
    epsilon -> 4

    Estados:
    q0 -> 0
    q1 -> 1
    q2 -> 2
    Rechazo -> 3
    */
    int matriz[3][2][6][2] = {
        {{{3, 0}, {1, 0}, {3, 0}, {0, 1}, {3, 0}, {3, 0}},   // (q0,$)
         {{3, 0}, {1, 2}, {3, 0}, {0, 3}, {3, 0}, {3, 0}}},  // (q0,R)
        {{{1, 0}, {1, 0}, {0, 0}, {3, 0}, {3, 0}, {3, 0}},   // (q1,$)
         {{1, 2}, {1, 2}, {0, 2}, {3, 0}, {2, 4}, {3, 0}}},  // (q1,R)
        {{{3, 0}, {3, 0}, {0, 0}, {3, 0}, {3, 0}, {3, 0}},   // (q2,$)
         {{3, 0}, {3, 0}, {0, 2}, {3, 0}, {2, 4}, {3, 0}}}}; // (q2,R)
    resultado[0] = matriz[estado][pila][columna][0];
    resultado[1] = matriz[estado][pila][columna][1];
}

void actualizarPila(int simbolo)
{
    pop();
    switch(simbolo)
    {
    case 0:
        push('$');
        break;
    case 1:
        push('$');
        push('R');
        break;
    case 2:
        push('R');
        break;
    case 3:
        push('R');
        push('R');
        break;
    default:
        break;
    }
}

int evalChar(int est, int c)
{
    int columna = definirColumna(c);
    int pila = consultarPila();
    int siguiente[2];
    definirEstado(est, pila, columna, siguiente);
    actualizarPila(siguiente[1]);
    return siguiente[0];
}

int main()
{
    push('$');
    char line[256];
    int estado = 0;
    printf("Ingrese una expresion aritmetica: ");
    if (fgets(line, sizeof(line), stdin) != NULL)
    {
        for (int i = 0; i < sizeof(line) && line[i]!='\n'; i++)
        {
            if(line[i] == ' ' || line[i] == '\t') continue;
            estado = evalChar(estado, line[i]);
            if (estado == 3) break;
        }
        if ((estado == 1 || estado == 2) && peek() == '$')
        {
            printf("\nLa expresion aritmetica es sintacticamente correcta\n");
        }
        else
        {
            printf("\nLa expresion aritmetica no es sintacticamente correcta.\n");
        }
    }
    return 0;
}
