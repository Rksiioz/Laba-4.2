#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "RightTriangle.h"
#include "Trapezoid.h"

int main() {
    Rectangle rectangle(5, 4);
    Circle circle(3);
    RightTriangle triangle(4, 3);
    Trapezoid trapezoid(2, 4, 3);

    Shape* shapes[] = {&rectangle, &circle, &triangle, &trapezoid};

    for (Shape* shape : shapes) {
        std::cout << "Area: " << shape->area() << std::endl;
    }

    return 0;
}
