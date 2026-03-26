#include "Polygon.h"

Polygon::Polygon(int cotes) {
    this->nb_cotes = cotes;
}

int Polygon::getNbCotes() {
    return this->nb_cotes;
}

string Polygon::getType() {
    return "Polygon";
}
