#ifndef AUXILIARES_H
#define AUXILIARES_H

#include <string>

void menu();
bool validarEntrada(const std::string opcion);
int validarEntero();
char validarChar();
std::string validarString();
char letraValida(std::string l);
std::string validarStringInt();
std::string validarOperador();
std::string validarOpe();
std::string validarStringIntN();
std::string sumFe(const std::string& t1,const std::string& t2);
#endif // AUXILIARES_H
