//
// Created by laura on 19/03/2023.
//

#ifndef HOSPEDAJE_FR_RESERVA_H
#define HOSPEDAJE_FR_RESERVA_H
#include <iostream>
#include <iterator>
#include <unordered_map>
#include "Hogar.h"
#include "Propietario.h"
#include "Huesped.h"
#include "Reserva.h"

using std::cout;
using std::string;
using std::cin;
using std::endl;

class Reserva {
private:
    int idReserva;
    string fechaIni;
    string fechaFin;
    string nombrePropietario;
    string nombreHuesped;
    int cedulaPropietario;
public:
    Reserva(int idReserva, string fechaIni, string fechaFin, Propietario* pPropietario, Huesped* pHuesped);
    int getIdReserva();
    string getFechaIni();
    string getFechaFin();
    string getNombrePropietario();
    string getNombreHuesped();
    int getCedulaPropietario();

};


#endif //HOSPEDAJE_FR_RESERVA_H
