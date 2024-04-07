#include "Shape.h"

class Trapezoid : public Shape {
private:
    double side_a;
    double side_b;
    double height;

public:
    Trapezoid(double a, double b, double h);
    double area() const override;
};