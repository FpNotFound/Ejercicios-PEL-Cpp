#include "RegistroEstudiantes.h"
#include <iostream>

using namespace std;

void RegistroEstudiantes::agregarEstudiante(Estudiante estudiante) {
    estudiantes.push_back(estudiante);
}

void RegistroEstudiantes::mostrarEstudiantes() {
    for (Estudiante estudiante : estudiantes) {
        estudiante.mostrarInformacion();
        cout << "------------------------" << endl;
    }
}