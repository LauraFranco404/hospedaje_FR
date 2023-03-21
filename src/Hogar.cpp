//
// Created by laura on 19/03/2023.
//

#include "Hogar.h"

Hogar::Hogar(string direccion, int numCamas, bool bebes, string descripcion) {
    this->direccion = direccion;
    this->numCamas = numCamas;
    this->bebes = bebes;
    this->descripcion = descripcion;
}

string Hogar::getDireccion() {
    return this->direccion;
}

int Hogar::getnumCamas() {
    return this->numCamas;
}
string Hogar::getBebes(){
    if(bebes == 0){
        return "No se permiten bebes";
    }
    else{
        return "Se permiten bebes";
    }
}

string Hogar::getDescripcion(){
    return this->descripcion;
}