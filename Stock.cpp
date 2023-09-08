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


void Stock::agregarCajonNaranjas(int cantidad) {
    for (int i = 0; i < cantidad; i++) {

        this->cajon = new Cajon(i, this->naranja, 20);
        this->naranjas->push(cajon);
    }
}

void Stock::agregarCajonManzanas(int cantidad) {
    for (int i = 0; i < cantidad; i++) {

        this->cajon = new Cajon(i, this->manzana, 20);
        this->manzanas->push(cajon);
    }
}

void Stock::agregarCajonBananas(int cantidad) {
    for (int i = 0; i < cantidad; i++) {

        this->cajon = new Cajon(i, this->banana, 20);
        this->bananas->push(cajon);
    }
}

void Stock::quitarCajonBananas(int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        if (!bananas->estaVacia()) {
            this->bananas->pop();
        }
    }
}

void Stock::quitarCajonManzanas(int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        if (!manzanas->estaVacia()) {
            this->manzanas->pop();
        }
    }
}

void Stock::quitarCajonNaranjas(int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        if (!naranjas->estaVacia()) {
            this->naranjas->pop();
        }
    }
}
/*
void Stock::sacarKilosNaranjas(int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        if (!naranjas->estaVacia()) {
            Cajon* cajonNaranjas=naranjas->top();
            this->naranjas->sacarKilos(cajonNaranjas, 1);
            //this
        }
    }
}
*/

void Stock::sacarKilosNaranjas(int cantidad) {
    int frutaEntregar = 0;
    if(!naranjas->estaVacia()){
        this->cajonDeArriba = naranjas->top();
        frutaEntregar += this->cajonDeArriba->sacarFruta(cantidad);
        if(cantidad > frutaEntregar){
            int restante = cantidad - frutaEntregar;
            naranjas->pop();
            this->cajonDeArriba = naranjas->top();
            frutaEntregar += this->cajonDeArriba->sacarFruta(restante);
        }
    }
}

void Stock::sacarKilosManzanas(int cantidad) {
    int frutaEntregar = 0;
    if(!manzanas->estaVacia()){
        this->cajonDeArriba = manzanas->top();
        frutaEntregar += this->cajonDeArriba->sacarFruta(cantidad);
        if(cantidad > frutaEntregar){
            int restante = cantidad - frutaEntregar;
            manzanas->pop();
            this->cajonDeArriba = manzanas->top();
            frutaEntregar += this->cajonDeArriba->sacarFruta(restante);
        }
    }
}

void Stock::sacarKilosBananas(int cantidad) {
    int frutaEntregar = 0;
    if(!bananas->estaVacia()) {
        this->cajonDeArriba = bananas->top();
        frutaEntregar += this->cajonDeArriba->sacarFruta(cantidad);
        if (cantidad > frutaEntregar) {
            int restante = cantidad - frutaEntregar;
            bananas->pop();
            this->cajonDeArriba = bananas->top();
            frutaEntregar += this->cajonDeArriba->sacarFruta(restante);
        }
    }
}

int Stock::getCajonesDeBananas() {
    return this->bananas->tamano();
}

int Stock::getCajonesDeNaranjas(){
    return this->naranjas->tamano();
}

int Stock::getCajonesDeManzanas() {
    return this->manzanas->tamano();
}




/*

void Stock::agregarCajonBananas(int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        Cajon cajon;
        cajon.setCantidadFruta(20);
        cajon.setTipoFruta("Bananas");
        getTipoFruta.apilar(cajon);
    }
}

void Stock::agregarCajonManzanas(int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        Cajon cajon;
        cajon.setCantidadFruta(20);
        cajon.setTipoFruta("Manzanas");
        manzanas.apilar(cajon);
    }
}



void Stock::quitarCajonNaranjas(int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        if (!naranjas.pilavacia()) {
            naranjas.desapilar();
        }
    }
}

void Stock::quitarCajonBananas(int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        if (!bananas.pilavacia()) {
            bananas.desapilar();
        }
    }
}

void Stock::quitarCajonManzanas(int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        if (!manzanas.pilavacia()) {
            manzanas.desapilar();
        }
    }
}

int Stock::getCantidadNaranjas() {
    int cantidadTotal = 0;
    Pila* temp = &naranjas;
    while (temp != NULL) {
        if (!temp->pilavacia()) {
            Cajon cajon = temp->tope();
            cantidadTotal += cajon.getCantidadFruta();
        }
        temp = temp->getNext();
    }
    return cantidadTotal;
}

int Stock::getCantidadBananas() {
    int cantidadTotal = 0;
    Pila* temp = &bananas;
    while (temp != NULL) {
        if (!temp->pilavacia()) {
            Cajon cajon = temp->tope();
            cantidadTotal += cajon.getCantidadFruta();
        }
        temp = temp->getNext();
    }
    return cantidadTotal;
}

int Stock::getCantidadManzanas() {
    int cantidadTotal = 0;
    Pila* temp = &manzanas;
    while (temp != NULL) {
        if (!temp->pilavacia()) {
            Cajon cajon = temp->tope();
            cantidadTotal += cajon.getCantidadFruta();
        }
        temp = temp->getNext();
    }
    return cantidadTotal;
}

int Stock:: llenarStockNaranjas(){
    while()

}


*/


























