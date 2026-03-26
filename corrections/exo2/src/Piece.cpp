#include "Piece.h"

// Constructeur
Piece::Piece(int nb_w, string c) {
    this->nb_windows = nb_w;
    this->color = c;
}

// Getter pour nb_windows
int Piece::getNbWindows() {
    return this->nb_windows;
}

// Setter pour nb_windows
void Piece::setNbWindows(int nb_w) {
    this->nb_windows = nb_w;
}

// Getter pour color
string Piece::getColor() {
    return this->color;
}

// Setter pour color
void Piece::setColor(string c) {
    this->color = c;
}
