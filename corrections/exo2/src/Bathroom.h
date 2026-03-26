#ifndef BATHROOM_H
#define BATHROOM_H

#include "Piece.h"

class Bathroom : public Piece {
private:
    bool has_shower;

public:
    // Constructeur
    Bathroom(int nb_w, string c, bool shower);

    // Getters et Setters
    bool hasShower();
    void setShower(bool shower);
};

#endif
