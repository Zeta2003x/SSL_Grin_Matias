#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int definirColumna(char caracter)
{
    char *columnas[5] = {"0","1234567","89","abcdefABCDEF","xX"};
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

int definirEstado(int estado, int columna)
{
    int matriz[7][6] = {
        {1, 2, 2, 6, 6, 6},
        {5, 5, 6, 6, 3, 6},
        {2, 2, 2, 6, 6, 6},
        {4, 4, 4, 4, 6, 6},
        {4, 4, 4, 4, 6, 6},
        {5, 5, 6, 6, 6, 6},
        {6, 6, 6, 6, 6, 6}};
    return matriz[estado][columna];
}

int main()
{

    // Abro archivo
    FILE *inputfile;
    inputfile = fopen("input.txt", "r");

    // Defino tamanio del archivo
    fseek(inputfile, 0L, SEEK_END);
    int size = ftell(inputfile) + 1;

    // Vuelvo el cursor del archivo a 0.
    fseek(inputfile, 0L, SEEK_SET);

    // Leo el archivo entero y lo guardo en input
    char input[size];

    fgets(input, size, inputfile);
    printf("Numeros a evaluar: %s.\n\n", input);
    // Cierro el archivo input
    fclose(inputfile);

    // Lee caracter a caracter el input y define la columna
    int i = 0;
    int columna;
    int estado = 0;
    FILE *salida = fopen ("salida.txt", "w");
   
    
    while (input[i] != '\0')
    {
        while ((input[i] != '\0') && (input[i] != ','))
        {
            columna = definirColumna(input[i]);
            estado = definirEstado(estado, columna);
            // printf("La columna es %i.\n", columna);
            printf("%c", input[i]);
            fprintf(salida, "%c", input[i]);
            i++;
        }
        // printf("%i.\n", estado);

        switch (estado)
        {
        case 1:
            printf(" es OCTAL \n");
            fprintf(salida, "       OCTAL \n");
            break;
        case 2:
            printf(" es DECIMAL \n");
            fprintf(salida, "       DECIMAL \n");
            break;
        case 4:
            printf(" es HEXADECIMAL \n");
            fprintf(salida, "       HEXADECIMAL \n");
            break;
        case 5:
            printf(" es OCTAL \n");
            fprintf(salida, "       OCTAL \n");
            break;
        default:
            printf(" es NO RECONOCIDA \n");
            fprintf(salida, "       NO RECONOCIDA \n");
        }

        estado = 0;
        i++;
    }

    fclose(salida);
    system("pause");
}