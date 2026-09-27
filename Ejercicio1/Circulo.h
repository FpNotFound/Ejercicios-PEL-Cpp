#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica {
private:
    double radio;

public:
    Circulo(double radio);

    double calcularArea() override;
    double calcularPerimetro() override;
};

#endif