#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
using namespace std;

int main() {
    cout << "=== Démonstration de la hiérarchie de formes géométriques ===" << endl;
    cout << endl;

    // Création de différentes formes
    Rectangle rect(5.0, 10.0);
    rect.afficheInfo();
    cout << endl;

    Square carre(7.0);
    carre.afficheInfo();
    cout << endl;

    Circle cercle(4.0);
    cercle.afficheInfo();
    cout << endl;

    Triangle triangle(3.0, 4.0, 5.0);
    triangle.afficheInfo();
    cout << endl;

    // Démonstration du polymorphisme avec un tableau de formes
    cout << "=== Polymorphisme : tableau de formes hétérogènes ===" << endl;
    cout << endl;

    Shape* formes[5];
    formes[0] = new Rectangle(3.0, 4.0);
    formes[1] = new Square(5.0);
    formes[2] = new Circle(3.0);
    formes[3] = new Triangle(6.0, 8.0, 10.0);
    formes[4] = new Rectangle(2.0, 8.0);

    double aire_totale = 0;
    double perimetre_total = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Forme " << i + 1 << " (" << formes[i]->getType() << "):" << endl;
        formes[i]->afficheInfo();
        aire_totale += formes[i]->aire();
        perimetre_total += formes[i]->perimetre();
        cout << endl;
    }

    cout << "=== Statistiques globales ===" << endl;
    cout << "Aire totale de toutes les formes: " << aire_totale << endl;
    cout << "Périmètre total de toutes les formes: " << perimetre_total << endl;

    // Libération de la mémoire
    for (int i = 0; i < 5; i++) {
        delete formes[i];
    }

    return 0;
}
