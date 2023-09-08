#include <iostream>
#include "Fruta.h"
#include "Cajon.h"
#include "Pedidos.h"
#include "Stock.h"
#include "Pila.h"
#include "Cola.h"
#include "GestorDePedidos.h"
#include "Lista.h"
#include <string>

using namespace std;

string Pedido::getCliente()
{
    return this->cliente;

}
bool Pedido::esMayorista() {
    if (this->cantidad%5==0 &&this->cantidad%4==0){
    return true;
    }else {
        return false;
    }
}

int Pedido::getPesoPedido() {
    if (cantidad == 20) {
        cantidad=1;
        return cantidad;
    } else {
    return cantidad;
    }

}

string Pedido::getFrutaPedida()
{
    return frutaPedida;
}



