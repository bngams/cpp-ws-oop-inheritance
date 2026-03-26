#include <iostream>
#include "ShapeManager.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
using namespace std;

int main() {
    cout << "=== Test de la classe ShapeManager ===" << endl;
    cout << endl;

    // Création d'un gestionnaire pouvant stocker 10 formes
    ShapeManager manager(10);

    cout << "--- Ajout de formes sans spécifier l'index ---" << endl;

    // Ajout de différentes formes
    manager.addShape(new Rectangle(5.0, 10.0));
    manager.addShape(new Square(7.0));
    manager.addShape(new Circle(4.0));
    manager.addShape(new Triangle(3.0, 4.0, 5.0));
    manager.addShape(new Rectangle(3.0, 7.0));

    cout << endl;
    cout << "--- Ajout d'une forme à un index spécifique ---" << endl;

    // Ajout à l'index 8
    manager.addShape(new Circle(5.5), 8);

    // Affichage de toutes les formes
    manager.displayAllShapes();

    cout << "--- Statistiques de la collection ---" << endl;
    cout << "Nombre total de formes: " << manager.getShapeCount() << endl;
    cout << "Capacité maximale: " << manager.getCapacity() << endl;
    cout << "Aire totale: " << manager.getTotalArea() << endl;
    cout << "Périmètre total: " << manager.getTotalPerimeter() << endl;
    cout << endl;

    cout << "--- Comptage par type ---" << endl;
    cout << "Rectangles: " << manager.countByType("Rectangle") << endl;
    cout << "Carrés: " << manager.countByType("Square") << endl;
    cout << "Cercles: " << manager.countByType("Circle") << endl;
    cout << "Triangles: " << manager.countByType("Triangle") << endl;
    cout << "Total de polygones: " << manager.countPolygons() << endl;
    cout << endl;

    cout << "--- Remplacement d'une forme à l'index 1 ---" << endl;
    manager.addShape(new Triangle(5.0, 12.0, 13.0), 1);

    // Affichage après modification
    manager.displayAllShapes();

    cout << "--- Statistiques finales ---" << endl;
    cout << "Aire totale: " << manager.getTotalArea() << endl;
    cout << "Périmètre total: " << manager.getTotalPerimeter() << endl;

    return 0;
}
