//
// Created by laura on 19/03/2023.
//

#ifndef HOSPEDAJE_FR_HUESPED_H
#define HOSPEDAJE_FR_HUESPED_H

#include <string>
#include <iostream>
#include "Evaluacion.h"
using std::string;
using std::cout;
using std::endl;


class Huesped {
    int id;
    string nombre;
    string sexo;
    string fecha;
    Evaluacion* pEvaluacion;
    string nombreClin;
    string ciudadOrigen;
    int puntaje;
};


#endif //HOSPEDAJE_FR_HUESPED_H
