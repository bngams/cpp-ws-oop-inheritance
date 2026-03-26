#include "Circle.h"
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

Circle::Circle(double r) {
    this->rayon = r;
}

double Circle::getRayon() {
    return this->rayon;
}

double Circle::aire() {
    return PI * this->rayon * this->rayon;
}

double Circle::perimetre() {
    return 2 * PI * this->rayon;
}

void Circle::afficheInfo() {
    cout << "=== Cercle ===" << endl;
    cout << "Rayon: " << this->rayon << endl;
    cout << "Aire: " << this->aire() << endl;
    cout << "Périmètre: " << this->perimetre() << endl;
}

string Circle::getType() {
    return "Circle";
}
