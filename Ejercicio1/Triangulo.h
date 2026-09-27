#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica {
private:
    double base;
    double altura;
    double lado1;
    double lado2;
    double lado3;

public:
    Triangulo(double base, double altura,
              double lado1, double lado2, double lado3);

    double calcularArea() override;
    double calcularPerimetro() override;
};

#endif