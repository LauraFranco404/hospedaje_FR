//
// Created by laura on 19/03/2023.
//

#include "Sistema.h"

//Sistema::Sistema(string nombre) : nombre(nombre){}

void Sistema::recibirPropietario(int id, int cedula, string nombre, string sexo, string fechaNac, bool rHuesped, int puntaje){
    Propietario* pPropietarioTemp = new Propietario(id, cedula, nombre, sexo, fechaNac, rHuesped, puntaje);
    this->mapaPropietarios.insert(make_pair(id, pPropietarioTemp));
}

void Sistema::mostrarPropietarios() {
    unordered_map<int, Propietario*>::iterator itMap;

    for (itMap = this->mapaPropietarios.begin(); itMap != this->mapaPropietarios.end(); ++itMap){
        int llave = itMap->first;
        Propietario* pPropietarioTemp = itMap->second;
        cout << llave << ". " << pPropietarioTemp->getNombre() << endl;
    }
}

Sistema::~Sistema() {
    cout << "\n Gracias por preferirnos!" << endl;
}
