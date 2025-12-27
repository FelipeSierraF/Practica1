#include "auxiliares.h"
#include <iostream>
#include <limits>
#include <string>
#include <cctype>

void menu(){
    std::cout << "1.Ejercicio 1:\n";
    std::cout << "3.Ejercicio 3:\n";
    std::cout << "5.Ejercicio 5:\n";
    std::cout << "0.Salir\n";
    std::cout << "Ingrese una de las siguientes opciones: ";
}

bool validarEntrada(const std::string opcion){
    if(opcion.empty()) return false;
    for (char c:opcion){
        if(!std::isdigit(c)) return false;
    }
    return true;
}



int convertirEntero(std::string n){
    int numero = 0;
    for (char c:n) numero = numero*10 +(c - '0');
    return numero;
}

int validarEntero(){
    std::string num;
    std::cout << "Ingrese un numero entero positivo: ";

    while (true){
        std::cin >> num;
        if(!validarEntrada(num)){
            std::cout << "¡Error! debe ingresar un numero entero positivo." << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');

            std::cout << "Ingrese nuevamente la opcion: ";
        }else{
            int entero = convertirEntero(num);
            return entero;
        }
    }

}

float leerFloatSeguro() {
    float valor;
    while (true) {
        std::cout << "Ingrese un numero entero positivo: ";

        if (std::cin >> valor) {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return valor;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada inválida. Por favor ingrese un número.\n";
        }
    }
}

