#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Polygon.h"

// Triangle : nouveau type de polygone
class Triangle : public Polygon {
private:
    double cote_a;
    double cote_b;
    double cote_c;

public:
    Triangle(double a, double b, double c);

    // Implémentation des méthodes abstraites
    double aire() override;
    double perimetre() override;
    void afficheInfo() override;
    string getType() override;
};

#endif
