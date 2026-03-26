#ifndef SHAPEMANAGER_H
#define SHAPEMANAGER_H

#include "Shape.h"
#include <vector>
using namespace std;

// Classe de gestion de formes géométriques avec vector (plus moderne)
class ShapeManager {
private:
    vector<Shape*> shapes;
    int capacite;

public:
    // Constructeur
    ShapeManager(int cap);

    // Destructeur
    ~ShapeManager();

    // Ajoute une forme à la prochaine position
    void addShape(Shape* shape);

    // Ajoute une forme à un index spécifique
    void addShape(Shape* shape, int index);

    // Affiche toutes les formes
    void displayAllShapes();

    // Calcule l'aire totale de toutes les formes
    double getTotalArea();

    // Calcule le périmètre total de toutes les formes
    double getTotalPerimeter();

    // Compte le nombre de formes d'un type donné
    int countByType(string type);

    // Compte le nombre de polygones
    int countPolygons();

    // Getters
    int getCapacity();
    int getShapeCount();
};

#endif
