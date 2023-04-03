#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct NodeError
{
	char nombreError[70];
	int numLinea;
	struct NodeError *next;
} NodoError;

typedef struct Param
{
	char nombre[50];
	char tipo[30];
	struct Param *next;
} Parametro;

typedef struct Node
{
	char nombreIdentif[50];
	char tipo[30];
	int numLinea;
	int control; // para saber si es funcion (0), variable (1) o array (2)
	int prototipo; // para saber si tiene prototipo (1) o no (0)
	struct Param *lista_parametros;
	struct Node *next;
} Nodo;


// Listas de datos

Nodo *listaVariables = NULL;
NodoError *listaCadenasNoRec = NULL;
NodoError *listaEstructurasNoRec = NULL;
NodoError *listaErroresSemanticos = NULL;

Nodo datoAux;
char tipoDeDatoAux[30];
char nombreParametro[10][50];
char tipoParametro[10][30];
int contadorParametros = 0;
char idLlamadoAFunc[50];
char tipoLlamadoAFunc[50];

// Funciones para modificar nodo Auxiliar

void insertarTipoDeDatoNodo(Nodo *, char [30]);
int insertarVariableNodo(Nodo *, char[50], int, int);
int insertarParametrosNodo(char [50], char [30]);

// Funciones para modificar nodos en la TS

int insertarOrdenadoVariable(Nodo **, Nodo *);
void insertarParametros(Nodo *);

// Funciones para control de tipos de datos en operación binaria

char* devolverTipo(char *, Nodo **);
int esUnArreglo(char* );
char* devolverTipoIdentificador(char *);
char* insertString(char* , int, char*);
void controlTiposDeDatos(char *, char *, int, int);
int sumable(char *);
int validarTiposDeDatos(char *, char *,int);

// Funciones para control de cantidad y tipos de parámetros en la invocación a funciones

int controlCantidadDeParametrosInvocacion(char [], Nodo **);
void controlInvocacionFuncion(char[], char[], char[][30], int, Nodo **);
void validarTiposDeParametros(char[], char[], char[][30], int, Nodo **);
Nodo* buscarPrototipo(char *, Nodo **);

// Funciones para insertar ERRORES

void insertarError(NodoError **, char[], int);

// Funciones para escribir reporte

void escribirReporte(FILE *);
void escribirListaError(FILE *, NodoError *, char[]);
void escribirLista(FILE *, Nodo **, char[50], int);
void imprimirDatosError(FILE *, NodoError *);
void imprimirDatos(FILE *, Nodo *);

#endif