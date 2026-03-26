#ifndef BEDROOM_H
#define BEDROOM_H

#include "Piece.h"

class Bedroom : public Piece {
private:
    int nb_beds;

public:
    // Constructeur
    Bedroom(int nb_w, string c, int beds);

    // Getters et Setters
    int getNbBeds();
    void setNbBeds(int beds);
};

#endif
