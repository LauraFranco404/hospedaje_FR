//
// Created by laura on 19/03/2023.
//

#ifndef HOSPEDAJE_FR_EVALUACION_H
#define HOSPEDAJE_FR_EVALUACION_H

#include <string>
#include <iostream>


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
public:
    Evaluacion(string fecha, int calificacion, string comentario, string comPara, string comDe, int cedPara);
    string getFecha();
    int getCalificacion();
    string getComentario();
    string getComPara();
    string getComDe();
    int getCedPara();
};

#endif //HOSPEDAJE_FR_EVALUACION_H

