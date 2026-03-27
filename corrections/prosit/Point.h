#ifndef POINT_H
#define POINT_H

#include <cmath>

class Point {
private:
    double x;
    double y;

public:
    Point(double x, double y);
    double getX() const;
    double getY() const;
    double distanceTo(const Point& other) const;
};

#endif
