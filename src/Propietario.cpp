//
// Created by laura on 19/03/2023.
//

#include "Propietario.h"

Propietario::Propietario(int id, int cedula, string nombre, string sexo, string fechaNac, bool rHuesped, int puntaje) {
    this->id = id;
    this->cedula = cedula;
    this->nombre = nombre;
    this->sexo = sexo;
    this->fechaNac = fechaNac;
    this->rHuesped = rHuesped;
    this->puntaje = puntaje;
}

void Propietario::agregarHogar(string direccion, int numCamas, bool bebes, string descripcion) {
    this->pHogar = new Hogar(direccion, numCamas, bebes, descripcion);
}

void Propietario::setHogar(Hogar *pHogar){
    this->pHogar = pHogar;
}

string Propietario::getNombre() {
    return this->nombre;
}