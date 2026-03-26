#include "House.h"

// Constructeur - crée un tableau de pointeurs de pièces
House::House(int nb) {
    this->nb_pieces = nb;
    this->pieces = new Piece*[this->nb_pieces];

    // Initialisation à nullptr
    for (int i = 0; i < this->nb_pieces; i++) {
        this->pieces[i] = nullptr;
    }
}

// Destructeur - libère la mémoire allouée
House::~House() {
    for (int i = 0; i < this->nb_pieces; i++) {
        if (this->pieces[i] != nullptr) {
            delete this->pieces[i];
        }
    }
    delete[] this->pieces;
}

// Méthode pour ajouter une pièce
void House::addPiece(Piece* piece, int index) {
    if (index >= 0 && index < this->nb_pieces) {
        this->pieces[index] = piece;
    }
}

// Compte le nombre de salles de bain
int House::getNbOfBathroom() {
    int count = 0;
    for (int i = 0; i < this->nb_pieces; i++) {
        // Utilise dynamic_cast pour vérifier le type
        if (this->pieces[i] != nullptr && dynamic_cast<Bathroom*>(this->pieces[i]) != nullptr) {
            count++;
        }
    }
    return count;
}

// Compte le nombre de chambres
int House::getNbOfBedroom() {
    int count = 0;
    for (int i = 0; i < this->nb_pieces; i++) {
        // Utilise dynamic_cast pour vérifier le type
        if (this->pieces[i] != nullptr && dynamic_cast<Bedroom*>(this->pieces[i]) != nullptr) {
            count++;
        }
    }
    return count;
}
