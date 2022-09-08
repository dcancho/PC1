#include "Control.h"
#include <iostream>
#include <stdio.h>
#define byte unsigned char

namespace Cine
{
    void menu()
    {
        printf("Seleccione una opcion:\n");
        printf("1. Realizar pedido\n");
        printf("2. Ver pedidos\n");
        printf("3. Salir\n");
    }

    int main()
    {
        Lista<Pedido *> pedidos;
        Lista<Cliente *> clientes;
        cargarArchivos(&pedidos, &clientes);

        int opcion;
        do
        {
            menu();
            scanf("%d", &opcion);
            switch (opcion)
            {
            case 1:
                system("cls");
                realizarPedido(&pedidos,&clientes);
                break;
            case 2:
                system("cls");
                verPedido(&pedidos);
                break;
            case 3:
                system("cls");
                printf("Gracias por su visita");
                system("pause");
                break;
            default:
                break;
            }
        } while (opcion != 3);
        system("cls");
        return 0;
    }
}