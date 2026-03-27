#ifndef SQUARE_H
#define SQUARE_H

#include "Polygon.h"
#include "Point.h"

class Square : public Polygon {
private:
    Point topLeft;
    double side;

public:
    Square(const Point& topLeft, double side);
    double area() override;
    double perimeter() override;
    void draw() override;
    bool isSelfIntersecting() override;
};

#endif
