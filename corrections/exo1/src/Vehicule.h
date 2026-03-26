#ifndef VEHICULE_H
#define VEHICULE_H

class Vehicule {
private:
    int max_speed;
    int mileage;

public:
    // Constructeur
    Vehicule();

    // Getters et Setters pour max_speed
    void setmax_speed(int speed);
    int getmax_speed();

    // Getters et Setters pour mileage
    void setmileage(int m);
    int getmileage();
};

#endif
