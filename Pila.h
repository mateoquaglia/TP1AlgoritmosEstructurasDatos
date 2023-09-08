#ifndef PILA_H
#define PILA_H

#include "Lista.h"
#include "Cajon.h"

class Pila {
public:
    Pila();
    ~Pila();
    void push(Cajon* cajon);
    void pop();
    void sacarKilos(Cajon* cajon, int valor);
    Cajon* top();
    bool estaVacia();
    int tamano();
private:
    Lista lista;
};

#endif
