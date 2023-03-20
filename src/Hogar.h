//
// Created by laura on 19/03/2023.
//

#ifndef HOSPEDAJE_FR_HOGAR_H
#define HOSPEDAJE_FR_HOGAR_H

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Hogar {
private:
    string direccion;
    int numCamas;
    bool bebes;
    string descripcion;

public:
    Hogar(string direccion, int numCamas, bool bebes, string descripcion);
};

#endif //HOSPEDAJE_FR_HOGAR_H