/*
using namespace std;
void Stock::

void Stock::actualizar_stock(string id, string tipo_fruta, int cantidad_fruta)
{
    bool encontrado = false;
    int index = 0;
    while (!encontrado && index < depo.size())
    {
        if (depo[index].empty() || depo[index].top().get_tipo_fruta() == tipo_fruta && depo[index].top().get_cantidad_fruta() + cantidad_fruta <= 20)
        {
            encontrado = true;
        }
        else
        {
            index++;
        }
    }
    if (encontrado)
    {
        if (depo[index].empty() || depo[index].top().get_tipo_fruta() != tipo_fruta)
        {
            depo[index].push(Cajon(id, tipo_fruta, cantidad_fruta));
        }
        else
        {
            depo[index].top().set_cantidad_fruta(depo[index].top().get_cantidad_fruta() + cantidad_fruta);

        }
    }
}
void Stock::registrar_pedido_mayorista(string nombre_cliente, string tipo_fruta, int cantidad_fruta)
{
    Cajon cajon("", tipo_fruta, cantidad_fruta);
    pedidos_mayorista.push(make_pair(nombre_cliente, cajon));
}
void Stock::registrar_pedido_minorista(string nombre_cliente, string tipo_fruta, int cantidad_fruta)
{
    Cajon cajon("", tipo_fruta, cantidad_fruta);
    pedidos_minorista.push(make_pair(nombre_cliente, cajon));
}
void Stock::imprimir_stock()
{
    cout << "Stock disponible en el dep sito:" << endl;
    for (int i = 0; i < depo.size(); i++)
    {
        if (depo[i].empty())
        {
            cout << "No hay cajones de " << i + 1 << endl;
        }
        else
        {
            int total_cantidad = 0;
            stack<Cajon> temp;
            while (!depo[i].empty())
            {
                total_cantidad += depo[i].top().get_cantidad_fruta();
                temp.push(depo[i].top());
                depo[i].pop();
            }
            cout << "Hay " << total_cantidad << " kg de " << temp.top().get_tipo_fruta() << " en " << temp.size() << " cajones:" << endl;
            while (!temp.empty())
            {
                cout << "  - Caj n " << temp.top().get_identificador() << " con " << temp.top().get_cantidad_fruta() << " kg." << endl;
                depo[i].push(temp.top());
                temp.pop();
            }
        }
    }
}
void Stock::imprimir_pedidos()
{
    cout << "Pedidos registrados para el mayorista:" << endl;
    if (pedidos_mayorista.empty())
    {
        cout << "No hay pedidos registrados para el mayorista." << endl;
    }
    else
    {
        while (!pedidos_mayorista.empty())
        {
            cout << "- Cliente: " << pedidos_mayorista.front().first << ", tipo de fruta: " << pedidos_mayorista.front().second.get_tipo_fruta() << ", cantidad: " << pedidos_mayorista.front().second.get_cantidad_fruta() << endl;
            pedidos_mayorista.pop();
        }
    }
    cout << "Pedidos registrados para el minorista:" << endl;
    if (pedidos_minorista.empty())
    {
        cout << "No hay pedidos registrados para el minorista." << endl;
    }
    else
    {
        while (!pedidos_minorista.empty())
        {
            cout << "- Cliente: " << pedidos_minorista.front().first << ", tipo de fruta: " << pedidos_minorista.front().second.get_tipo_fruta() << ", cantidad: " << pedidos_minorista.front().second.get_cantidad_fruta() << endl;
            pedidos_minorista.pop();
        }
    }
}
 */