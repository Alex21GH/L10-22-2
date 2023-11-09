/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arbol.cpp
 * Author: Alexis
 * 
 * Created on 8 de noviembre de 2023, 05:20 PM
 */

#include "Arbol.h"
#include "generico.h"
#include "marca.h"

Arbol::Arbol() {
    raiz = nullptr;
}

Arbol::~Arbol() {
}

void Arbol::creaArbol(ifstream &arch){
    class medicamento *medi;
    int tipo,n=0;
    while(true){
        arch>>tipo;
        if(arch.eof()) break;
        arch.get();
        switch(tipo){
            case 0: // generico
                medi = new class generico;
                break;
            case 1: // marca
                medi = new class marca;
                break;               
        }
        medi->lee(arch);
        insertaRec(raiz,medi);
//        cout<<++n<<' '<<tipo<<endl;
    }
}

void Arbol::insertaRec(Nodo*&raiz,class medicamento *dato){
    if(raiz==nullptr){
        raiz = new class Nodo;
        raiz->med = dato;        
    }else{
        if(raiz->med->GetCodigo() > dato->GetCodigo())
            insertaRec(raiz->izq,dato);
        else
            insertaRec(raiz->der,dato);        
    }
}

void Arbol::actualizarArbol(ifstream &arch){
    
    int codigo;
    while(true){
        arch>>codigo;
        if(arch.eof()) break;        
        actualizaRec(raiz,codigo);
    }    
}

void Arbol::actualizaRec(Nodo*raiz,int codigobuscar){
    if(raiz == nullptr) return;
    if(raiz->med->GetCodigo() == codigobuscar){
        raiz->med->actualiza();
    }else{
        if(raiz->med->GetCodigo() > codigobuscar)
            actualizaRec(raiz->izq,codigobuscar);
        else
            actualizaRec(raiz->der,codigobuscar);
    }    
}

void Arbol::imprimirArbol(ofstream &arch){
    imprimeRec(raiz,arch);    
}

void Arbol::imprimeRec(Nodo*raiz,ofstream &arch){
    if(raiz!=nullptr){
        imprimeRec(raiz->izq,arch);
        raiz->med->imprime(arch);
        imprimeRec(raiz->der,arch);
    }
}