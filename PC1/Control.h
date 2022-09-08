#pragma once
#include "Cliente.hpp"
#include "Pedido.hpp"

using namespace System;
using namespace System::IO;

namespace Cine
{
	// Cargar lista de pedidos y clientes, si existen
	void cargarArchivos(Lista<Pedido*>* pedidos, Lista<Cliente*>* clientes)
	{
		// Cargar pedidos
		if (File::Exists("db/pedidos.txt"))
		{
			//TO DO
		}
		else
		{
			pedidos = new Lista<Pedido*>();
		}
		// Cargar clientes
		if (File::Exists("db/clientes.txt"))
		{
			// TO DO
		}
		else
		{
			clientes = new Lista<Cliente*>();
		}
	}
	void mostrarProductosDisponibles()
	{
		printf("1) Bebida grande(591ml)\n2) Bebida mediana(473ml)\n3) Bebida chica(354ml)\n");
		printf("4) Canchita grande\n5) Canchita mediana\n6) Canchita chica\n");
		printf("7) Listo! Seguir con el pago.");
		//usar un archivo para almacener items de la dulceria
	}
	void realizarPedido(Lista<Pedido*>* pedidos, Lista<Cliente*>* clientes)
	{
		Pedido* nuevoPedido = new Pedido();
		int numeroButacas=0;
		int productoDulceria = 0;
		string nombre = registrarCliente(clientes);
		printf("Bienvenido, %s\nEscribe el numero de butacas que deseas reservar:\n", &nombre);
		scanf("%d", &numeroButacas);
		printf("Añadido! Ahora, elige los productos de la dulcería que desees:\n");
		mostrarProductosDisponibles(); 
		do
		{
			scanf("%d", &productoDulceria);
			switch (productoDulceria)
			{
			case 1:
				nuevoPedido->nuevoProducto(new Producto("Bebida grande", 16.99));
				break;
			case 2:
				nuevoPedido->nuevoProducto(new Producto("Bebida mediana", 14.99));
				break;
			case 3:
				nuevoPedido->nuevoProducto(new Producto("Bebida chica", 12.99));
				break;
			case 4:
				nuevoPedido->nuevoProducto(new Producto("Canchita grande", 19.99));
				break;
			case 5:
				nuevoPedido->nuevoProducto(new Producto("Canchita mediana", 15.99));
			case 6:
				nuevoPedido->nuevoProducto(new Producto("Canchita chica", 13.99));
				break;
			default:
				break;
			}
			printf("\nProducto agregado! Elige otra opción:\n");
		} while (productoDulceria != 7);
			system("cls");
			printf("Pedido completo! El total es de S/ %.2f.\n",nuevoPedido->getTotal());
			printf("Recuerda que la funcion empieza a las 18:15. No llegues tarde!\nPuedes recoger tus pedidos de dulceria solo con mostrar tu DNI. Hasta luego, %s!",&nombre);

	}
	void verPedido(Lista<Pedido*>* pedidos)
	{
		//TO DO
	}
	bool loggearCliente(Lista<Cliente*>* clientes)
	{
		printf("Escriba su nombre: ");
		string nombre;
		scanf("%s", &nombre);
		//Buscar nombre de cliente en lista
		while (true)
		{
			//Comparar nombres hasta encontrar coincidente
			//Si se encuentra, return true
			//Si se llega al final y no se encuentra, return false
		}

	}
	string registrarCliente(Lista<Cliente*>* clientes)
	{
		string nombre, dni;
		printf("Escriba su nombre: ");
		scanf("%s", &nombre);
		printf("Escriba su DNI: ");
		scanf("%s, &dni");
		Cliente* aux = new Cliente(nombre, dni);
		clientes->Agregar(aux);
		return nombre;
	}
}