#include "Trapezoid.h"

Trapezoid::Trapezoid(double a, double b, double h) : side_a(a), side_b(b), height(h) {}

double Trapezoid::area() const {
    return (side_a + side_b) * height / 2.0;
}
