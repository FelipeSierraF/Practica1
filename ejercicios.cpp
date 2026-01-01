#include "ejercicios.h"
#include "auxiliares.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void ejercicioUno(){
    int A = validarEntero();
    int B = validarEntero();
    int residuo = 0;
    if (B == 0) residuo = 0;
    else residuo = A % B;
    std::cout << "El residuo de " << A << " y " << B << " es igual a: " << residuo << std::endl;
    std::cout << std::endl;
}

void ejercicioTres(){
    int A = validarEntero();
    int B = validarEntero();
    if (A > B) std::cout << "El numero " << A << " es mayor a " << B << std::endl;
    else if( B > A) std::cout << "El numero " << B << " es mayor a " << A << std::endl;
    else if (A == B) std::cout << "Ambos numeros son iguales" << std::endl;
    std::cout << std::endl;
}

void ejercicioCinco(){
    int A = validarEntero();
    int B = validarEntero();
    int div = (A >= 0) ? (A + B/2) / B : (A - B/2) / B;
    std::cout << "El resultado es: " << div << std::endl;
}

void ejercicioSiete(){
    int N = validarEntero();
    int result = 0;
    for (int i = 1; i <= N; i++){
        result +=i;
    }
    std::cout << "El resultado de la suma es: " << result << std::endl;

}

void ejercicioNueve(){
    int N = validarEntero();
    float perimetro,area;
    perimetro = 2 * 3.1416 * N;
    area = 3.1416 * N*N;
    std::cout << "El perimetro del circulo ede radio: "<< N << " es:" << perimetro << std::endl;
    std::cout << "El area del circulo de radio: " << N << " es: " << area << std::endl;
}

void ejercicioOnce(){
    int N = validarEntero();
    int result = 0;
    std::cout << "El resultado es: ";
    for (int i = 1; i <= 10 ; i++){
        result = N * i;
        std::cout << N << "x" << i << ": " << result << std::endl;
    }
}

void ejercicioTrece(){
    int N = validarEntero();
    int result = 0;
    for (int i = 1; i <= N; i++){
        if(N % i == 0){
            std::cout << i << std::endl;
        }
    }
}

void ejercicioQince(){
    int suma = 0;
    while (true){
        int init = validarEntero();
        if(init != 0){
            suma+=init;
        }else if(init == 0){
            break;
        }
    }
    std::cout << "El resultado de la suma de los valores ingresados es: " << suma << std::endl;
}

void ejercicioDiecisiete(){
    int suma = 0;
    int ant = 0;
    while(true){
        int init = validarEntero();
        if(init != 0){
            suma+= init;
            if(init >= ant){
                ant = init;
            }
        }else if(init == 0){
            break;
        }
    }
    std::cout << "La suma de los valores ingresados es: " << suma << std::endl;
    std::cout << "El valor mayor de los valores ingresados es: " << ant << std::endl;

}

void ejercicioDiecinueve(){
    int N = validarEntero();
    int cont = 0;
    for (int i = 1; i <= N; i++){
        if (N % i == 0){
            cont+=1;
        }
    }
    if (cont == 2) std::cout << "El numero: " << N << " es primo" << std::endl;
    else std::cout << "El numero: " << N << " no es primo" << std::endl;
}

void ejercicioVeintiuno(){
    std::string letra = validarString();
    char letraV = letraValida(letra);
    std::cout << letra << "-> " << letraV << std::endl;
}

void ejercicioVeintitres(){
    int A = validarEntero();
    int B = validarEntero();
    int resulA = A;
    int resulB = B;
    int total = 1;
    int cont = 2;
    while (resulA != 1 || resulB != 1){
        if((resulA % cont) == 0 || (resulB % cont) == 0) {
            total = total * cont;
            if((resulA % cont) == 0){
                resulA = resulA / cont;
            }
            if((resulB % cont) == 0){
                resulB = resulB / cont;
            }
            if ((resulA % cont) == 0 || (resulB % cont) == 0){
                continue;
            }else{
                cont+=1;
            }
        }else{
            if ((resulA % cont) == 0 || (resulB % cont) == 0){
                continue;
            }else{
                cont+=1;
            }
        }
    }
    if(resulA == 1 || resulB == 1){
        std::cout << "El MCM entre: " << A << " y " << B << " es: " << total << std::endl;
    }else{
        total = total * cont;
        std::cout << "El MCM entre: " << A << " y " << B << " es: " << total << std::endl;
    }
}

void ejercicioVeintiCinco(){
    std::string num = validarStringInt();
    int cont = num.length();
    std::cout << "La cantidad de digitos de: " << num << " es: " << cont << std::endl;
}

void ejercicioVeintiSiete(){
    int A = validarEntero();
    std::string operador = validarOperador();
    int resultado = A;
    std::string num = std::to_string(A);
    std::string ope = "\0";
    while(true){
        ope += operador;
        if(operador == "+"){
            int B = validarEntero();
            resultado += B;
            num += std::to_string(B);
        }else if(operador == "-"){
            int B = validarEntero();
            resultado -= B;
            num += std::to_string(B);
        }else if(operador == "x"){
            if(resultado == 0)resultado = 1;
            int B = validarEntero();
            resultado*= B;
            num += std::to_string(B);
        }else if(operador == "/"){
            if(resultado == 0)resultado = 1;
            int B = validarEntero();
            resultado = resultado / B;
            num += std::to_string(B);
        }
        operador = validarOperador();
        if(operador == "="){
            for(int i = 0; i < num.length(); i++){
                std::cout << num[i] << " ";
                std::cout << ope[i] << " ";
            }
            std::cout << "= " << resultado << std::endl;
            break;
        }
    }
}

void ejercicioVeintiNueve(){
    int ini = 0;
    int fin = 100;
    while(true){
        int result = (ini + fin) / 2;
        std::cout << "El numero es: " << result << std::endl;
        std::string ope = validarOpe();
        if(ope == ">"){
            ini = result + 1;
        }else if(ope == "<"){
            fin = result - 1;
        }else if(ope == "=") {
            std::cout <<"Respuesta correcta" << std::endl;
            break;
        }

        if(ini > fin){
            std::cout << "Error: No se puede encontrar el numero con las indicaciones dadas" << std::endl;
            return;
        }
    }
}





