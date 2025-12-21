cmake_minimum_required(VERSION 3.16)

project(Practica1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Practica1 main.cpp
    auxiliares.h auxiliares.cpp
    ejercicios.h ejercicios.cpp)

include(GNUInstallDirs)
install(TARGETS Practica1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
