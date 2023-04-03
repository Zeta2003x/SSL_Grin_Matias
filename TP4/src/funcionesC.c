#include "funcionesC.h"

// Funciones para modificar nodo Auxiliar

void insertarTipoDeDatoNodo(Nodo *n, char tipo[30])
{
	strcpy(n->tipo, tipo);
}

int insertarVariableNodo(Nodo *n, char nombre[50], int linea, int ctrl)
{
	strcpy(n->nombreIdentif, nombre);
	n->numLinea = linea;
	n->control = ctrl;
}

int insertarParametrosNodo(char nombre[50], char tipo[30])
{
	strcpy(nombreParametro[contadorParametros],nombre);
	strcpy(tipoParametro[contadorParametros],tipo);
	contadorParametros++;
}


// Funciones para agregar nodos a la TS

int insertarOrdenadoVariable(Nodo **headLista, Nodo *nodoAux)
{
	Nodo *p = NULL, *ant = NULL;
	p = *headLista;

	while (p != NULL && strcmp(nodoAux->nombreIdentif, p->nombreIdentif) > 0)
	{
		ant = p;
		p = p->next;
	}

	if (p != NULL && strcmp(nodoAux->nombreIdentif, p->nombreIdentif) == 0)
	{
		char cadenaErrorAux[70] = "Doble declaracion de la variable ";
		strcat(cadenaErrorAux, nodoAux->nombreIdentif);
		insertarError(&listaErroresSemanticos, cadenaErrorAux, nodoAux->numLinea); // Hay doble declaracion
		return 1;
	}

	Nodo *n = malloc(sizeof(struct Node));
	strcpy(n->nombreIdentif, nodoAux->nombreIdentif);
	strcpy(n->tipo, nodoAux->tipo);
	n->numLinea = nodoAux->numLinea;
	n->control = nodoAux->control;
	n->next = p;

	if (p != *headLista)
		ant->next = n;
	else
		*headLista = n;

	if ((!n->control) && (contadorParametros > 0))
	{
		insertarParametros(n);
	}

	return 0; // No hay doble declaracion
}

void insertarParametros(Nodo *headLista)
{
	Parametro *k = malloc(sizeof(struct Param));
	strcpy(k->nombre, nombreParametro[0]);
	strcpy(k->tipo, tipoParametro[0]);
	k->next = NULL;
	headLista->lista_parametros = k;

	Parametro *current = headLista->lista_parametros;
	for(int i=1;i<contadorParametros;i++)
	{
		Parametro *n = malloc(sizeof(struct Param));
		strcpy(n->nombre, nombreParametro[i]);
		strcpy(n->tipo, tipoParametro[i]);
		n->next = NULL;
		current->next = n;
		current = current->next;
	}
	contadorParametros = 0;
}


// Funciones para control de tipos de datos en operación binaria

char* devolverTipo(char * nombreVar, Nodo **listaVariables)
{
	Nodo *p = NULL;
	p = *listaVariables;
	while (p != NULL && strcmp(nombreVar, p->nombreIdentif) != 0)
	{
		p = p->next;
	}
	if (p == NULL) return "void"; // Asumimos este valor de tipo porque como no está declarada no hay valor para realizar la operación
	return p->tipo;
}

int esUnArreglo(char* nombreVar)
{
	Nodo *p = NULL;
	p = listaVariables;
	while (p != NULL && strcmp(nombreVar, p->nombreIdentif) != 0)
	{
		p = p->next;
	}
	if(p == NULL)
		return 2; // No se encontró el identificador 
	else if(p->control == 2)
		return 1; // Es un arreglo
	else
		return 0; // No es un arreglo
}

char* devolverTipoIdentificador(char *nombre)
{
	char* tipoVar;
	strcpy(tipoVar,devolverTipo(nombre,&listaVariables));
	
	return tipoVar;
}

// Función para insertar un string dentro de otro
char* insertString(char* dest, int pos, char* seed)
{
    char * strC;
    strC = (char*)malloc(strlen(dest)+strlen(seed)+1);
    strncpy(strC,dest,pos);
    strC[pos] = '\0';
    strcat(strC,seed);
    strcat(strC,dest+pos);
	return strC;
}

