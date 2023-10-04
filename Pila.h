//
// Created by aldry on 26/09/2023.
//

#ifndef PILAGENERICA_PILA_H
#define PILAGENERICA_PILA_H

#include <iostream>

using namespace std;
template <typename T> class Pila
{
public:
    T datos[50];
    int elementos;
// constructor de una pila vacía:
    Pila(): elementos(0) {}
// Función de inserción de elementos dentro de una pila;
    void insert(T elem)
    {
        if (elementos < 50)
        {
            datos[elementos] = elem;
            elementos ++;
        }
        else
        {
            cout << "Error: Pila llena";
        }
    }
// Función de extracción de elemento de una pila;
    T extract()
    {
        if (elementos > 0)
        {
            elementos --;
            return datos[elementos];
        }
        else
        {
            cout << "Error: Pila vacía";
        }
    }
    int Numero()
    {
        return elementos;
    }
    bool es_vacia()
    {
        return elementos == 0;
    }
};
#endif //PILAGENERICA_PILA_H
