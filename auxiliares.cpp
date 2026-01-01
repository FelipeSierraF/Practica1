#include "auxiliares.h"
#include <iostream>
#include <limits>
#include <string>
#include <cctype>

void menu(){
    std::cout << "1.Ejercicio 1:\n";
    std::cout << "3.Ejercicio 3:\n";
    std::cout << "5.Ejercicio 5:\n";
    std::cout << "7.Ejercicio 7:\n";
    std::cout << "9.Ejercicio 9:\n";
    std::cout << "11.Ejercicio 11:\n";
    std::cout << "13.Ejercicio 13:\n";
    std::cout << "15.Ejercicio 15:\n";
    std::cout << "17.Ejercicio 17:\n";
    std::cout << "19.Ejercicio 19:\n";
    std::cout << "21.Ejercicio 21:\n";
    std::cout << "23.Ejercicio 23:\n";
    std::cout << "25.Ejercicio 25:\n";
    std::cout << "27.Ejercicio 27:\n";
    std::cout << "29.Ejercicio 29:\n";
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

bool validarStr(std::string l){
    return l == ">" || l == "<" || l == "=";
}

bool valOperetor(std::string o){
    std::string ope = "+-x/=";
    if(o.empty())return false;
    if (o.length() > 1) return false;
    for (char c:ope){
        if(o[0] != c)continue;
        return true;
    }
    return false;
}

bool opeValid(std::string ope){
    std::string opert = "<>=";
    if(ope.empty()) return false;
    if(ope.length() > 1) return false;
    for(char c: opert){
        if(ope[0] != c) continue;
        return true;
    }
    return false;
}

int convertirEntero(std::string n){
    int numero = 0;
    for (char c:n) numero = numero*10 +(c - '0');
    return numero;
}

int validarEntero(){
    std::string num;
    std::cout << "Ingrese un numero entero: ";

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

std::string validarString(){
    std::string l;
    std::cout << "Ingrese una letra: ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin,l);
    while(!validarStr(l)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error: Ingrese una letra: ";
        std::getline(std::cin,l);
    }
    return l;
}

char letraValida(std::string l){
    for(char c:l){
        if(std::isupper(c)){
            int aux = c - 0;
            int aux1 = aux + 32;
            char convertida = static_cast<char>(aux1);
            return convertida;
        }else if(std::islower(c)){
            int aux = c - 0;
            int aux1 = aux - 32;
            char convertida = static_cast<char>(aux1);
            return convertida;
        }
    }
    return 0;
}

std::string validarStringInt(){
    std::string num;
    std::cout << "Ingrese un numero: ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(std::cin,num);
    while(!validarEntrada(num)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error: Ingrese un numero: ";
        std::getline(std::cin,num);
    }
    return num;
}

std::string validarOperador(){
    std::string operador;
    std::cout << "Ingrese la operacion a realizar(+,-,x,/) o (=) para finalizar la ejecución: ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(std::cin,operador);
    while(!valOperetor(operador)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error: Ingrese un operador: ";
        getline(std::cin,operador);
    }
    return operador;
}

std::string validarOpe(){
    std::string ope;
    while(true){
        std::cout << "Error:Ingrese la operacion a realizar(>,<) o (=): ";
        std::getline(std::cin,ope);

        if(opeValid(ope)){
            return ope;
        }
    }
    std::cout << "Error: operacion invalida\n";
}








