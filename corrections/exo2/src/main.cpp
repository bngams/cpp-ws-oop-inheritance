#include <iostream>
#include "House.h"
using namespace std;

int main() {
    // Création d'une maison avec 5 pièces
    House myHouse(5);

    // Ajout de différentes pièces
    myHouse.addPiece(new Bedroom(2, "Bleu", 2), 0);      // Chambre avec 2 fenêtres, bleue, 2 lits
    myHouse.addPiece(new Bedroom(1, "Rose", 1), 1);      // Chambre avec 1 fenêtre, rose, 1 lit
    myHouse.addPiece(new Bathroom(1, "Blanc", true), 2); // Salle de bain avec douche
    myHouse.addPiece(new Bathroom(0, "Gris", false), 3); // Toilettes sans douche
    myHouse.addPiece(new Bedroom(3, "Vert", 2), 4);      // Chambre parentale

    // Affichage des statistiques
    cout << "=== Statistiques de la maison ===" << endl;
    cout << "Nombre de chambres: " << myHouse.getNbOfBedroom() << endl;
    cout << "Nombre de salles de bain: " << myHouse.getNbOfBathroom() << endl;

    return 0;
}
