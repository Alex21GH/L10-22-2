/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   generico.h
 * Author: Alexis
 *
 * Created on 8 de noviembre de 2023, 04:14 PM
 */

#ifndef GENERICO_H
#define GENERICO_H

#include "medicamento.h"


class generico : public medicamento{
private:
    char*pais;
    
public:
    generico();
    generico(const generico& orig);
    virtual ~generico();
    void SetPais(char* );
    void GetPais(char* ) const;

    void lee(ifstream&);
    void actualiza();
    void imprime(ofstream&);
};

#endif /* GENERICO_H */

