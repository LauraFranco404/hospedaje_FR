//
// Created by laura on 19/03/2023.
//

#ifndef HOSPEDAJE_FR_SISTEMA_H
#define HOSPEDAJE_FR_SISTEMA_H

#include <iostream>
#include <iterator>
#include <unordered_map>
#include "Hogar.h"
#include "Propietario.h"
#include "Huesped.h"
#include "Evaluacion.h"
#include "Reserva.h"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::unordered_map;
using std::make_pair;
using std::iterator;

//Este lo cree para almacenar las listas e información base del programa
class Sistema {
private:
    string nombre;
    unordered_map<int, Propietario*> mapaPropietarios;
    unordered_map<int, Huesped*> mapaHuespedes;
    unordered_map<int, Reserva*> mapaReservas;
    unordered_map<int, Evaluacion*>mapaEvaluaciones;

public:
    Sistema() = default;
    ~Sistema();
    void recibirPropietario(int id, Propietario* pPropietarioTemp);
    void recibirHuesped(int id, Huesped* pHuespedTemp);
    void recibirReserva(int id, Reserva* pReservaTemp);
    void recibirEvaluacion(int id, Evaluacion* pEvaluacionTemp);

    void mostrarPropietarios();
    void mostrarHuespedes();
    void mostrarReservas();
    void mostrarEvaluaciones();

    Propietario* accederAPropietario(int cedula);
    Huesped* accederAHuesped(int cedula);
    Reserva* accederAReserva(int idReserva);
    void mostrarPropietariosDisponibles();
    void liberarReserva(int cedula);

};


#endif //HOSPEDAJE_FR_SISTEMA_H
