#ifndef POLYGON_H
#define POLYGON_H

#include "Shape.h"

// Classe abstraite pour les polygones
class Polygon : public Shape {
protected:
    int nb_cotes;

public:
    Polygon(int cotes);
    int getNbCotes();
    string getType() override;
};

#endif
