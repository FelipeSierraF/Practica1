#include "ejercicios.h"
#include "auxiliares.h"
#include <iostream>

void ejercicioUno(){
    int A = validarEntero();
    int B = validarEntero();
    int residuo = 0;
    if (B == 0) residuo = 0;
    else residuo = A % B;
    std::cout << "El residuo de " << A << " y " << B << " es igual a: " << residuo << std::endl;
}

void ejercicioTres(){
    int A = validarEntero();
    int B = validarEntero();
    if (A > B) std::cout << "El numero " << A << " es mayor a " << B << std::endl;
    else if( B > A) std::cout << "El numero " << B << " es mayor a " << A << std::endl;
    else if (A == B) std::cout << "Ambos numeros son iguales" << std::endl;
}
