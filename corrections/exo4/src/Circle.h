#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

// Cercle : forme non-polygonale
class Circle : public Shape {
private:
    double rayon;

public:
    Circle(double r);
    double getRayon();

    // Implémentation des méthodes abstraites
    double aire() override;
    double perimetre() override;
    void afficheInfo() override;
    string getType() override;
};

#endif
