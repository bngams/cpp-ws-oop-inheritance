#include "Polygon.h"
#include <iostream>
#include <cmath>

Polygon::Polygon(const std::vector<Point>& vertices) : vertices(vertices) {}

double Polygon::area() {
    // Using the Shoelace formula (also known as the surveyor's formula)
    if (vertices.size() < 3) return 0.0;

    double sum = 0.0;
    for (size_t i = 0; i < vertices.size(); i++) {
        size_t j = (i + 1) % vertices.size();
        sum += vertices[i].getX() * vertices[j].getY();
        sum -= vertices[j].getX() * vertices[i].getY();
    }
    return std::abs(sum) / 2.0;
}

double Polygon::perimeter() {
    if (vertices.size() < 2) return 0.0;

    double total = 0.0;
    for (size_t i = 0; i < vertices.size(); i++) {
        size_t j = (i + 1) % vertices.size();
        total += vertices[i].distanceTo(vertices[j]);
    }
    return total;
}

void Polygon::draw() {
    std::cout << "Drawing Polygon with " << vertices.size() << " vertices: ";
    for (size_t i = 0; i < vertices.size(); i++) {
        std::cout << "(" << vertices[i].getX() << ", " << vertices[i].getY() << ")";
        if (i < vertices.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;
}

bool Polygon::isSelfIntersecting() {
    // Simplified check: a proper implementation would check all edge pairs
    // For now, return false as it requires complex geometry
    return false;
}