void controlTiposDeDatos(char *tipoVar1, char *tipoVar2, int linea, int op)
{
	char operacion[15];

	switch (op)
	{
	case 0: strcpy(operacion,"suma");
		break;
	case 1: strcpy(operacion,"resta");
		break;
	case 2: strcpy(operacion,"multiplicacion");
		break;
	case 3: strcpy(operacion,"division");
		break;
	default:
		break;
	}

	char *mensaje;
	switch (validarTiposDeDatos(tipoVar1,tipoVar2,linea))
	{
		case 0:
			mensaje = insertString("Hay una  con operandos no sumables", 8, operacion);
			insertarError(&listaErroresSemanticos, mensaje, linea);
			break;
		case 1: 
			printf("\nHay una %s entre tipo '%s' en la linea %d\n", operacion, tipoVar1, linea);
			break;
		case 2: 
			mensaje = insertString("WARNING:  con conversion implicita", 9, operacion);
			insertarError(&listaErroresSemanticos, mensaje, linea);
			break;
		default:
			break;
	}
}

int sumable(char *tipo)
{
    if ((strcmp("void", tipo) == 0) || (strcmp("char*", tipo) == 0))
        return 0; // no es sumable
    else
        return 1; // es sumable
}

int validarTiposDeDatos(char *tipo1, char *tipo2, int linea)
{
    if (sumable(tipo1) && sumable(tipo2))
    {
        if (strcmp(tipo1, tipo2) == 0)
            return 1;  // son del mismo tipo y sumables
        else
            return 2;  // hay conversion implicita 
    }
    else
        return 0;  // uno o ambos no son sumables
}


// Funciones para control de cantidad y tipos de parámetros en la invocación a funciones

int controlCantidadDeParametrosInvocacion(char identificadorFuncion[], Nodo **lista)
{
 	Nodo *p = NULL;
 	p = *lista;
 	int contadorParam = 0;
 	while (p != NULL && strcmp(identificadorFuncion, p->nombreIdentif) != 0)
 	{
 		p = p->next;
 	}
 	if(p == NULL)
	{
 		return -1;
 	}
	Parametro *param = p->lista_parametros;
 	while(param != NULL)
	{
 		contadorParam ++;
 		param=param->next;
 	}
 	return contadorParam;
}

void controlInvocacionFuncion(char identificadorFuncion[], char tipoFuncion[], char parametros[][30], int linea, Nodo **lista)
{
 	int cantParamTS = controlCantidadDeParametrosInvocacion(identificadorFuncion,lista);

 	if (cantParamTS == -1)
	{
 		insertarError(&listaErroresSemanticos, "Invocacion de una funcion no declarada", linea);
		return;
 	}
	if (contadorParametros == cantParamTS)
	{
		validarTiposDeParametros(identificadorFuncion, tipoFuncion, parametros, linea, lista);
	}
	else
	{
		insertarError(&listaErroresSemanticos, "Invocacion de funcion con cantidad de parametros incorrecta", linea);
	}
}

void validarTiposDeParametros(char identificadorFuncion[], char tipoFuncion[], char parametros[][30], int linea, Nodo **lista)
{
	Nodo * prototipo = buscarPrototipo(identificadorFuncion, lista);

	if (strcmp(prototipo->tipo, tipoFuncion))
	{
		insertarError(&listaErroresSemanticos, "Invocacion de funcion con tipo de retorno incorrecto", linea);
		return;
 	}
	int cont = 0;
	Parametro *param = prototipo->lista_parametros;
	while (param != NULL)
	{
		if(strcmp(param->tipo, parametros[cont]))
		{
		
			insertarError(&listaErroresSemanticos, "Invocacion de funcion con tipo de parametros incorrectos", linea);
			return;
		}
		param = param->next;
		cont++;
	}
	printf("\nLlamado a funcion %s de tipo %s en linea %i\n",identificadorFuncion, tipoFuncion, linea);
}

