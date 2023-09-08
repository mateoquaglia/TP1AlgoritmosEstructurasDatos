#ifndef PEDIDO_H
#define PEDIDO_H
#include<string>
#include<iostream>
#include "Fruta.h"

using namespace std;

class Pedido
{
private:
    string cliente;
    string frutaPedida;
    int cantidad;
    bool mayorista = false;
    bool minorista = false;
public:
    Pedido(string cliente, Fruta* fruta, int cantidadPedida ){
        this->cliente = cliente;
        frutaPedida = fruta->getNombre();
        cantidad = cantidadPedida;
        //determinarTipoPedido(*this);
    }


    string getCliente();
    string determinarTipoPedido(Pedido pedido);
    string getFrutaPedida();
    int getPesoPedido();
    bool esMayorista();
    bool esMinorista();
    void addPedido(Pedido pedido);

};
#endif