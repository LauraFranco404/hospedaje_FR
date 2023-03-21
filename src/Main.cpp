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
    bool rHuespedTemp;
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
    cout << "Disponibilidad (Digite 1 si esta disponible y 0 si no esta disponible):";
    cin >> rHuespedTemp;
    getline(cin, fechaNacTemp, '\n');
    Propietario *pPropietarioTemp = new Propietario(cedulaTemp, nombreTemp, sexoTemp, fechaNacTemp, rHuespedTemp, puntaje);
    sistema->recibirPropietario(idTemp, pPropietarioTemp);
}


void segundaOpcion(Sistema *sistema, int idTempH){
    int cedulaTemp;
    string nombreTemp;
    string sexoTemp;
    string fechaNacTemp;
    string nombreClinicaTemp;
    string ciudadOrigenTemp;
    int puntaje = 0;

    cout << "Bienvenido, huesped.";
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
    cout << "Ingrese el nombre de la clinica en la que se encuentra su familiar:";
    cin.ignore();
    getline(cin, nombreClinicaTemp, '\n');
    cout << "Ingrese el nombre de la ciudad de la que proviene:";
    cin.ignore();
    getline(cin, ciudadOrigenTemp, '\n');
    Huesped *pHuespedTemp = new Huesped(cedulaTemp, nombreTemp, sexoTemp, fechaNacTemp, nombreClinicaTemp, ciudadOrigenTemp, puntaje);
    sistema->recibirHuesped(idTempH, pHuespedTemp);

}

void terceraOpcion(Sistema *sistema, int idTemp) {
    int cedulaTemp;
    string direccionTemp;
    int numCamasTemp;
    bool bebesTemp;
    string descripcionTemp;
    cout << "Bienvenido(a)" << endl;
    cout << "Por favor ingrese su documento:";
    cin >> cedulaTemp;
    Propietario *pPropietarioTemp = sistema->accederAPropietario(cedulaTemp);
    cout << "A continuacion modificaremos sus datos" << endl;
    cout << "Ingrese su direccion:";
    cin.ignore();
    getline(cin, direccionTemp, '\n');
    cout << "Ingrese el numero de camas disponibles en su hogar: ";
    cin >> numCamasTemp;
    cout << "Disponibilidad para bebes (Digite 1 si esta disponible y 0 si no esta disponible): ";
    cin >> bebesTemp;
    cout << "Ingrese una descripcion de su casa: ";
    cin.ignore();
    getline(cin, descripcionTemp, '\n');
    pPropietarioTemp->agregarHogar(direccionTemp, numCamasTemp, bebesTemp, descripcionTemp);
}

void sextaOpcion(Sistema *sistema, int idReservaTemp){
    int cedulaTemp;
    string fechaIniTemp;
    string fechaFinTemp;
    int cedulaTempP;
    cout << "Bienvenido(a)" << endl;
    cout << "Por favor ingrese su documento: ";
    cin >> cedulaTemp;
    Huesped *pHuespedTemp = sistema->accederAHuesped(cedulaTemp);
    cout << "Usted realizara una reserva" << endl;
    cout << "Ingrese la fecha de inicio: ";
    cin.ignore();
    getline(cin, fechaIniTemp, '\n');
    cout << "Ingrese la fecha de fin: ";
    cin.ignore();
    getline(cin, fechaFinTemp, '\n');
    cout << "A continuacion vera la lista de hogares disponibles:" << endl;
    sistema->mostrarPropietariosDisponibles();
    cout << "\nDigite la cedula de la persona encargada del hogar que desea reservar: ";
    cin >> cedulaTempP;
    Propietario *pPropietarioTemp = sistema->accederAPropietario(cedulaTempP);
    Reserva *pReservaTemp = new Reserva(idReservaTemp, fechaIniTemp, fechaFinTemp, pPropietarioTemp, pHuespedTemp);
    sistema->recibirReserva(idReservaTemp, pReservaTemp);
    pPropietarioTemp->setRHuesped(0);
    cout << "\nReserva creada con exito" << endl;
}

void octavaOpcion(Sistema *sistema){
    int lReserva;
    int cedulaP;
    cout << "Las siguientes son reservas de nuestro sistema" << endl;
    sistema->mostrarReservas();
    cout << "Digite el numero de la reserva que desea liberar: ";
    cin >> lReserva;
    Reserva *pReservaTemp = sistema->accederAReserva(lReserva);
    cedulaP = pReservaTemp->getCedulaPropietario();
    Propietario *pPropietarioTemp = sistema->accederAPropietario(cedulaP);
    sistema->liberarReserva(lReserva);
    pPropietarioTemp->setRHuesped(1);
}
/*
void novenaOpcion(Sistema *sistema, int idEvTemp){
    int hop;
    int cedulaTempDe;
    int cedulaTempPara;
    string fecha;
    string comentario;
    int calificacion;

    cout << "Por favor ingrese su documento: ";
    cin >> cedulaTempDe;
    cout << "Ingrese la cedula de la persona a la que realizara la evaluacion: ";
    cin >> cedulaTempPara;
    cout << "Ingrese la fecha de su evaluacion: ";
    cin.ignore();
    getline(cin, fecha, '\n');
    cout << "Ingrese el comentario de su evaluacion: ";
    cin.ignore();
    getline(cin, comentario, '\n');
    cout << "Ingrese la calificacion";
    cin >> calificacion;
    Huesped *pHuespedTemp = sistema->accederAHuesped(cedulaTempDe);
    Propietario *pPropietarioTemp = sistema->accederAPropietario(cedulaTempDe);
    Evaluacion *pEvaluacion = new Evaluacion(fecha, calificacion, comentario, pHuespedTemp, pPropietarioTemp);
}
 */
void mostrarMenu(Sistema* sistema){
    int opcion;
    int idTemp = 1;
    int idTempH = 1;
    int idReservaTemp = 1;
    do{
        cout << "\n****Bienvenido a la red de soporte de la ciudad de Manizales****\n";
        cout << "1. Agregar un propietario." << endl;
        cout << "2. Agregar un huesped." << endl;
        cout << "3. Agregue informacion de su hogar." << endl;
        cout << "4. Ver lista de propietarios e informacion de los hogares." << endl;
        cout << "5. Ver lista de Huespedes" << endl;
        cout << "6. Crear reserva." << endl;
        cout << "7. Ver lista de reservas." << endl;
        cout << "8. Liberar reserva." << endl;
        cout << "9. Agregar evaluacion." << endl;
        cout << "10. Ver lista de evaluaciones." << endl;
        cout << "0. Salir" << endl;
        cin >> opcion;
        switch(opcion) {
            case 1:
                primeraOpcion(sistema, idTemp);
                idTemp++;
                break;
            case 2:
                segundaOpcion(sistema, idTempH);
                idTempH++;
                break;
            case 3:
                terceraOpcion(sistema, idTemp);
                break;
            case 4:
                sistema->mostrarPropietarios();
                break;
            case 5:
                sistema->mostrarHuespedes();
                break;
            case 6:
                sextaOpcion(sistema, idReservaTemp);
                idReservaTemp++;
                break;
            case 7:
                sistema->mostrarReservas();
                break;
            case 8:
                octavaOpcion(sistema);
        }

    }while(opcion != 0);
}

int main(){
    Sistema* pSistema = new Sistema();
    mostrarMenu(pSistema);
    delete pSistema;
    return 0;
}
