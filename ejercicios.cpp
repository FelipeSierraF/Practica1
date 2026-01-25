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

void problemaDos(){
    int cont = 0;
    std::string cant;
    int bm[10]{50000,20000,10000,5000,2000,1000,500,200,100,50};
    int cifra = validarEntero();
    int can = 0;
    while(cifra >= 0){
        if(bm[cont] <= cifra){
            cifra = cifra - bm[cont];
            can+=1;
            if(bm[cont] > cifra){
                cant = cant + std::to_string(can);
                can = 0;
                cont+=1;
            }
        }else if(cifra < 50){
            cant = cant + "0";
            break;
        }else{
            cant = cant + "0";
            can = 0;
            cont+=1;
        }
    }
    if(cant.length() < 10){
        for (int i = cont; i < 10; i ++){
            cant+= "0";
        }
    }
    for(int i = 0; i < 10; i++){
        std::cout << bm[i] << ":" << cant[i] << std::endl;
    }

    std::cout << "Restante: " << cifra << std::endl;
}

void problemaCuatro(){
    std::string num1 = validarStringIntN();
    std::string num2 = validarStringIntN();
    std::string result = sumFe(num1,num2);
    std::cout << "La hora es: " << result << std::endl;
}

void ejercicioTres(){
    int A = validarEntero();
    int B = validarEntero();
    if (A > B) std::cout << "El numero " << A << " es mayor a " << B << std::endl;
    else if( B > A) std::cout << "El numero " << B << " es mayor a " << A << std::endl;
    else if (A == B) std::cout << "Ambos numeros son iguales" << std::endl;
    std::cout << std::endl;
}

void problemaSeis(){
    int num = validarEntero();
    double result = 1.0;
    double facto = 1.0;
    for (int i = 1; i < num; i++){
        facto *= i;
        result += 1.0 / facto;
    }

    std::cout << "El resultado de e es: " << result << std::endl;
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

void problemaOcho(){
    int a = validarEntero();
    int b = validarEntero();
    int c = validarEntero();
    bool bandera = false;
    long long resul = 0;
    long long cont = 1;

    if(a != b){
        std::cout << a*cont;
        resul = resul + (a * cont);
        cont+=1;
        while((a*cont) < c){
            std::cout << " + " << a*cont;
            resul = resul + (a * cont);
            cont+=1;
        }

        cont = 1;

        while ((b*cont) < c){
            if(((b*cont) % a) != 0){
                std::cout << " + " << b * cont;
                resul = resul + (b * cont);
                cont+=1;
            }else{
                cont+=1;
                continue;
            }
        }
        std::cout << " = " << resul << std::endl;

    }else{
        std::cout << a*cont;
        resul = resul + (a * cont);
        cont+=1;
        while((a*cont) < c){
            std::cout << " + " << a*cont;
            resul = resul + (a * cont);
            cont+=1;
        }
        std::cout << (a * cont) << " = " << resul << std::endl;
    }
}

void ejercicioNueve(){
    int N = validarEntero();
    float perimetro,area;
    perimetro = 2 * 3.1416 * N;
    area = 3.1416 * N*N;
    std::cout << "El perimetro del circulo ede radio: "<< N << " es:" << perimetro << std::endl;
    std::cout << "El area del circulo de radio: " << N << " es: " << area << std::endl;
}

void problemaDiez(){
    int n = validarEntero();
    int aux = 0;
    int aux2 = 0;
    int primo = 0;
    if (n == 0) std::cout << "No existe valor para 0." << std::endl;
    else{
        for(int i = 2; aux2 < n; i++){
            for(int j = 1; j <= i; j++){
                if((i % j) == 0){
                    aux+=1;
                    if(aux > 2) break;
                }
            }
            if(aux == 2){
                primo = i;
                aux2 = aux2 + 1;
                aux = 0;
            }else{
                aux = 0;
            }
        }

        std::cout << "El primo numero " << n << " es: " << primo << std::endl;
    }
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

void problemaDoce(){
    int num = validarEntero();
    int max = num;
    int cont = 2;
    while(max > 1){
        if(max % cont == 0){
            max = max / cont;
        }else{
            cont+= 1;
        }
    }
    std::cout << "El mayor factor primo de " << num << " es " << cont << std::endl;
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

void problemaCatorce(){
    int num1 = 100;
    int num2 = 100;
    int result = 0;
    int resultF = 0;
    int numM1 = 0;
    int numM2 = 0;
    while(num1 < 1000){
        result = num1 * num2;
        num2 +=1;
        if(validarPalindroma(result)){
            if(resultF < result){
                resultF = result;
                numM1 = num1;
                numM2 = num2;
            }
        }
        if (num2 == 999){
            num2 = 100;
            num1 +=1;
        }
    }

    std::cout << numM1 << " x " << numM2 << std::endl;
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

void problemaDieciseis(){
    int num = validarEntero();
    int n = 0;
    int cont = 1;
    int aux = 1;
    int aux2 = 1;
    for (int i = 1; i < num; i++){
        n = i;
        cont = 1;
        while(n != 1){
            if(n % 2 == 0){
                n = n/2;
            }else{
                n = (3*n) + 1;
            }
            cont+=1;
        }
        if(cont > aux){
            aux = cont;
            aux2 = i;
        }
    }
    std::cout << "La serie mas larga es con la semilla: " << aux2 << " y tiene " << aux << " terminos." <<std::endl;
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





