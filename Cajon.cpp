#include <iostream>
#include "Fruta.h"
#include "Cajon.h"
#include "Pedidos.h"
#include "Stock.h"
#include "Pila.h"
#include "Cola.h"
#include "GestorDePedidos.h"
#include "Lista.h"



using namespace std;

int Cajon :: getID()
{
    return id;
}
string Cajon :: getTipoFruta()
{
    return tipoFruta;
}
int Cajon::getCantidadFrutaDisponible()
{
    return cantidadFruta;
}
void Cajon::setCantidadFruta(int cantidad)
{
    cantidadFruta = cantidad;
}

int Cajon::sacarFruta(int peso) {
    int pesoEntregar = 0;
    if (this->getCantidadFrutaDisponible()>=peso){
        this->cantidadFruta -= peso;
        pesoEntregar = peso;
    }
    else {
        pesoEntregar = this->getCantidadFrutaDisponible();
        cantidadFruta = 0;
    }
    return pesoEntregar;
}

