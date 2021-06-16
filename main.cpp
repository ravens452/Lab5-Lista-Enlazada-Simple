#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main(){

    int arrayValores[] = {4,5,7,8,4,1,7,2,0};
    int tam = sizeof arrayValores/sizeof arrayValores[0];
    LinkedList listaEnlazada;

    for (int i = 0; i < tam; ++i) {
        listaEnlazada.insert(arrayValores[i]);
    }

    listaEnlazada.print();
    listaEnlazada.remove(8);
    listaEnlazada.print();

}

