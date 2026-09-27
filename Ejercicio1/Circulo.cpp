#include "Circulo.h"
#include <cmath>

Circulo::Circulo(double radio) {
    this->radio = radio;
}

double Circulo::calcularArea() {
    area = M_PI * radio * radio;
    return area;
}

double Circulo::calcularPerimetro() {
    perimetro = 2 * M_PI * radio;
    return perimetro;
}