#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3)
    : p1(p1), p2(p2), p3(p3) {}

double Triangle::area() {
    // Using Heron's formula
    double a = p1.distanceTo(p2);
    double b = p2.distanceTo(p3);
    double c = p3.distanceTo(p1);
    double s = (a + b + c) / 2.0;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

double Triangle::perimeter() {
    return p1.distanceTo(p2) + p2.distanceTo(p3) + p3.distanceTo(p1);
}

void Triangle::draw() {
    std::cout << "Drawing Triangle with vertices at ("
              << p1.getX() << ", " << p1.getY() << "), ("
              << p2.getX() << ", " << p2.getY() << "), ("
              << p3.getX() << ", " << p3.getY() << ")" << std::endl;
}

bool Triangle::isSelfIntersecting() {
    // A triangle cannot self-intersect
    return false;
}
