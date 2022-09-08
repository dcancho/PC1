#include "Producto.hpp"
#define byte unsigned char

class Asiento : public Producto
{
    byte IDPedido;
    bool ocupado;
    public:
    Asiento() : Producto()
    {
        IDPedido = 0;
        ocupado = false;
    }
    Asiento(byte idpedido) : Producto(15.0,1)
    {
        this->IDPedido = idpedido;
        ocupado = true;
    }
};