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

    void GestorDePedidos::agregarPedidoColas(Pedido* pedido){
        if (pedido->esMayorista()){
            this->pedidosMayoristas->encolar(pedido);
            cout <<"Tome un pedido mayorista " << endl;
        }
        if (!pedido->esMayorista()){
            this->pedidosMinoristas->encolar(pedido);
            cout <<"Tome un pedido minorista " << endl;
        }

    }

    Pedido* GestorDePedidos::sacarPedidoMayorista() {
        Pedido* pedidoEntregado =this->pedidosMayoristas->frente();
                this->pedidosMayoristas->desencolar();
                this->pedidosEntregados->agregarPedidoAlFinal(pedidoEntregado);
                //cout <<"Entregue pedido mayorista " << endl;
        }

    Pedido* GestorDePedidos::sacarPedidoMinorista() {
        Pedido* pedidoEntregado =this->pedidosMinoristas->frente();
               this->pedidosMinoristas->desencolar();
               this->pedidosEntregados->agregarPedidoAlFinal(pedidoEntregado);
             // cout <<"Entregue pedido mayorista " << endl;
    }



    Cola* GestorDePedidos::obtenerPedidosMayoristas() {
        return this->pedidosMayoristas;
    }

    Cola* GestorDePedidos::obtenerPedidosMinoristas(){
    return this->pedidosMinoristas;
    }
/*
    string GestorDePedidos::imprimirPedidosEntregados() {
        if(!this->pedidosEntregados->estaVacia()){
            int contador = 0;
            while(contador<pedidosEntregados->tamano()){
                return (pedidosEntregados->)
            }
        }
    }
    */







