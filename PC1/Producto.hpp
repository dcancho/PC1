#include <conio.h>
#include <stdio.h>
#define byte unsigned char
using namespace std;

class Producto
{
    string Nombre;
    float Precio;
public:
    Producto()
    {
        Nombre = "";
        Precio = 0;
    }
	Producto(string nombre, float precio)
	{
		this->Nombre = nombre;
		this->Precio = precio;
	}
    float getPrecio()
    {
        return Precio;
    }
};