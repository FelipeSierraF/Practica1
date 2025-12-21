#include "auxiliares.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string opcion;
    cout << "==========BIENVENIDO AL MENU PRINCIPAL==================" << endl;
    cout << "Ingrese una de las siguientes opciones: \n";
    cout << "1.Ejercicio 1:\n";
    cout << "3.Ejercicio 3:\n";

    while (true){
        cin >> opcion;
        if(!validarEntrada(opcion)){
            cout << "¡Error! debe ingresar un numero entero mayor a 0." << endl;
            cin.clear();
            cin.ignore(10000, '\n');

            cout << "Ingrese nuevamente la opcion: ";
        }else{
            break;
        }
    }
    cout << "Funciona" << endl;
    return 0;
}
