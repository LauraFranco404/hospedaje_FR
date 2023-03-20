//
// Created by laura on 19/03/2023.
//

#ifndef HOSPEDAJE_FR_EVALUACION_H
#define HOSPEDAJE_FR_EVALUACION_H

#include <string>
#include <iostream>
#include "Evaluacion.h"
#include "Hogar.h"
using std::string;
using std::cout;
using std::endl;

class Evaluacion {
private:
    string fecha;
    int calificacion;
    string comentario;
    string comPara;
    string comDe;
public:
    Evaluacion();
    Evaluacion(string fecha, int calificacion, string comentario, string compara, string comDe);
};


#endif //HOSPEDAJE_FR_EVALUACION_H
