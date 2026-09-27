#include <iostream>
#include "Estudiante.h"
#include "RegistroEstudiantes.h"

using namespace std;

int main() {

    RegistroEstudiantes registro;

    Estudiante estudiante1(
        "Mariana",
        20,
        {90, 85, 95}
    );

    Estudiante estudiante2(
        "Arantza",
        19,
        {80, 90, 88}
    );

    Estudiante estudiante3(
        "Juan Esteban",
        19,
        {100, 95, 92}
    );

    registro.agregarEstudiante(estudiante1);
    registro.agregarEstudiante(estudiante2);
    registro.agregarEstudiante(estudiante3);

    cout << "REGISTRO DE ESTUDIANTES" << endl;
    cout << "========================" << endl;

    registro.mostrarEstudiantes();

    return 0;
}