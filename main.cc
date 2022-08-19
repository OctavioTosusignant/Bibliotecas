#include".\include\stack"
#include<cstdio>
#include<string>
#include<iostream>

void menu()
{
    std::cout<< "*** Pila ***\n" << std::endl;
    std::cout<< "\n" <<std::endl;
    std::cout<< "1. Introducir un elemento a la pila. \n" <<std::endl;
    std::cout<< "2. Quitar un elemento de la pila. \n" <<std::endl;
    std::cout<< "3. Visualizar elementos de la pila. \n" <<std::endl;
    std::cout<< "4. Salir. \n" <<std::endl;
    std::cout<< "\n" <<std::endl;
    std::cout<< "Digite una opcion: " <<std::endl;
}

int main()
{
    PILA *pila = (PILA*)malloc(sizeof(PILA));
    char cadena[50];
    nueva_pila(pila);
    int opcion;
    int n;
    do
    {
        system("cls");
        menu();
        std::cin >> opcion;

        switch(opcion)
        {
            case 1:
                    do
                    {
                        system("cls");
                        std::cout<< "*** Anadir un elemento a la pila ***\n" <<std::endl;
                        std::cout<< "*** Ingrese una cadena: \n" <<std::endl;
                        std::cin >> cadena;
                        push(pila, cadena);
                        std::cout<< "\n" <<std::endl;
                        std::cout<< "*** Presione 0 para agregar un nuevo elemento.\n" <<std::endl;
                        std::cout<< "*** Presione 1 para volver al menu principal.\n" <<std::endl;
                        std::cout<< "\n" <<std::endl;
                        std::cout<< "** Digite una opcion: " <<std::endl;
                        std::cin >> n;
                    }
                    while(n != 1);
                    break;
            case 2:
                    do
                    {
                        system("cls");
                        std::cout<< "*** Quitar un elemento de la pila *** \n" <<std::endl;
                        pop(pila);
                        print_pila(pila);
                        std::cout<< "\n" <<std::endl;
                        std::cout<< "*** Presione 0 para quitar un elemento.\n" <<std::endl;
                        std::cout<< "*** Presione 1 para volver al menu principal.\n" <<std::endl;
                        std::cout<< "\n" <<std::endl;
                        std::cout<< "** Digite una opcion: " <<std::endl;
                        std::cin >> n;
                    }
                    while(n != 1);
                    break;
            case 3:
                    do
                    {
                        system("cls");
                        std::cout<< "*** Visualizar elementos de la pila ***\n" <<std::endl;
                        print_pila(pila);
                        std::cout<< "\n" <<std::endl;
                        std::cout<< "*** Presione 1 para volver al menu principal.\n" <<std::endl;
                        std::cout<< "\n" <<std::endl;
                        std::cout<< "** Digite una opcion: " <<std::endl;
                        std::cin >> n;
                    }
                    while(n != 1);
                    break;
            default:
                    break;
        }
    }
    while(opcion < 4);
    free(pila);
    return(0);
}

