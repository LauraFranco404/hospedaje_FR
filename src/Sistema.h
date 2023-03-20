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
    unordered_map<int, Reserva*> mapaReservas;
    unordered_map<int, Evaluacion*>mapaEvaluaciones;

public:
    Sistema() = default;
    explicit Sistema(string nombre);
    void recibirPropietario(int id, string nombre, string sexo, string fechaNac, bool rHuesped, int puntaje);
    void mostrarPropietarios();
};


#endif //HOSPEDAJE_FR_SISTEMA_H
