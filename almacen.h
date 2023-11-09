/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   almacen.h
 * Author: Alexis
 *
 * Created on 8 de noviembre de 2023, 05:23 PM
 */

#ifndef ALMACEN_H
#define ALMACEN_H
#include "Arbol.h"

class almacen {
private:
    class Arbol arbolalma;
public:
    void carga();
    void actualiza();
    void imprime();
};

#endif /* ALMACEN_H */

