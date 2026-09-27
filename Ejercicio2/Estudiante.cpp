#include "Estudiante.h"
#include <iostream>

using namespace std;

Estudiante::Estudiante(string nombre, int edad, vector<double> calificaciones) {
    this->nombre = nombre;
    this->edad = edad;
    this->calificaciones = calificaciones;
}

double Estudiante::calcularPromedio() {
    double suma = 0;

    for (double calificacion : calificaciones) {
        suma += calificacion;
    }

    return suma / calificaciones.size();
}

void Estudiante::mostrarInformacion() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;

    cout << "Calificaciones: ";

    for (double calificacion : calificaciones) {
        cout << calificacion << " ";
    }

    cout << endl;
    cout << "Promedio: " << calcularPromedio() << endl;
}