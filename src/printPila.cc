#include"stack"

void print_pila(PILA *pila)
{
    NODO *aux;
    aux = pila->head;

    if(IsEmpty(*pila) == 1)
    {
        printf("| Pila vacia |\n");
    }
    else
    {
        printf("|Pila|\n\n");
        while(aux != NULL)
        {
            printf("|%s   |\n",aux->dato.caracter);
            aux = aux->next;
        }
    }
    printf("\n");
}
