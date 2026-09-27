#include "Rectangulo.h"

Rectangulo::Rectangulo(double base, double altura) {
    this->base = base;
    this->altura = altura;
}

double Rectangulo::calcularArea() {
    area = base * altura;
    return area;
}

double Rectangulo::calcularPerimetro() {
    perimetro = 2 * (base + altura);
    return perimetro;
}