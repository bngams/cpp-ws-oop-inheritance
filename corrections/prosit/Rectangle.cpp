#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(const Point& topLeft, double width, double height)
    : topLeft(topLeft), width(width), height(height) {}

double Rectangle::area() {
    return width * height;
}

double Rectangle::perimeter() {
    return 2 * (width + height);
}

void Rectangle::draw() {
    std::cout << "Drawing Rectangle at (" << topLeft.getX() << ", " << topLeft.getY()
              << ") with width " << width << " and height " << height << std::endl;
}

bool Rectangle::isSelfIntersecting() {
    // A rectangle cannot self-intersect
    return false;
}
