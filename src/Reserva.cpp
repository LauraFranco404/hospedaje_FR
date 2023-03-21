//
// Created by laura on 19/03/2023.
//

#include "Reserva.h"

Reserva::Reserva(int idReserva, string fechaIni, string fechaFin, Propietario *pPropietario, Huesped *pHuesped){
    this->idReserva = idReserva;
    this->fechaIni = fechaIni;
    this->fechaFin = fechaFin;
    this->nombrePropietario = pPropietario->getNombre();
    this->nombreHuesped = pHuesped->getNombre();
    this->cedulaPropietario = pPropietario->getCedula();
}

int Reserva::getIdReserva() {
    return this->idReserva;
}
string Reserva::getFechaIni(){
    return this->fechaIni;
}
string Reserva::getFechaFin(){
    return this->fechaFin;
}
string Reserva::getNombrePropietario(){
    return this->nombrePropietario;
}

string Reserva::getNombreHuesped(){
    return this->nombreHuesped;
}
int Reserva::getCedulaPropietario(){
    return this->cedulaPropietario;
}