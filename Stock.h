#ifndef STOCK_H
#define STOCK_H

#include "Pila.h"
#include "Cajon.h"
#include "Fruta.h"

class Stock {
private:
    Pila* naranjas;
    Pila* bananas;
    Pila* manzanas;
    Cajon* cajon;
    Cajon* cajonDeArriba;
    Fruta* naranja = new Fruta();
    Fruta* banana = new Fruta();
    Fruta* manzana = new Fruta();
public:
    Stock(){
    this->naranjas = new Pila();
    this->bananas = new Pila();
    this->manzanas = new Pila();
    this->naranja->setNombreFruta("naranja");
    this->banana->setNombreFruta("banana");
    this->manzana->setNombreFruta("manzana");
    }
    void agregarCajonNaranjas(int cantidad);
    void agregarCajonBananas(int cantidad);
    void agregarCajonManzanas(int cantidad);
    void quitarCajonNaranjas(int cantidad);
    void quitarCajonBananas(int cantidad);
    void quitarCajonManzanas(int cantidad);
    void sacarKilosManzanas(int cantidad);
    void sacarKilosBananas(int cantidad);
    void sacarKilosNaranjas(int cantidad);
    int getCajonesDeNaranjas();
    int getCajonesDeBananas();
    int getCajonesDeManzanas();
};

#endif