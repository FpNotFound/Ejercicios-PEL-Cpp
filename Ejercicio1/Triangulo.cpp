#include "Triangulo.h"

Triangulo::Triangulo(double base, double altura,
                     double lado1, double lado2, double lado3) {

    this->base = base;
    this->altura = altura;
    this->lado1 = lado1;
    this->lado2 = lado2;
    this->lado3 = lado3;
}

double Triangulo::calcularArea() {
    area = (base * altura) / 2;
    return area;
}

double Triangulo::calcularPerimetro() {
    perimetro = lado1 + lado2 + lado3;
    return perimetro;
}