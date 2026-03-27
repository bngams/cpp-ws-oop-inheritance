#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygon.h"
#include "Point.h"

class Rectangle : public Polygon {
public:
    Rectangle(const Point& topLeft, double width, double height);
};

#endif
