#ifndef COLA_H
#define COLA_H
#include "Pedidos.h"
#include "Lista.h"

class Cola {
private:
    Lista* lista;

public:
    Cola();
    ~Cola();
    void encolar(Pedido* pedido);
    void desencolar();
    Pedido* frente();
    bool colaVacia();


    int tamano();
};

#endif
