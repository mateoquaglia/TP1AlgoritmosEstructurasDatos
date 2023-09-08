#include <iostream>
#include "Fruta.h"
#include "Cajon.h"
#include "Pedidos.h"
#include "Stock.h"
#include "Pila.h"
#include "Cola.h"
#include "GestorDePedidos.h"
#include "Lista.h"
Pila::Pila() {}

Pila::~Pila() {}

void Pila::push(Cajon* cajon) {
    lista.agregarCajonAlFinal(cajon);
}

void Pila::pop() {
    lista.eliminarAlFinal();
}


Cajon* Pila::top() {
    Nodo* nodo = lista.getInicio();
    while (nodo->siguiente != NULL) {
        nodo = nodo->siguiente;
    }
    return nodo->dato;
}

bool Pila::estaVacia() {
    return lista.estaVacia();
}

int Pila::tamano() {
    return lista.tamano();
}
