#include "Cliente.hpp"
#include "Pedido.hpp"
#include <iostream>
#include <stdio.h>
#define byte unsigned char

using namespace System.IO;

namespace Cine
{
    void menu()
    {
        printf("Seleccione una opcion:\n");
        printf("1. Realizar pedido\n");
        printf("2. Ver pedidos\n");
        printf("3. Salir\n");
    }

    // Cargar lista de pedidos y clientes, si existen
    void cargarArchivos(Lista<Pedido *> *pedidos, Lista<Cliente *> *clientes)
    {
        // Cargar pedidos
        if (File::Exists("db/pedidos.txt"))
        {
            // TO DO
        }
        // Cargar clientes
        if (File::Exists("db/clientes.txt"))
        {
            // TO DO
        }
    }

    int main()
    {

        Lista<Pedido *> pedidos = nullptr;
        Lista<Cliente *> clientes = nullptr;
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
                realizarPedido();
                break;
            case 2:
                system("cls");
                verPedido();
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