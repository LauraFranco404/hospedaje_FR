//
// Created by laura on 19/03/2023.
//

#include "Evaluacion.h"

Evaluacion::Evaluacion(string fecha, int calificacion, string comentario, string comPara, string comDe, int cedPara) {
    this->fecha = fecha;
    this->calificacion = calificacion;
    this->comentario = comentario;
    this->comPara = comPara;
    this->comDe = comDe;
    this->cedPara = cedPara;
}

string Evaluacion::getFecha(){
    return this->fecha;
}
int Evaluacion::getCalificacion(){
    return this->calificacion;
}
string Evaluacion::getComentario(){
    return this->comentario;
}
string Evaluacion::getComPara(){
    return this->comPara;
}
string Evaluacion::getComDe(){
    return this->comDe;
}
int Evaluacion::getCedPara(){
    return this->cedPara;
}
