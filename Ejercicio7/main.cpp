#include <iostream>
#include "MatrizGenerica.h"

using namespace std;

int main() {


    // MATRICES DE ENTEROS

    MatrizGenerica<int> matrizA(2, 2);
    MatrizGenerica<int> matrizB(2, 2);

    // Matriz A
    matrizA.asignar(0, 0, 1);
    matrizA.asignar(0, 1, 2);
    matrizA.asignar(1, 0, 3);
    matrizA.asignar(1, 1, 4);

    // Matriz B
    matrizB.asignar(0, 0, 5);
    matrizB.asignar(0, 1, 6);
    matrizB.asignar(1, 0, 7);
    matrizB.asignar(1, 1, 8);

    cout << "MATRIZ A" << endl;
    matrizA.mostrar();

    cout << "\nMATRIZ B" << endl;
    matrizB.mostrar();


    // SUMA

    MatrizGenerica<int> suma = matrizA.sumar(matrizB);

    cout << "\nSUMA DE A + B" << endl;
    suma.mostrar();


    // MULTIPLICACION

    MatrizGenerica<int> multiplicacion =
        matrizA.multiplicar(matrizB);

    cout << "\nMULTIPLICACION DE A * B" << endl;
    multiplicacion.mostrar();


    // MATRIZ DE DECIMALES

    MatrizGenerica<double> matrizDecimal(2, 2);

    matrizDecimal.asignar(0, 0, 1.5);
    matrizDecimal.asignar(0, 1, 2.5);
    matrizDecimal.asignar(1, 0, 3.5);
    matrizDecimal.asignar(1, 1, 4.5);

    cout << "\nMATRIZ DE DECIMALES" << endl;
    matrizDecimal.mostrar();


    return 0;
}