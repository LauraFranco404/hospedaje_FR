//
// Created by laura on 19/03/2023.
//

#include "Sistema.h"


void Sistema::recibirPropietario(int id, Propietario* pPropietarioTemp){
    this->mapaPropietarios.insert(make_pair(id, pPropietarioTemp));
}
void Sistema::recibirHuesped(int id, Huesped* pHuespedTemp) {
     this->mapaHuespedes.insert(make_pair(id, pHuespedTemp));
}

void Sistema::recibirReserva(int id, Reserva* pReservaTemp){
    this->mapaReservas.insert(make_pair(id, pReservaTemp));
}

void Sistema::recibirEvaluacion(int id, Evaluacion* pEvaluacionTemp){
    this->mapaEvaluaciones.insert(make_pair(id, pEvaluacionTemp));
}

void Sistema::mostrarPropietarios() {
    unordered_map<int, Propietario*>::iterator itMap;
    for (itMap = this->mapaPropietarios.begin(); itMap != this->mapaPropietarios.end(); ++itMap){
        Propietario* pPropietarioTemp = itMap->second;
        cout << "\n***Propietario***" << endl;
        cout << "Nombre: " << pPropietarioTemp->getNombre() << endl;
        cout << "Cedula: " << pPropietarioTemp->getCedula() << endl;
        cout << "Genero: " << pPropietarioTemp->getSexo() << endl;
        cout << "Fecha de Nacimiento: " << pPropietarioTemp->getFechaNac() << endl;
        cout << "Puntaje: " << pPropietarioTemp->getPuntaje() << endl;
        cout << "Disponibilidad: " << pPropietarioTemp->getRHuesped() << endl;
        cout << "Direccion: " << pPropietarioTemp->getHogar()->getDireccion() << endl;
        cout << "Numero de camas: " << pPropietarioTemp->getHogar()->getnumCamas() << endl;
        cout << "Disponibilidad bebes: " << pPropietarioTemp->getHogar()->getBebes() << endl;
        cout << "Descripcion : " << pPropietarioTemp->getHogar()->getDireccion() << endl;
    }
}

void Sistema::mostrarPropietariosDisponibles(){
    unordered_map<int, Propietario*>::iterator itMap;
    for (itMap = this->mapaPropietarios.begin(); itMap != this->mapaPropietarios.end(); ++itMap){
        Propietario* pPropietarioTemp = itMap->second;
        if(pPropietarioTemp->getRHuesped() == "Hogar disponible"){
        cout << "\n***Propietario***" << endl;
        cout << "Nombre: " << pPropietarioTemp->getNombre() << endl;
        cout << "Cedula: " << pPropietarioTemp->getCedula() << endl;
        cout << "Genero: " << pPropietarioTemp->getSexo() << endl;
        cout << "Fecha de Nacimiento: " << pPropietarioTemp->getFechaNac() << endl;
        cout << "Puntaje: " << pPropietarioTemp->getPuntaje() << endl;
        cout << "Disponibilidad: " << pPropietarioTemp->getRHuesped() << endl;
        cout << "Direccion: " << pPropietarioTemp->getHogar()->getDireccion() << endl;
        cout << "Numero de camas: " << pPropietarioTemp->getHogar()->getnumCamas() << endl;
        cout << "Disponibilidad bebes: " << pPropietarioTemp->getHogar()->getBebes() << endl;
        cout << "Descripcion : " << pPropietarioTemp->getHogar()->getDireccion() << endl;
        }
    }
}

void Sistema::mostrarHuespedes() {
    unordered_map<int, Huesped*>::iterator itMap;
    for (itMap = this->mapaHuespedes.begin(); itMap != this->mapaHuespedes.end(); ++itMap){
        Huesped* pHuespedTemp = itMap->second;
        cout << "\n***Huesped***" << endl;
        cout << "Nombre: " << pHuespedTemp->getNombre() << endl;
        cout << "Cedula: " << pHuespedTemp->getCedula() << endl;
        cout << "Genero: " << pHuespedTemp->getSexo() << endl;
        cout << "Fecha de Nacimiento: " << pHuespedTemp->getFechaNac() << endl;
        cout << "Puntaje: " << pHuespedTemp->getPuntaje() << endl;
        cout << "Nombre de la clinica: " << pHuespedTemp->getNombreClinica() << endl;
        cout << "Ciudad de Origen: " << pHuespedTemp->getCiudadOrigen() << endl;
    }
}

