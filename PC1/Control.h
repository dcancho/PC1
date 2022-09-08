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
	void realizarPedido(Lista<Pedido*>* pedidos)
	{

	}
	void verPedido(Lista<Pedido*>* pedidos)
	{

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
	void registrarCliente(Lista<Cliente*>* clientes)
	{
		string nombre, dni;
		printf("Escriba su nombre: ");
		scanf("%s", &nombre);
		printf("Escriba su DNI: ");
		scanf("%s, &dni");
		Cliente* aux = new Cliente(nombre, dni);
		
	}
}