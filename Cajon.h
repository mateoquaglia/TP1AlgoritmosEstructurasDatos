#ifndef CAJON_H
#define CAJON_H
#include<string>
#include<iostream>
#include "Fruta.h"

using namespace std;

class Cajon
{
private:
    int id;
    string tipoFruta;
    int cantidadFruta;
public:
    Cajon(int id, Fruta* fruta, int cantidad)
    {
        this->id = id;
        this->tipoFruta = fruta->getNombre();
        this->cantidadFruta = cantidad;

    }

    int getID();
    string getTipoFruta();
    int getCantidadFrutaDisponible();
    int sacarFruta(int peso);
    void setCantidadFruta(int cantidad);
};


#endif