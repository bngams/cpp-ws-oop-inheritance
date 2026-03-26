#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygon.h"

class Rectangle : public Polygon {
protected:
    double largeur;
    double longueur;

public:
    Rectangle(double l, double lg);

    double getLargeur();
    double getLongueur();

    // Implémentation des méthodes abstraites
    double aire() override;
    double perimetre() override;
    void afficheInfo() override;
    string getType() override;
};

#endif
