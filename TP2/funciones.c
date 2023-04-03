#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// Definición de nodos para poder armar los listados.
    struct Node {
        char* data;
        struct Node* next;
    };
    struct Nodo {
        char* data;
        int line;
        struct Nodo* next;
    };
    struct NodoR{
        float data;
        struct NodoR* next;
    };
    struct Enteros {
        int data;
        struct Enteros* next;
    };

// Declaración de las distintas listas.
    struct Node* identificadores = NULL;
    struct Node* litCadena = NULL;
    struct Node* comentLinea = NULL;
    struct Node* comentMulti = NULL;
    struct Node* reservadas = NULL;
    struct Nodo* noReconocidos=NULL;
    struct Node* operYCarac=NULL;
    struct Enteros* octales =NULL;
    struct Node* decimales=NULL;
    struct Node* hexadecimales=NULL;
    struct NodoR* reales = NULL;
    struct Nodo* caracteres = NULL;
    struct Node* new_node ;
    struct Nodo* new_nodo ;

// Funciones para crear nuevo nodo.
    struct Node* newNode(char* new_data)
    {        
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

        new_node->data = new_data;
        new_node->next = NULL;
    
        return new_node;
    }

    struct Nodo* newNodo(char* new_data,int lineNumber)
    {
        struct Nodo* new_nodo = (struct Nodo*)malloc(sizeof(struct Nodo));

        new_nodo->data = new_data;
        new_nodo->line = lineNumber;
        new_nodo->next = NULL;

        return new_nodo;
    }

// Funciones para pushear un nodo a una lista.
    void pushNodo(struct Nodo** head_ref,struct Nodo* new_node)
    {
        struct Nodo* current;

        if (*head_ref == NULL) {
        *head_ref = new_node;
        } else {
            current = *head_ref;
            while(current->next != NULL)
            {
                current = current->next;
            }
        new_node->next = current->next;
        current->next = new_node;
        }
    }

    void pushR(struct NodoR** head_ref, float new_data)
    {
        struct NodoR* new_node = (struct NodoR*)malloc(sizeof(struct NodoR));
    
        new_node->data = new_data;
        new_node->next = *head_ref;
    
        (*head_ref) = new_node;
    }

    void pushE(struct Enteros** head_ref, int new_data)
    {
        struct Enteros* new_node = (struct Enteros*)malloc(sizeof(struct Enteros));

        new_node->data = new_data;
        new_node->next = *head_ref;

        (*head_ref) = new_node;
    }

    void sortedInserLen(struct Node** head_ref,struct Node* new_node,int x)
    {   
        struct Node* current;
        struct Node* aux=*head_ref;
        int a = 0;
        while(aux!= NULL){
            if((strcmp(new_node->data,aux->data))==0){
            a++;
            }
        aux=aux->next;
        }
        if (a==0) { 
            if (*head_ref == NULL || (strlen((*head_ref)->data))>=x) {
                new_node->next = *head_ref;
                *head_ref = new_node;
            } else {
                current = *head_ref;
                while (current->next != NULL
                    && strlen(current->next->data)<x ) {
                    current = current->next;
                }
                new_node->next = current->next;
                current->next = new_node;
            }
        }
    }

    void sortedInsertAlfa(struct Node** head_ref,struct Node* new_node)
    {
        struct Node* current;
        
        if (*head_ref == NULL || (strcasecmp(((*head_ref)->data),new_node->data)>0)){
            new_node->next = *head_ref;
            *head_ref = new_node;
        } else {
            current = *head_ref;
            while (current->next != NULL
                && (strcasecmp(current->next->data,new_node->data))<0 ) {
                current = current->next;
            }
            new_node->next = current->next;
            current->next = new_node;
        }
    }

    void push(struct Node** head_ref,struct Node* new_node)
    {
        struct Node* current;

        if (*head_ref == NULL){
            *head_ref = new_node;
        } else {
            current = *head_ref;
            while(current->next != NULL){
                current = current->next;
        }

        new_node->next = current->next;
        current->next = new_node;
    }
    }

// Funciones para imprimir listas.
    void printList(struct Node* node)
    {   printf("Listado de identificadores: \n");
        while (node != NULL) {
            printf(" %s \n", node->data);
            node = node->next;
        }
        printf("-----------------------------------\n");
    }

    void printListSL(struct Node* node)
    {   printf("Listado comentario de una linea : \n");
        while (node != NULL) {
            printf(" %s \n", node->data);
            node = node->next;
        }
        printf("-----------------------------------\n");
    }

    void printListMl(struct Node* node)
    {   printf("Listado comentarios multilinea: \n");
        while (node != NULL) {
            printf(" %s \n", node->data);
            node = node->next;
        }
        printf("-----------------------------------\n");
    }

    void printList2(struct Node* node)
    {   printf("Listado de cadenas de caracteres: \n");
        while (node != NULL) {
            printf("%s", node->data);
            printf(" tiene una logitud de :%d \n", strlen(node->data)-2);
            node = node->next;
        }
        printf("-----------------------------------\n");
    }

    void printListReserv(struct Node* node)
    {   printf("Listado de palabras reservadas: \n");
        while (node != NULL) {
            printf("%s\n", node->data);
            
            node = node->next;
        }
        printf("-----------------------------------\n");
    }
    
