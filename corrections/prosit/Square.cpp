#include "Square.h"
#include <iostream>

Square::Square(const Point& topLeft, double side)
    : topLeft(topLeft), side(side) {}

double Square::area() {
    return side * side;
}

double Square::perimeter() {
    return 4 * side;
}

void Square::draw() {
    std::cout << "Drawing Square at (" << topLeft.getX() << ", " << topLeft.getY()
              << ") with side " << side << std::endl;
}

bool Square::isSelfIntersecting() {
    // A square cannot self-intersect
    return false;
}
