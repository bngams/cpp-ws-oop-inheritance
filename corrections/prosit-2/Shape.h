#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual ~Shape() = default;
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual void draw() = 0;
};

#endif