// Función para eliminar duplicados.
    int removeDuplicates(struct Node** head,char* key)
    {
        struct Node* current = *head;
        struct Node* next_next;
    
        int count =1;

        while (current->next != NULL)
        {
            if (strcmp(key,current->next->data)==0) {
                count++;             
                next_next = current->next->next;
                free(current->next);
                current->next = next_next; 
            } else {
                current = current->next;
            }
        }

        return count;
    }

// Función para imprimir lista de operadores y caractéres de puntuación.
    void printListOperYCarac(struct Node** node)
    {   printf("Listado de operadores y caracteres de puntuación: \n");
        struct Node* current = *node;
        int contador = 0;
        while (current != NULL) {
            printf("%s", current->data);
            contador = removeDuplicates(&current,current->data);
            printf(" se repitio: %d\n",contador);
            current = current->next;
        }
        printf("-----------------------------------\n");
    }

// Función para contar duplicados.
    void printCount(struct Node** head){
        int count = 0;
        struct Node* current = *head;
        while (current != NULL){
        printf("%s",current->data);
        count = removeDuplicates(&current,current->data);
        printf(" se repitio: %d\n",count);
        current=current->next;
        }    
    printf("-----------------------------------\n");    
    }

// Función para imprimir lista de caracteres o cadenas no reconocidas.
    void printListNR(struct Nodo* node)
    {   printf("Listado caracteres o cadenas no reconocidos : \n");
        while (node != NULL) {
            printf(" %s ", node->data);
            printf("se encuentra en la linea %d \n", node->line);
            node = node->next;
        }
        printf("-----------------------------------\n");
    }

// Funciones de conversión de constantes numéricas.
    int OctalToDecimal(int n) {
        int p = 0, decimal = 0, r;
        
        while(n>0) {
            r = n % 10;
            n = n / 10;
            decimal = decimal + r * pow( 8 , p );    
            ++p;  
        }
        return decimal;
    }

    int HexadecimalToDecimal(char *hex) {
        int decimal = 0;
        int i = 0, val, len;

        len = strlen(hex);
        len--;

        for(i=0; hex[i]!='\0'; i++)
        {
            if(hex[i]>='0' && hex[i]<='9')
            {
                val = hex[i] - 48;
            }
            else if(hex[i]>='a' && hex[i]<='f')
            {
                val = hex[i] - 97 + 10;
            }
            else if(hex[i]>='A' && hex[i]<='F')
            {
                val = hex[i] - 65 + 10;
            }
            decimal += val * pow(16, len);
            len--;
        }
        return decimal;
    }

// Función para imprimir lista de constantes decimales.
    void printListD(struct Node* node)
    {
        printf("Listado de Decimales: \n");
        while (node != NULL) {
            printf(" %s \n", node->data);
            node = node->next;
        }
        printf("-----------------------------------\n");
    }

// Función para imprimir lista de constantes octales.
    void printListO(struct Enteros* node)
    {
        int decimal=0;
        printf("Listado de Octales: \n");
        while (node != NULL) {
            printf("0%o ", node->data);
            printf("y su valor en decimal es: %d \n",(node->data));
            node = node->next;
        }
        printf("-----------------------------------\n");
    }

// Función para imprimir lista de constantes reales.
    void printListR(struct NodoR* node)
    {
        printf("Listado de Reales: \n");
    float mantissa = 0; 
    int exponent=0; 
        while (node != NULL) {
            printf("%f-",node->data );
            exponent = node->data; 
            mantissa = (node->data) - exponent; 
        
            printf("-La mantisa del numero es: %f ",mantissa); 
            printf(" y su parte entera: %d \n",exponent); 
            node = node->next;
        }
        printf("-----------------------------------\n");
    }

// Función para imprimir lista de constantes caracter.
    void printListC(struct Nodo* node)
    {
        printf("Listado constantes caracter: \n");
        while (node != NULL) {
            printf("%d. ", node->line);
            printf("%s \n", node->data);
            
            node = node->next;
        }
        printf("-----------------------------------\n");
    }

// Función para imprimir lista de constantes hexadecimales.
    void printListH(struct Node* node)
    {
        int decimal = 0;
        printf("Listado de Hexadecimales: \n");
        while (node != NULL) {
            decimal=HexadecimalToDecimal(node->data);
            printf("%s ", node->data);
            printf("y su valor en decimal es: %d \n",decimal);
            node = node->next;
        }
        printf("-----------------------------------\n");
    }