/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   marca.cpp
 * Author: Alexis
 * 
 * Created on 8 de noviembre de 2023, 05:17 PM
 */

#include "marca.h"

marca::marca() {
}

marca::marca(const marca& orig) {
}

marca::~marca() {
}

void marca::SetLaboratorio(char*cadena) {
    if(laboratorio!=nullptr) delete laboratorio;
    laboratorio = new char[strlen(cadena)+1];
    strcpy(laboratorio,cadena);
}

void marca::GetLaboratorio(char*cadena) const {
    if(laboratorio==nullptr) cadena[0]=0;
    else strcpy(laboratorio,cadena);
}

void marca::SetLote(int lote) {
    this->lote = lote;
}

int marca::GetLote() const {
    return lote;
}

void marca::lee(ifstream&arch){
    medicamento::lee(arch);
    char lab[100];
    arch.getline(lab,100,',');
    SetLaboratorio(lab);
    arch>>lote;
}

void marca::actualiza(){
    SetPrecio(GetPrecio()*1.2);
}

void marca::imprime(ofstream&arch){
    medicamento::imprime(arch);
    arch<<left<<setw(30)<<laboratorio<<right<<setw(5)<<lote<<endl;
}