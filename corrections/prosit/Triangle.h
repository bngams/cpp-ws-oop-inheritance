#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Polygon.h"
#include "Point.h"

class Triangle : public Polygon {
private:
    Point p1;
    Point p2;
    Point p3;

public:
    Triangle(const Point& p1, const Point& p2, const Point& p3);
    double area() override;
    double perimeter() override;
    void draw() override;
    bool isSelfIntersecting() override;
};

#endif
