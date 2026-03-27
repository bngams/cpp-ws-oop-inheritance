#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include "Point.h"

class Circle : public Shape {
private:
    Point center;
    double radius;

public:
    Circle(const Point& center, double radius);
    double area() override;
    double perimeter() override;
    void draw() override;
    bool isSelfIntersecting();
};

#endif
