#ifndef SQUARE_H
#define SQUARE_H

#include "Polygon.h"

// Carré : cas particulier de polygone (peut aussi hériter de Rectangle)
class Square : public Polygon {
private:
    double cote;

public:
    Square(double c);

    double getCote();

    // Implémentation des méthodes abstraites
    double aire() override;
    double perimetre() override;
    void afficheInfo() override;
    string getType() override;
};

#endif
