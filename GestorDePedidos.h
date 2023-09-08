
#ifndef TP1ALGORITMOS_GESTORDEPEDIDOS_H
#define TP1ALGORITMOS_GESTORDEPEDIDOS_H
#include "Cola.h"
#include "Pedidos.h"


class GestorDePedidos {
private:
    Cola* pedidosMayoristas;
    Cola* pedidosMinoristas;
    Lista* pedidosEntregados;
    Pedido* pedido;
public:
    GestorDePedidos(){
    this->pedidosMayoristas = new Cola();
    this->pedidosMinoristas = new Cola();
    this->pedidosEntregados = new Lista();
    }


    void agregarPedidoColas(Pedido* pedido);
    Cola* obtenerPedidosMayoristas();
    Cola* obtenerPedidosMinoristas();
    Pedido* sacarPedidoMayorista();
    Pedido* sacarPedidoMinorista();
    //string imprimirPedidosEntregados();


};


#endif //TP1ALGORITMOS_GESTORDEPEDIDOS_H
