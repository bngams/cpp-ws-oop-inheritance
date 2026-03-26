#include "Vehicule.h"

// Constructeur initialisant max_speed à 240 et mileage à 0
Vehicule::Vehicule() {
    this->max_speed = 240;
    this->mileage = 0;
}

// Setter pour max_speed avec validation
void Vehicule::setmax_speed(int speed) {
    if (speed > 0 && speed <= 200) {
        this->max_speed = speed;
    } else {
        this->max_speed = 240;
    }
}

// Getter pour max_speed
int Vehicule::getmax_speed() {
    return this->max_speed;
}

// Setter pour mileage avec validation
void Vehicule::setmileage(int m) {
    if (m >= 0) {
        this->mileage = m;
    } else {
        this->mileage = 0;
    }
}

// Getter pour mileage
int Vehicule::getmileage() {
    return this->mileage;
}
