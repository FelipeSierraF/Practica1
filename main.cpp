#include "auxiliares.h"
#include "ejercicios.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 65001 > nul");
    string opcion;
    std::cout << "==========BIENVENIDO AL MENU PRINCIPAL==================" << std::endl;

    while (true){
        menu();
        cin >> opcion;
        if(!validarEntrada(opcion)){
            cout << "¡Error! debe ingresar un numero entero positivo" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        if (opcion == "1"){
            ejercicioUno();
        }else if (opcion == "3"){
            ejercicioTres();
        }else if (opcion == "5"){
            ejercicioCinco();
        }
        else if(opcion == "0"){
            cout << "Finalizando el programa..." << endl;
            break;
        }
    }
    return 0;
}
