#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica {
protected:
    double area;
    double perimetro;

public:
    FiguraGeometrica();

    virtual double calcularArea() = 0;
    virtual double calcularPerimetro() = 0;

    double getArea();
    double getPerimetro();

    virtual ~FiguraGeometrica() = default;
};

#endif