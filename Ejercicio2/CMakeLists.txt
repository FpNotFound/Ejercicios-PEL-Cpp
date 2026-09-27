cmake_minimum_required(VERSION 4.3)
project(Ejercicio2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ejercicio2 main.cpp
        Estudiante.h
        Estudiante.cpp
        RegistroEstudiantes.h
        RegistroEstudiantes.cpp)
