#include "Bathroom.h"

// Constructeur
Bathroom::Bathroom(int nb_w, string c, bool shower) : Piece(nb_w, c) {
    this->has_shower = shower;
}

// Getter pour has_shower
bool Bathroom::hasShower() {
    return this->has_shower;
}

// Setter pour has_shower
void Bathroom::setShower(bool shower) {
    this->has_shower = shower;
}
