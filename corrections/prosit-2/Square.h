#ifndef SQUARE_H
#define SQUARE_H

#include "Polygon.h"
#include "Point.h"

class Square : public Polygon {
public:
    Square(const Point& topLeft, double side);
};

#endif
