/* 
 * File:   main.cpp
 * Author: Alexis
 *
 * Created on 8 de noviembre de 2023, 03:57 PM
 */

#include "almacen.h"
using namespace std;


int main(int argc, char** argv) {
    almacen alma;
    alma.carga();
    alma.actualiza();
    alma.imprime();
    return 0;
}

