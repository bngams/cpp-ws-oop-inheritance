#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle(double a, double b, double c) : Polygon(3) {
    this->cote_a = a;
    this->cote_b = b;
    this->cote_c = c;
}

double Triangle::perimetre() {
    return this->cote_a + this->cote_b + this->cote_c;
}

double Triangle::aire() {
    // Formule de Héron
    double s = this->perimetre() / 2;
    return sqrt(s * (s - this->cote_a) * (s - this->cote_b) * (s - this->cote_c));
}

void Triangle::afficheInfo() {
    cout << "=== Triangle ===" << endl;
    cout << "Côté A: " << this->cote_a << endl;
    cout << "Côté B: " << this->cote_b << endl;
    cout << "Côté C: " << this->cote_c << endl;
    cout << "Nombre de côtés: " << this->nb_cotes << endl;
    cout << "Aire: " << this->aire() << endl;
    cout << "Périmètre: " << this->perimetre() << endl;
}

string Triangle::getType() {
    return "Triangle";
}
