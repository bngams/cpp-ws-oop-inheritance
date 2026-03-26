#include "Bus.h"
#include <iostream>
using namespace std;

// Constructeur initialisant seat_capacity à 10
Bus::Bus() : Vehicule() {
    seat_capacity = 10;
}

// Getter pour seat_capacity
int Bus::getseating_capacity() {
    return seat_capacity;
}

// Setter pour seat_capacity avec validation
void Bus::setseating_capacity(int capacity) {
    if (capacity >= 10 && capacity <= 50) {
        seat_capacity = capacity;
    } else {
        seat_capacity = 50;
    }
}

// Méthode pour afficher les informations du bus
void Bus::get_info() {
    cout << "Il s'agit d'un bus d'une capacité de " << seat_capacity
         << " places, avec une vitesse maximale de " << getmax_speed()
         << " kmh et son kilométrage est de " << getmileage() << " km." << endl;
}
