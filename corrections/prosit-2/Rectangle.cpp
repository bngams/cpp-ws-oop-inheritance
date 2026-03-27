#include "Rectangle.h"

Rectangle::Rectangle(const Point& topLeft, double width, double height)
    : Polygon({
        topLeft,
        Point(topLeft.getX() + width, topLeft.getY()),
        Point(topLeft.getX() + width, topLeft.getY() - height),
        Point(topLeft.getX(), topLeft.getY() - height)
    }) {}
