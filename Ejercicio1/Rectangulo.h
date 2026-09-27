#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "FiguraGeometrica.h"

class Rectangulo : public FiguraGeometrica {
private:
    double base;
    double altura;

public:
    Rectangulo(double base, double altura);

    double calcularArea() override;
    double calcularPerimetro() override;
};

#endif