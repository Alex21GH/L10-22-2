/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   almacen.cpp
 * Author: Alexis
 * 
 * Created on 8 de noviembre de 2023, 05:23 PM
 */

#include "almacen.h"

void almacen::carga(){
    ifstream arch("medicamentos.csv",ios::in);
    if(!arch){
        cout<<"ERROR: No se pudo abrir el archivo medicamentos.csv"<<endl;
        exit(1);
    }
    
    arbolalma.creaArbol(arch);    
}

void almacen::actualiza(){
    ifstream arch("recarga.csv",ios::in);
    if(!arch){
        cout<<"ERROR: No se pudo abrir el archivo recarga.csv"<<endl;
        exit(1);
    }
    
    arbolalma.actualizarArbol(arch);
}

void almacen::imprime(){
    ofstream arch("Reporte.txt",ios::out);
    if(!arch){
        cout<<"ERROR: No se pudo abrir el archivo Reporte.txt"<<endl;
        exit(1);
    }
    
    arbolalma.imprimirArbol(arch);
}