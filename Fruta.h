#ifndef FRUTA_H
#define FRUTA_H
#include<string>
#include<iostream>
using namespace std;
class Fruta
{
public:
    Fruta(){
    }

    string getNombre();
    void setNombreFruta(string fruta);


public:
    string nombre;
};

#endif
