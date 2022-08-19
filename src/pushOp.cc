#include"stack"

void push(PILA *pila, char car[50])
{
    NODO *aux;
    NODO *top;

    top = pila->head;

    aux = (NODO*)malloc(sizeof(NODO));
    nuevo_nodo(aux);
    strcpy(aux->dato.caracter, car);
    aux->next = top;
    top = aux;
    pila->head = top;
}
