/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   marca.h
 * Author: Alexis
 *
 * Created on 8 de noviembre de 2023, 05:17 PM
 */

#ifndef MARCA_H
#define MARCA_H

#include "medicamento.h"


class marca : public medicamento{
private:
    int lote;
    char*laboratorio;
public:
    marca();
    marca(const marca& orig);
    virtual ~marca();
    void SetLaboratorio(char*);
    void GetLaboratorio(char*) const;
    void SetLote(int lote);
    int GetLote() const;

    void lee(ifstream&);
    void actualiza();
    void imprime(ofstream&);
};

#endif /* MARCA_H */

