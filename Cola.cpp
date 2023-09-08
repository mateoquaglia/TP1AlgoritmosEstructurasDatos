#include <iostream>
#include "Fruta.h"
#include "Cajon.h"
#include "Pedidos.h"
#include "Stock.h"
#include "Pila.h"
#include "Cola.h"
#include "GestorDePedidos.h"
#include "Lista.h"
Cola::Cola() {
    lista = new Lista();
}

Cola::~Cola() {
    delete lista;
}

void Cola::encolar(Pedido* pedido) {
    lista->agregarPedidoAlFinal(pedido);
}

void Cola::desencolar() {
    lista->eliminarAlInicio();
}

Pedido* Cola::frente() {
    return lista->getInicio()->pedido;
}

bool Cola::colaVacia() {
    return lista->estaVacia();
}
int Cola::tamano() {
    return lista->tamano();
}