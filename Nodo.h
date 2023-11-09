/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: Alexis
 *
 * Created on 8 de noviembre de 2023, 05:19 PM
 */

#ifndef NODO_H
#define NODO_H
#include "medicamento.h"
#include "Arbol.h"

class Nodo {
private:
    class medicamento *med;
    class Nodo *izq;
    class Nodo *der;
public:
    Nodo(){
        izq = nullptr;
        der = nullptr;
    };
    virtual ~Nodo(){
    };
    friend class Arbol;
    
};

#endif /* NODO_H */

