#include "Square.h"

Square::Square(const Point& topLeft, double side)
    : Polygon({
        topLeft,
        Point(topLeft.getX() + side, topLeft.getY()),
        Point(topLeft.getX() + side, topLeft.getY() - side),
        Point(topLeft.getX(), topLeft.getY() - side)
    }) {}
