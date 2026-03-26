#ifndef BUS_H
#define BUS_H

#include "Vehicule.h"

class Bus : public Vehicule {
private:
    int seat_capacity;

public:
    // Constructeur
    Bus();

    // Getters et Setters pour seat_capacity
    int getseating_capacity();
    void setseating_capacity(int capacity);

    // Méthode pour afficher les informations du bus
    void get_info();
};

#endif
