#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygon.h"
#include "Point.h"

class Rectangle : public Polygon {
private:
    Point topLeft;
    double width;
    double height;

public:
    Rectangle(const Point& topLeft, double width, double height);
    double area() override;
    double perimeter() override;
    void draw() override;
    bool isSelfIntersecting() override;
};

#endif
