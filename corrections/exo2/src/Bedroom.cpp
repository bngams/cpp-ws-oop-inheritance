#include "Bedroom.h"

// Constructeur
Bedroom::Bedroom(int nb_w, string c, int beds) : Piece(nb_w, c) {
    this->nb_beds = beds;
}

// Getter pour nb_beds
int Bedroom::getNbBeds() {
    return this->nb_beds;
}

// Setter pour nb_beds
void Bedroom::setNbBeds(int beds) {
    this->nb_beds = beds;
}
