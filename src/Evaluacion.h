//
// Created by laura on 19/03/2023.
//

#ifndef HOSPEDAJE_FR_EVALUACION_H
#define HOSPEDAJE_FR_EVALUACION_H

#include <string>
#include <iostream>
#include "Hogar.h"
#include "Propietario.h"
#include "Huesped.h"
#include "Reserva.h"
#include "Sistema.h"

using std::string;
using std::cout;
using std::endl;

class Evaluacion {
private:
    string fecha;
    int calificacion;
    string comentario;
    string comPara;
    int cedPara;
    string comDe;

};

#endif //HOSPEDAJE_FR_EVALUACION_H

