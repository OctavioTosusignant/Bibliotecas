#include"stack"

int IsEmpty(PILA pila)
{
    if(pila.head == NULL)
    {
        //printf(">> La lista esta vacia.\n");
        return(1);
    }
    else
    {
        //printf(">> La lista contiene elementos. \n");
        return(0);
    }
}
