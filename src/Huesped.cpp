//
// Created by laura on 19/03/2023.
//

#include "Huesped.h"

Huesped::Huesped(int cedula, string nombre, string sexo, string fechaNac, string nombreClinica, string ciudadOrigen, int puntaje) {
    this->cedula = cedula;
    this->nombre = nombre;
    this->sexo = sexo;
    this->fechaNac = fechaNac;
    this->nombreClinica = nombreClinica;
    this->ciudadOrigen = ciudadOrigen;
    this->puntaje = puntaje;
}

int Huesped::getCedula(){
    return this->cedula;
}

string Huesped::getNombre() {
    return this->nombre;
}

string Huesped::getSexo(){
    return this->sexo;
}

string Huesped::getFechaNac(){
    return this->fechaNac;
}

string Huesped::getNombreClinica(){
    return this->nombreClinica;
}

string Huesped::getCiudadOrigen(){
    return this->ciudadOrigen;
}

int Huesped::getPuntaje(){
    return this->puntaje;
}
