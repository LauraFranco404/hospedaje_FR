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
private:
    int cedula;
    string nombre;
    string sexo;
    string fechaNac;
    Evaluacion* pEvaluacion;
    string nombreClinica;
    string ciudadOrigen;
    int puntaje;
public:
    Huesped(int cedula, string nombre, string sexo, string fechaNac, string nombreClinica, string ciudadOrigen, int puntaje);
    int getCedula();
    string getNombre();
    string getSexo();
    string getFechaNac();
    string getNombreClinica();
    string getCiudadOrigen();
    int getPuntaje();


};


#endif //HOSPEDAJE_FR_HUESPED_H
