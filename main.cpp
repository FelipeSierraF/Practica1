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
        }else if(opcion == "7"){
            ejercicioSiete();
        }else if(opcion == "9") {
            ejercicioNueve();
        }else if(opcion == "11"){
            ejercicioOnce();
        }else if(opcion == "13"){
            ejercicioTrece();
        }else if(opcion == "15"){
            ejercicioQince();
        }else if(opcion == "17"){
            ejercicioDiecisiete();
        }else if(opcion == "19"){
            ejercicioDiecinueve();
        }else if(opcion == "21"){
            ejercicioVeintiuno();
        }else if(opcion == "23"){
            ejercicioVeintitres();
        }else if(opcion == "25"){
            ejercicioVeintiCinco();
        }else if(opcion == "27"){
            ejercicioVeintiSiete();
        }else if(opcion == "29"){
            ejercicioVeintiNueve();
        }
        else if(opcion == "0"){
            cout << "Finalizando el programa..." << endl;
            break;
        }
    }
    return 0;
}
