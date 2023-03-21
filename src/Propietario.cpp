//
// Created by laura on 19/03/2023.
//

#include "Propietario.h"

Propietario::Propietario(int cedula, string nombre, string sexo, string fechaNac, bool rHuesped, int puntaje) {
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

int Propietario::getCedula() {
    return this->cedula;
}

string Propietario::getRHuesped() {
    if(this->rHuesped == 0){
        return "Hogar no disponible";
    }
    else{
        return "Hogar disponible";
    }
}

int Propietario::getPuntaje() {
    return this->puntaje;
}

Hogar *Propietario::getHogar() {
    return this->pHogar;
}
string Propietario::getSexo() {
    return this->sexo;
};
string Propietario::getFechaNac(){
    return this->fechaNac;
};

void Propietario::setRHuesped(bool rHuesped) {
    this->rHuesped = rHuesped;
}

void Propietario::setPuntaje(int nPuntaje) {
    this->puntaje = (nPuntaje+puntaje)/2;
}
