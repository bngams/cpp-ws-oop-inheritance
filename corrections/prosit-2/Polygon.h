#ifndef POLYGON_H
#define POLYGON_H

#include "Shape.h"
#include "Point.h"
#include <vector>

class Polygon : public Shape {
protected:
    std::vector<Point> vertices;

public:
    Polygon(const std::vector<Point>& vertices);
    double area() override;
    double perimeter() override;
    void draw() override;
    virtual bool isSelfIntersecting();
};

#endif
