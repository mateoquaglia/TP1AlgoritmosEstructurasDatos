#include <iostream>
#include "Fruta.h"
#include "Cajon.h"
#include "Pedidos.h"
#include "Stock.h"
#include "Pila.h"
#include "Cola.h"
#include "GestorDePedidos.h"
#include "Lista.h"


Lista::Lista() {
    inicio = NULL;
    fin = NULL;
    cantidad = 0;
}

Lista::~Lista() {
    while(inicio != NULL) {
        Nodo* nodo = inicio;
        inicio = inicio->siguiente;
        delete nodo;
    }
    fin = NULL;
    cantidad = 0;
}

void Lista::agregarCajonAlFinal(Cajon* cajon) {
    Nodo* nodo = new Nodo();
    nodo->dato = cajon;
    nodo->siguiente = NULL;
    if (estaVacia()) {
        inicio = nodo;
    } else {
        fin->siguiente = nodo;
    }
    fin = nodo;
    cantidad++;
}

void Lista::agregarPedidoAlFinal(Pedido* pedido) {
    Nodo* nodo = new Nodo();
    nodo->pedido = pedido;
    nodo->siguiente = NULL;
    if (estaVacia()) {
        inicio = nodo;
    } else {
        fin->siguiente = nodo;
    }
    fin = nodo;
    cantidad++;
}

void Lista::eliminarAlInicio() {
    if (estaVacia()) {
        return;
    }
    Nodo* nodo = inicio;
    inicio = inicio->siguiente;
    delete nodo;
    cantidad--;
    if (inicio == NULL) {
        fin = NULL;
    }
}

void Lista::eliminarAlFinal() {
    if (cantidad == 1) {
        delete inicio;
        inicio = NULL;
        fin = NULL;
    } else if (cantidad > 1) {
        Nodo* nodo = inicio;
        while (nodo->siguiente != fin) {
            nodo = nodo->siguiente;
        }
        delete fin;
        fin = nodo;
        fin->siguiente = NULL;
    }
    cantidad--;
}

bool Lista::estaVacia() {
    return inicio == NULL;
}

int Lista::tamano() {
    return cantidad;
}

Nodo* Lista::getInicio() {
    return inicio;
}
