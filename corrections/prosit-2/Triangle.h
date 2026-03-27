#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Polygon.h"
#include "Point.h"

class Triangle : public Polygon {
public:
    Triangle(const Point& p1, const Point& p2, const Point& p3);
};

#endif
