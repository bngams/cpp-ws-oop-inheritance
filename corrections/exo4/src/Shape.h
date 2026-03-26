#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using namespace std;

// Classe abstraite de base pour toutes les formes géométriques
class Shape {
public:
    // Méthodes virtuelles pures
    virtual double aire() = 0;
    virtual double perimetre() = 0;
    virtual void afficheInfo() = 0;
    virtual string getType() = 0;

    // Destructeur virtuel
    virtual ~Shape() {}
};

#endif
