#include <conio.h>
#include <stdio.h>

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
        Nombre = nombre;
        this->Precio = precio;
    }
    float getPrecio()
    {
        return Precio;
    }
};