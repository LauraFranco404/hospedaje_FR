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

void primeraOpcion(Sistema *sistema, int idTemp);
void mostrarMenu(Sistema* sistema);
int main();


void primeraOpcion(Sistema *sistema, int idTemp){
    int cedulaTemp;
    string nombreTemp;
    string sexoTemp;
    string fechaNacTemp;
    bool rHuespedTemp = true;
    int puntaje = 0;

    cout << "Bienvenido, propietario.";
    cout << "A continuacion recibiremos su informacion para agregarlo a la base de datos" << endl;
    cout << "\nIngrese su identificacion:";
    cin >> cedulaTemp;
    cout << "Ingrese su nombre completo:";
    cin.ignore();
    getline(cin, nombreTemp, '\n');
    cout << "Ingrese su genero:";
    cin.ignore();
    getline(cin, sexoTemp, '\n');
    cout << "Ingrese su fecha de nacimiento (dd/mm/aaaa):";
    cin.ignore();
    getline(cin, fechaNacTemp, '\n');
    sistema->recibirPropietario(idTemp, cedulaTemp, nombreTemp, sexoTemp, fechaNacTemp, rHuespedTemp, puntaje);
}


void mostrarMenu(Sistema* sistema){
    int opcion;
    int idTemp = 1;
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
            case 1: primeraOpcion(sistema, idTemp);
                idTemp++;
                break;


            //case 2: sistema->mostrarPropietarios();
            //break;
        }

    }while(opcion != 0);
}

int main(){
    Sistema* pSistema = new Sistema();
    mostrarMenu(pSistema);
    delete pSistema;
    return 0;
}
