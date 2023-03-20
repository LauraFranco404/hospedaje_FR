//
// Created by laura on 19/03/2023.
//

#include <iostream>
#include "Hogar.h"
#include "Propietario.h"
#include "Huesped.h"
#include "Evaluacion.h"
#include "Reserva.h"
#include "Sistema.h"
using std::cout;
using std::cin;
using std::getline;

void primeraOpcion(Sistema *sistema);
void mostrarMenu(Sistema* sistema);
int main();


void primeraOpcion(Sistema *sistema){
    int idTemp;
    string nombreTemp;
    string sexoTemp;
    string fechaNacTemp;
    bool rHuespedTemp = true;
    int puntaje = 0;

    cout << "Bienvenido, propietario." << endl;
    cout << "A continuacion recibiremos su informacion para agregarlo a la base de datos" << endl;
    cout << "\nIngrese su identificacion:";
    cin >> idTemp;
    cout << "Ingrese su nombre completo:";
    cin >> nombreTemp;
    cout << "Ingrese su genero:";
    cin >> sexoTemp;
    cout << "Ingrese su fecha de nacimiento (dd/mm/aaaa):";
    cin >> fechaNacTemp;
    //cout << "Disponibilidad de espacio para huespedes (1 si esta disponible, 0 si no esta disponible):";
    //cin >> rHuespedTemp;
    sistema->recibirPropietario(idTemp, nombreTemp, sexoTemp, fechaNacTemp, rHuespedTemp, puntaje);
}


void mostrarMenu(Sistema* sistema){
    int opcion;
    do{
        cout << "\n****Bienvenido a la red de soporte de la ciudad de Manizales****\n";
        cout << "1. Agregue informacion de su hogar." << endl;
        cout << "2. Ver lista de propietarios." << endl;
        cout << "3. Crear reserva." << endl;
        cout << "4. Ver lista de reservas." << endl;
        cout << "5. Liberar reserva." <<endl;
        cout << "6. Agregar evaluacion." <<endl;
        cout << "0. Salir" << endl;
        cin >> opcion;
        switch(opcion){
            //case 1: primeraOpcion(sistema);
            break;
            //case 2: sistema->mostrarPropietarios();
            break;
        }

    }while(opcion != 0);
}

int main(){
    Sistema* pSistema = new Sistema();
    mostrarMenu(pSistema);
    delete pSistema;
    return 0;
}
