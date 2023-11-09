/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   medicamento.h
 * Author: Alexis
 *
 * Created on 8 de noviembre de 2023, 04:07 PM
 */

#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;

class medicamento {
private:
    int codigo;
    char*nombre;
    int stock;
    double precio;
public:
    medicamento();
    medicamento(const medicamento& orig);
    virtual ~medicamento();
    void SetPrecio(double precio);
    double GetPrecio() const;
    void SetStock(int stock);
    int GetStock() const;
    void SetNombre(char* );
    void GetNombre(char*) const;
    void SetCodigo(int codigo);
    int GetCodigo() const;

    virtual void lee(ifstream&);
    virtual void actualiza()=0;
    virtual void imprime(ofstream&);
};

#endif /* MEDICAMENTO_H */