Nodo* buscarPrototipo(char * identificadorFuncion, Nodo **lista)
{
	Nodo * aux = NULL;
	aux = *lista;

	while(aux != NULL){
		if(strcmp(aux->nombreIdentif, identificadorFuncion) == 0){
			return aux;
		}
		aux = aux->next;
	}
}


// Funciones para insertar ERRORES

void insertarError(NodoError **headLista, char nombre[], int linea)
{
	NodoError *n = malloc(sizeof(struct NodeError));
	strcpy(n->nombreError, nombre);
	n->numLinea = linea;
	n->next = NULL;

	NodoError *current;

	if (*headLista == NULL)
	{
		*headLista = n;
	}
	else
	{
		current = *headLista;
		while (current->next != NULL)
		{
			current = current->next;
		}

		n->next = current->next;
		current->next = n;
	}
}


// Funciones para escribir reporte

void escribirReporte(FILE *reporte)
{
	fprintf(reporte, "----------------------------REPORTE----------------------------\n");
	escribirLista(reporte, &listaVariables, "Variables",1);
	fprintf(reporte, "\n\n---------------------------------------------------------------\n\n");
	escribirLista(reporte, &listaVariables, "Funciones",0);
	fprintf(reporte, "\n\n---------------------------------------------------------------\n\n");
	escribirListaError(reporte, listaCadenasNoRec, "Cadenas No Reconocidas");
	fprintf(reporte, "\n\n---------------------------------------------------------------\n");
	escribirListaError(reporte, listaEstructurasNoRec, "Estructuras No Reconocidas");
	fprintf(reporte, "\n\n---------------------------------------------------------------\n\n");
	escribirListaError(reporte, listaErroresSemanticos, "Errores Semanticos");
	fprintf(reporte, "\n\n\n------------------------fin del reporte------------------------");
}

void escribirListaError(FILE *archivo, NodoError *node, char tipoLista[])
{
	fprintf(archivo, "Listado de %s: ", tipoLista);

	if (node == NULL)
	{
		fprintf(archivo, "No se encontraron");
	}
	else
	{
		while (node != NULL)
		{
			imprimirDatosError(archivo, node);
			node = node->next;
		}
	}
}

void escribirLista(FILE *archivo, Nodo **node, char tipoLista[], int tipoNodoLista)
{
	fprintf(archivo, "Listado de %s: ", tipoLista);
	Nodo *actual = *node;
	if (actual == NULL)
	{
		fprintf(archivo, "No se encontraron");
	}
	else
	{
		while (actual != NULL)
		{
			// Para que imprima unicamente los nodos adecuados
			switch (tipoNodoLista) 
			{
				case 0: // Quiere que se impriman las funciones
					if (actual->control == 0) 
						imprimirDatos(archivo, actual);
					break;
				case 1: case 2: // Quiere que imprimar las variables y arreglos
					if (actual->control == 1 || actual->control == 2)
						imprimirDatos(archivo, actual);
					break;
				default:
					break;
			}
			actual = actual->next;
		}
	}
}

void imprimirDatosError(FILE *arch, NodoError *nodo)
{
	fprintf(arch, "\n%s en linea %i", nodo->nombreError, nodo->numLinea);
}

void imprimirDatos(FILE *arch, Nodo *nodo)
{
	if (nodo->control == 1)
		fprintf(arch, "\nVariable %s, de tipo %s, en linea %i.", nodo->nombreIdentif, nodo->tipo, nodo->numLinea);
	else if (nodo->control == 2)
		fprintf(arch, "\nArreglo %s, de tipo %s, en linea %i.", nodo->nombreIdentif, nodo->tipo, nodo->numLinea);
	else
	{
		fprintf(arch, "\nFuncion %s, con parametro retornado de tipo %s, en linea %i.", nodo->nombreIdentif, nodo->tipo, nodo->numLinea);
		if (nodo->lista_parametros == NULL)
			fprintf(arch, " No recibe parametros.");
		else
		{
			fprintf(arch, " Parametros recibidos:");
			Parametro * aux;
			aux = nodo->lista_parametros;
			while (aux != NULL)
			{
				fprintf(arch, "\n (-) %s de tipo '%s'",aux->nombre,aux->tipo);
				aux = aux->next;
			}
		}
	}
}

