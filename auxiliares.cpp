#include "auxiliares.h"
#include <iostream>
#include <limits>
#include <string>
#include <cctype>
#include <sstream>

void menu(){
    std::cout << "1.Ejercicio 1:\n";
    std::cout << "2.Problema 2:\n";
    std::cout << "3.Ejercicio 3:\n";
    std::cout << "4.Problema 4:\n";
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

bool validarEntrada2(const std::string& n){
    if(n.empty()) return false;
    if(n.length() < 3 || n.length() > 4) return false;
    for(char c : n) if(!isdigit(c)) return false;

    std::string aux1, aux2;

    if(n.length() == 4){
        aux1 = n.substr(0,2);
        aux2 = n.substr(2,2);
    }
    else if(n.length() == 3){
        aux1 = n.substr(0,1);
        aux2 = n.substr(1,2);
    }

    int h = stoi(aux1);
    int m = stoi(aux2);

    if(h > 23 || m > 59) return false;

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

std::string validarStringIntN(){
    std::string num;
    std::cout << "Ingrese una hora: ";
    std::getline(std::cin, num);
    while(!validarEntrada2(num)){
        std::cout << "Error:Debe ingresar un valor mayor a 4: ";
        std::getline(std::cin, num);
    }

    return num;
}

std::string sumFe(const std::string& t1, const std::string& t2){
    int h1 = 0, m1 = 0;
    int h2 = 0, m2 = 0;

    if(t1.length() == 4){
        h1 = (t1[0]-'0')*10 + (t1[1]-'0');
        m1 = (t1[2]-'0')*10 + (t1[3]-'0');
    } else {
        h1 = (t1[0]-'0');
        m1 = (t1[1]-'0')*10 + (t1[2]-'0');
    }

    if(t2.length() == 4){
        h2 = (t2[0]-'0')*10 + (t2[1]-'0');
        m2 = (t2[2]-'0')*10 + (t2[3]-'0');
    } else {
        h2 = (t2[0]-'0');
        m2 = (t2[1]-'0')*10 + (t2[2]-'0');
    }

    int m = m1 + m2;
    int h = h1 + h2;

    if(m >= 60){
        m -= 60;
        h++;
    }

    if(h >= 24) h -= 24;

    std::string resultado;

    if(h < 10) resultado += '0';
    resultado += char((h/10) + '0');
    resultado += char((h%10) + '0');

    resultado += char((m/10)+'0');
    resultado += char((m%10)+'0');

    return resultado;
}








