#include <iostream>

#include "Circulo.h"
#include "Rectangulo.h"
#include "Triangulo.h"

using namespace std;

int main() {

    // Crear circulo con radio 5
    Circulo circulo(5);

    // Crear rectangulo base 10 altura 4
    Rectangulo rectangulo(10, 4);

    // Crear triangulo
    // base = 6, altura = 4
    // lados = 5, 5 y 6
    Triangulo triangulo(6, 4, 5, 5, 6);


    cout << "CIRCULO" << endl;
    cout << "Area: " << circulo.calcularArea() << endl;
    cout << "Perimetro: " << circulo.calcularPerimetro() << endl;


    cout << "\nRECTANGULO" << endl;
    cout << "Area: " << rectangulo.calcularArea() << endl;
    cout << "Perimetro: " << rectangulo.calcularPerimetro() << endl;


    cout << "\nTRIANGULO" << endl;
    cout << "Area: " << triangulo.calcularArea() << endl;
    cout << "Perimetro: " << triangulo.calcularPerimetro() << endl;


    return 0;
}