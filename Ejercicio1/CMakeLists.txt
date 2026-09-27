cmake_minimum_required(VERSION 4.3)
project(Ejercicio1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ejercicio1 main.cpp
        FiguraGeometrica.h
        FiguraGeometrica.cpp
        Circulo.h
        Circulo.cpp
        Rectangulo.h
        Rectangulo.cpp
        Triangulo.h
        Triangulo.cpp)
