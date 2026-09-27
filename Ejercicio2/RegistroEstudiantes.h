#ifndef REGISTROESTUDIANTES_H
#define REGISTROESTUDIANTES_H

#include <vector>
#include "Estudiante.h"

using namespace std;

class RegistroEstudiantes {
private:
    vector<Estudiante> estudiantes;

public:
    void agregarEstudiante(Estudiante estudiante);

    void mostrarEstudiantes();
};

#endif