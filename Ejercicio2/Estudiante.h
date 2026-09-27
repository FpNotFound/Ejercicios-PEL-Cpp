#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include <vector>

using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    vector<double> calificaciones;

public:
    Estudiante(string nombre, int edad, vector<double> calificaciones);

    double calcularPromedio();

    void mostrarInformacion();
};

#endif