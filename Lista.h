#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Cajon.h"
#include "Pedidos.h"

using namespace std;

struct Nodo {

    Pedido* pedido;
    Cajon* dato;
    Nodo* siguiente;
};

class Lista {
private:
    Nodo* inicio;
    Nodo* fin;
    int cantidad;

public:
    Lista();
    ~Lista();
    void agregarCajonAlFinal(Cajon* cajon);
    void agregarPedidoAlFinal(Pedido* pedido);
    void eliminarAlFinal();
    void eliminarAlInicio();
    bool estaVacia();
    int tamano();
    Nodo* getInicio();
};

#endif // LISTA_H
