#include "Vehicule.h"

// Constructeur initialisant max_speed à 240 et mileage à 0
Vehicule::Vehicule() {
    max_speed = 240;
    mileage = 0;
}

// Setter pour max_speed avec validation
void Vehicule::setmax_speed(int speed) {
    if (speed > 0 && speed <= 200) {
        max_speed = speed;
    } else {
        max_speed = 240;
    }
}

// Getter pour max_speed
int Vehicule::getmax_speed() {
    return max_speed;
}

// Setter pour mileage avec validation
void Vehicule::setmileage(int m) {
    if (m >= 0) {
        mileage = m;
    } else {
        mileage = 0;
    }
}

// Getter pour mileage
int Vehicule::getmileage() {
    return mileage;
}
