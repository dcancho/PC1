#include "Producto.hpp"
#define byte unsigned char

class Asiento : public Producto
{
    bool ocupado;
    public:
    Asiento() : Producto()
    {
        ocupado = false;
    }
    Asiento() : Producto("Butaca",15.0)
    {
        ocupado = true;
    }
};