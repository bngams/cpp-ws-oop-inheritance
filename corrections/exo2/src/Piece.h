#ifndef PIECE_H
#define PIECE_H

#include <string>
using namespace std;

class Piece {
private:
    int nb_windows;
    string color;

public:
    // Constructeur
    Piece(int nb_w, string c);

    // Getters et Setters
    int getNbWindows();
    void setNbWindows(int nb_w);
    string getColor();
    void setColor(string c);

    // Destructeur virtuel pour permettre le polymorphisme
    virtual ~Piece() {}
};

#endif
