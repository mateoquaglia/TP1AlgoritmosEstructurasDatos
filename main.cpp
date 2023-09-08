#include <iostream>
#include "Fruta.h"
#include "Cajon.h"
#include "Pedidos.h"
#include "Stock.h"
#include "Pila.h"
#include "Cola.h"
#include "GestorDePedidos.h"
#include "Lista.h"


int main(){
    Fruta* banana = new Fruta();
    Fruta* naranja = new Fruta();
    Fruta* manzana = new Fruta();
    Stock* Deposito = new Stock();
    //Cola* pedidosMay;
    //Cola* pedidosMin;
    GestorDePedidos* Gestor = new GestorDePedidos();


    Deposito->agregarCajonBananas(10);
    Deposito->agregarCajonManzanas(3);
    Deposito->agregarCajonNaranjas(5);



    //Prueba 1 explicada en informe:

    Pedido* pedido1 = new Pedido("Juan",banana,180 );
    Pedido* pedido2 = new Pedido("José",banana,20 );
    Pedido* pedido3 = new Pedido("Maria",banana,20 );
    Pedido* pedido4 = new Pedido("Julieta",banana,20);
    Pedido* pedido5 = new Pedido("Pepe",banana,6 );
    Pedido* pedido6 = new Pedido("Josefina",banana,14 );
    Pedido* pedido7 = new Pedido("Octavio",banana,7 );


    cout << "Stock de cajones de bananas disponible: " << Deposito->getCajonesDeBananas()<< endl;
    cout << "Stock de cajones de manzanas disponible: " << Deposito->getCajonesDeManzanas()<< endl;
    cout << "Stock de cajones de naranjas disponible: " << Deposito->getCajonesDeNaranjas()<< endl;


    Gestor->agregarPedidoColas(pedido1);
    Gestor->agregarPedidoColas(pedido2);
    Gestor->agregarPedidoColas(pedido3);
    Gestor->agregarPedidoColas(pedido4);
    Gestor->agregarPedidoColas(pedido5);
    Gestor->agregarPedidoColas(pedido6);
    Gestor->agregarPedidoColas(pedido7);

    //pedidosMay = Gestor->obtenerPedidosMayoristas();
    //pedidosMin = Gestor->obtenerPedidosMinoristas();



    if(!Gestor->obtenerPedidosMayoristas()->colaVacia()){
        while(!Gestor->obtenerPedidosMayoristas()->colaVacia()){
            Deposito->quitarCajonBananas(Gestor->obtenerPedidosMayoristas()->frente()->getPesoPedido());
            Gestor->sacarPedidoMayorista();
            cout << "Entregue pedido mayorista" <<endl;
        }
    }

    if(!Gestor->obtenerPedidosMinoristas()->colaVacia()){
        while(!Gestor->obtenerPedidosMinoristas()->colaVacia()){
            Deposito->sacarKilosBananas(Gestor->obtenerPedidosMinoristas()->frente()->getPesoPedido());
            Gestor->sacarPedidoMinorista();
            cout << "Entregue pedido minorista" << endl;
        }
    }
    /*
    if(!pedidosMay->colaVacia()){
        for(int i=0;i<pedidosMay->tamano();i++){
            Deposito->quitarCajonBananas(pedidosMay->frente()->getPesoPedido());
            pedidosMay->desencolar();

        }
    }

    if(!pedidosMin->colaVacia()){
        for(int i=0;i<pedidosMin->tamano();i++){
            Deposito->sacarKilosBananas(pedidosMin->frente()->getPesoPedido());
            cout <<"Entregué pedido minorista de: " <<pedidosMin->frente()->getPesoPedido() << endl;
            pedidosMin->desencolar();
        }
    }
    */



    cout << "Stock de cajones de bananas disponible: " << Deposito->getCajonesDeBananas()<< endl;
    cout << "Stock de cajones de manzanas disponible: " << Deposito->getCajonesDeManzanas()<< endl;
    cout << "Stock de cajones de naranjas disponible: " << Deposito->getCajonesDeNaranjas()<< endl;




  }
