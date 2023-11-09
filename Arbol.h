/* 
 * File:   Arbol.h
 * Author: Alexis
 *
 * Created on 8 de noviembre de 2023, 05:20 PM
 */

#ifndef ARBOL_H
#define ARBOL_H
#include "Nodo.h"

class Arbol {
private:
    class Nodo *raiz;
    void insertaRec(Nodo*&raiz,class medicamento *dato);
    void actualizaRec(Nodo*raiz);
    void imprimeRec(Nodo*raiz,ofstream &arch);
public:
    Arbol();
    virtual ~Arbol();
    
    void creaArbol(ifstream &arch);    
    void actualizarArbol(ofstream &arch);
    void imprimirArbol(ofstream &arch);
};

#endif /* ARBOL_H */

