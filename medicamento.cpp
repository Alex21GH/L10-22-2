/* 
 * File:   medicamento.cpp
 * Author: Alexis
 * 
 * Created on 8 de noviembre de 2023, 04:07 PM
 */


#include "medicamento.h"

medicamento::medicamento() {
    codigo = 0;
    nombre = nullptr;
}

medicamento::medicamento(const medicamento& orig) {
}

medicamento::~medicamento() {
    if(nombre!=nullptr) delete nombre;
}

void medicamento::SetPrecio(double precio) {
    this->precio = precio;
}

double medicamento::GetPrecio() const {
    return precio;
}

void medicamento::SetStock(int stock) {
    this->stock = stock;
}

int medicamento::GetStock() const {
    return stock;
}

void medicamento::SetNombre(char* cadena) {
    if(nombre!=nullptr) delete nombre;
    nombre = new char[strlen(cadena)+1];
    strcpy(nombre,cadena);
}

void medicamento::GetNombre(char *cadena) const {
    if(nombre==nullptr) cadena[0]=0;
    else strcpy(nombre,cadena);
}

void medicamento::SetCodigo(int codigo) {
    this->codigo = codigo;
}

int medicamento::GetCodigo() const {
    return codigo;
}

void medicamento::lee(ifstream&arch){
    char nombre[100],c;
    arch>>codigo>>c;
    arch.getline(nombre,100,',');
    SetNombre(nombre);
    arch>>stock>>c>>precio>>c;
}

void medicamento::imprime(ofstream&arch){
    arch<<setprecision(2)<<fixed;
    arch<<left<<setw(10)<<codigo<<setw(50)<<nombre<<right<<setw(6)<<
            stock<<setw(8)<<precio<<"   ";
}