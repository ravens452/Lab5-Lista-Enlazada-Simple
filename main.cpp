#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main(){
    int arrayValores[] = {4,5,7,8,4,1,7,2,0};
    int tam = sizeof arrayValores/sizeof arrayValores[0];
    LinkedList listaEnlazada;
    LinkedList listaEnlazadaOrdenada;

    for (int i = 0; i < tam; ++i) {
        listaEnlazada.insert(arrayValores[i]);
    }
    cout<<"La lista enlazada sin ordenar es"<<endl;
    listaEnlazada.print();

    for (int i = 0; i < tam; ++i) {
        listaEnlazadaOrdenada.insertarOrdenado(arrayValores[i]);
    }
    cout<<"La lista enlazada ordenada es"<<endl;
    listaEnlazadaOrdenada.print();
    listaEnlazadaOrdenada.remove(8);
    listaEnlazadaOrdenada.print();
    cout<<listaEnlazadaOrdenada<<endl; //sobrecarga operador de salida

}

