#ifndef HOUSE_H
#define HOUSE_H

#include "Piece.h"
#include "Bathroom.h"
#include "Bedroom.h"

class House {
private:
    Piece** pieces;  // Tableau dynamique de pointeurs vers des Pieces
    int nb_pieces;

public:
    // Constructeur
    House(int nb);

    // Destructeur
    ~House();

    // Méthodes pour compter les types de pièces
    int getNbOfBathroom();
    int getNbOfBedroom();

    // Méthode pour ajouter une pièce
    void addPiece(Piece* piece, int index);
};

#endif
