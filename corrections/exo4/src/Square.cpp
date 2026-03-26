#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(double c) : Polygon(4) {
    this->cote = c;
}

double Square::getCote() {
    return this->cote;
}

double Square::aire() {
    return this->cote * this->cote;
}

double Square::perimetre() {
    return 4 * this->cote;
}

void Square::afficheInfo() {
    cout << "=== Carré ===" << endl;
    cout << "Côté: " << this->cote << endl;
    cout << "Nombre de côtés: " << this->nb_cotes << endl;
    cout << "Aire: " << this->aire() << endl;
    cout << "Périmètre: " << this->perimetre() << endl;
}

string Square::getType() {
    return "Square";
}
