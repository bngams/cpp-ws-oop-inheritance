#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle(const Point& center, double radius) : center(center), radius(radius) {}

double Circle::area() {
    return M_PI * radius * radius;
}

double Circle::perimeter() {
    return 2 * M_PI * radius;
}

void Circle::draw() {
    std::cout << "Drawing Circle at (" << center.getX() << ", " << center.getY()
              << ") with radius " << radius << std::endl;
}

bool Circle::isSelfIntersecting() {
    return false;
}
