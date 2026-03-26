#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double l, double lg) : Polygon(4) {
    this->largeur = l;
    this->longueur = lg;
}

double Rectangle::getLargeur() {
    return this->largeur;
}

double Rectangle::getLongueur() {
    return this->longueur;
}

double Rectangle::aire() {
    return this->largeur * this->longueur;
}

double Rectangle::perimetre() {
    return 2 * (this->largeur + this->longueur);
}

void Rectangle::afficheInfo() {
    cout << "=== Rectangle ===" << endl;
    cout << "Largeur: " << this->largeur << endl;
    cout << "Longueur: " << this->longueur << endl;
    cout << "Nombre de côtés: " << this->nb_cotes << endl;
    cout << "Aire: " << this->aire() << endl;
    cout << "Périmètre: " << this->perimetre() << endl;
}

string Rectangle::getType() {
    return "Rectangle";
}
