#include "Pedido.hpp"

class Cliente
{
    string Nombre;
    string DNI;
public:
    Cliente()
    {
        Nombre = "ND";
        DNI = "00000000";
    }
    Cliente(string nombre, string dni)
    {
        this->Nombre = nombre;
        this->DNI = dni;
    }
};