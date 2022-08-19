#include"stack"

void pop(PILA *pila)
{
    NODO *aux;
    aux = pila->head;

    if(pila->head == NULL)
    {
        printf("Pila vacia\n");
    }
    else
    {
        pila->head = aux->next;
        free(aux);
    }
}
