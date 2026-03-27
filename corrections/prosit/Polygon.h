#ifndef POLYGON_H
#define POLYGON_H

#include "Shape.h"

class Polygon : public Shape {
public:
    virtual ~Polygon() = default;
    virtual bool isSelfIntersecting() = 0;
};

#endif