void Sistema::mostrarReservas(){
    unordered_map<int, Reserva*>::iterator itMap;
    for (itMap = this->mapaReservas.begin(); itMap != this->mapaReservas.end(); ++itMap){
        Reserva* pReservaTemp = itMap->second;
        cout << "\n***Reserva***" << endl;
        cout << "Numero de la reserva: " << pReservaTemp->getIdReserva() << endl;
        cout << "Fecha de inicio: " << pReservaTemp->getFechaIni() << endl;
        cout << "Fecha de fin: " << pReservaTemp->getFechaFin() << endl;
        cout << "Nombre del propietario: " << pReservaTemp->getNombrePropietario() << endl;
        cout << "Nombre del huesped: " << pReservaTemp->getNombreHuesped() << endl;
    }
}
void Sistema::mostrarEvaluaciones(){
    unordered_map<int, Evaluacion*>::iterator itMap;
    for (itMap = this->mapaEvaluaciones.begin(); itMap != this->mapaEvaluaciones.end(); ++itMap){
        Evaluacion* pEvaluacionTemp = itMap->second;
        cout << "\n***Evaluacion***" << endl;
        cout << "Evalua a: " << pEvaluacionTemp->getComPara() << endl;
        cout << "Evaluador: " << pEvaluacionTemp->getComDe() << endl;
        cout << "Fecha: " << pEvaluacionTemp->getFecha() << endl;
        cout << "Comentario: " << pEvaluacionTemp->getComentario() << endl;
        cout << "Calificacion: " << pEvaluacionTemp->getCalificacion() << endl;
    }
}

Propietario* Sistema::accederAPropietario(int cedula){
    unordered_map<int, Propietario*>::iterator itMap;
    for (itMap = this->mapaPropietarios.begin(); itMap != this->mapaPropietarios.end(); ++itMap){
        Propietario* pPropietarioTemp = itMap->second;
        if(pPropietarioTemp->getCedula() == cedula){
            cout << "Bienvenido(a) " << pPropietarioTemp->getNombre() << endl;
            return pPropietarioTemp;
        }
    }
}

Huesped* Sistema::accederAHuesped(int cedula) {
    unordered_map<int, Huesped*>::iterator itMap;
    for (itMap = this->mapaHuespedes.begin(); itMap != this->mapaHuespedes.end(); ++itMap){
        Huesped* pHuespedTemp = itMap->second;
        if(pHuespedTemp->getCedula() == cedula){
            cout << "Bienvenido(a) " << pHuespedTemp->getNombre() << endl;
            return pHuespedTemp;
        }
    }
}

Reserva* Sistema::accederAReserva(int idReserva){
    unordered_map<int, Reserva*>::iterator itMap;
    for (itMap = this->mapaReservas.begin(); itMap != this->mapaReservas.end(); ++itMap) {
        Reserva *pReservaTemp = itMap->second;
        if (pReservaTemp->getIdReserva() == idReserva) {
            cout << "Accedio a la reserva "<< idReserva << endl;
            return pReservaTemp;
        }
    }
}

void Sistema::liberarReserva(int idReserva){
    unordered_map<int, Reserva*>::iterator itMap;
    for (itMap = this->mapaReservas.begin(); itMap != this->mapaReservas.end(); ++itMap) {
        Reserva *pReservaTemp = itMap->second;
        if (pReservaTemp->getIdReserva() == idReserva) {
            mapaReservas.erase(idReserva);
            cout << "Reserva " << idReserva << " liberada con exito. Tenga un maravilloso regreso a casa." << endl;
            break;
        }
    }
}

Sistema::~Sistema() {
    cout << "\n Gracias por preferirnos!" << endl;
}
