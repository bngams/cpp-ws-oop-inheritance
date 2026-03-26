#include "ShapeManager.h"
#include "Polygon.h"
#include <iostream>
using namespace std;

ShapeManager::ShapeManager(int cap) {
    this->capacite = cap;
    this->shapes.reserve(cap);
}

ShapeManager::~ShapeManager() {
    // Libère toutes les formes stockées
    for (size_t i = 0; i < this->shapes.size(); i++) {
        if (this->shapes[i] != nullptr) {
            delete this->shapes[i];
        }
    }
    this->shapes.clear();
}

void ShapeManager::addShape(Shape* shape) {
    if ((int)this->shapes.size() < this->capacite) {
        this->shapes.push_back(shape);
        cout << "Forme ajoutée à la position " << this->shapes.size() - 1 << endl;
    } else {
        cout << "Erreur: La collection est pleine!" << endl;
    }
}

void ShapeManager::addShape(Shape* shape, int index) {
    if (index >= 0 && index < this->capacite) {
        // Assure que le vector a la bonne taille
        while ((int)this->shapes.size() <= index) {
            this->shapes.push_back(nullptr);
        }

        // Si une forme existe déjà à cet index, la supprimer
        if (this->shapes[index] != nullptr) {
            delete this->shapes[index];
        }

        this->shapes[index] = shape;
        cout << "Forme ajoutée à l'index " << index << endl;
    } else {
        cout << "Erreur: Index invalide!" << endl;
    }
}

void ShapeManager::displayAllShapes() {
    cout << "\n========================================" << endl;
    cout << "Affichage de toutes les formes" << endl;
    cout << "Nombre de formes: " << this->getShapeCount() << "/" << this->capacite << endl;
    cout << "========================================\n" << endl;

    for (size_t i = 0; i < this->shapes.size(); i++) {
        if (this->shapes[i] != nullptr) {
            cout << "Position " << i << " (" << this->shapes[i]->getType() << "):" << endl;
            this->shapes[i]->afficheInfo();
            cout << endl;
        }
    }
}

double ShapeManager::getTotalArea() {
    double total = 0;
    for (size_t i = 0; i < this->shapes.size(); i++) {
        if (this->shapes[i] != nullptr) {
            total += this->shapes[i]->aire();
        }
    }
    return total;
}

double ShapeManager::getTotalPerimeter() {
    double total = 0;
    for (size_t i = 0; i < this->shapes.size(); i++) {
        if (this->shapes[i] != nullptr) {
            total += this->shapes[i]->perimetre();
        }
    }
    return total;
}

int ShapeManager::countByType(string type) {
    int count = 0;
    for (size_t i = 0; i < this->shapes.size(); i++) {
        if (this->shapes[i] != nullptr && this->shapes[i]->getType() == type) {
            count++;
        }
    }
    return count;
}

int ShapeManager::countPolygons() {
    int count = 0;
    for (size_t i = 0; i < this->shapes.size(); i++) {
        // Utilise dynamic_cast pour vérifier si c'est un Polygon
        if (this->shapes[i] != nullptr && dynamic_cast<Polygon*>(this->shapes[i]) != nullptr) {
            count++;
        }
    }
    return count;
}

int ShapeManager::getCapacity() {
    return this->capacite;
}

int ShapeManager::getShapeCount() {
    int count = 0;
    for (size_t i = 0; i < this->shapes.size(); i++) {
        if (this->shapes[i] != nullptr) {
            count++;
        }
    }
    return count;
}
