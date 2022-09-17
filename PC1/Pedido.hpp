#include "Asiento.hpp"
#include "Lista.hpp"
#include "Producto.hpp"
#include <fstream>
#define byte unsigned char

class Pedido
{
    Lista<Producto*> Productos;
    byte ID;
    float Total;
    public:
    Pedido()
    {
        Total = 0;
        Productos = Lista<Producto*>();
    }
    void nuevoProducto(Producto* producto)
    {
        Productos.Agregar(producto);
        Total += producto->getPrecio();
    }
    float getTotal()
    {
        return Total;
    }
    byte getID()
    {
        return ID;
    }
    void EmitirComprobante(bool imprimirArchivo)
    {
        
    }
};