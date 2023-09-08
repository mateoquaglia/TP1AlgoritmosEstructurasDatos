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

string Fruta::getNombre() {
    return nombre;
}
void Fruta::setNombreFruta(string nombre){
    this->nombre = nombre;
}