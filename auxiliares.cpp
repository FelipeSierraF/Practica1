#include "auxiliares.h"
#include <string>
#include <cctype>

bool validarEntrada(std::string opcion){
    if(opcion.empty()) return false;
    if (opcion.length() > 2) return false;

    int i = 0;
    for (; i < opcion.size() ;i++){
        if(!std::isdigit(opcion[i])) return false;
    }

    return true;
}
