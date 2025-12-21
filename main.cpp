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


    do{
        char aux = validarChar();
        std::cout << "==========BIENVENIDO AL MENU PRINCIPAL==================" << std::endl;

        while (true){
            menu();
            cin >> opcion;
            if(!validarEntrada(opcion)){
                cout << "¡Error! debe ingresar un numero entero positivo" << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }else{
                break;
            }
        }

        if (opcion == "1"){
            ejercicioUno();
        }else if (opcion == "3"){
            ejercicioTres();
        }
        else{
            cout <<"Opción invalida.";
            menu();
        }
    }while (aux == 's');
    return 0;
}
