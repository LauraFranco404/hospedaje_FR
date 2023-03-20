//
// Created by laura on 19/03/2023.
//

#ifndef HOSPEDAJE_FR_PROPIETARIO_H
#define HOSPEDAJE_FR_PROPIETARIO_H

#include <string>
#include <iostream>
#include "Evaluacion.h"
#include "Hogar.h"
using std::string;
using std::cout;
using std::endl;

class Propietario {
private:
    int id;
    int cedula;
    string nombre;
    string sexo;
    string fechaNac;
    Evaluacion *pEvaluacion;
    Hogar *pHogar;
    bool rHuesped;
    int puntaje;


public:
    Propietario(int id, int cedula, string nombre, string sexo, string fechaNac, bool rHuesped, int puntaje);
    void agregarHogar(string direccion, int numCamas, bool bebes, string descripcion);
    void setHogar(Hogar *  pHogar);
    string getNombre();
};
#endif //HOSPEDAJE_FR_PROPIETARIO_H
