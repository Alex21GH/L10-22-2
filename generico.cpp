/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   generico.cpp
 * Author: Alexis
 * 
 * Created on 8 de noviembre de 2023, 04:14 PM
 */

#include "generico.h"

generico::generico() {
    pais = nullptr;
}

generico::generico(const generico& orig) {
}

generico::~generico() {
    if(pais != nullptr) delete pais;
}

void generico::SetPais(char* cadena) {
    if(pais!=nullptr) delete pais;
    pais = new char[strlen(cadena)+1];
    strcpy(pais,cadena);
}

void generico::GetPais(char* cadena) const {
    if(pais==nullptr) cadena[0]=0;
    else strcpy(pais,cadena);
}

void generico::lee(ifstream&arch){
    medicamento::lee(arch);
    char paislei[50];
    arch.getline(paislei,50);
    SetPais(paislei);
}

void generico::actualiza(){
    
}

void generico::imprime(ofstream&arch){
    medicamento::imprime(arch);
    arch<<left<<setw(30)<<pais<<endl;
}