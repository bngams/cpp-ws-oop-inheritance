#include <iostream>
#include "Vehicule.h"
#include "Bus.h"
#include "SchoolBus.h"
using namespace std;

int main() {
    // Test de la classe Vehicule
    cout << "=== Test Vehicule ===" << endl;
    Vehicule v1;
    cout << "Vehicule - Max speed: " << v1.getmax_speed() << " km/h" << endl;
    cout << "Vehicule - Mileage: " << v1.getmileage() << " km" << endl;

    v1.setmax_speed(180);
    v1.setmileage(50000);
    cout << "Après modification:" << endl;
    cout << "Max speed: " << v1.getmax_speed() << " km/h" << endl;
    cout << "Mileage: " << v1.getmileage() << " km" << endl;

    // Test de la classe Bus
    cout << "\n=== Test Bus ===" << endl;
    Bus b1;
    b1.setmax_speed(120);
    b1.setmileage(200000);
    b1.setseating_capacity(40);
    b1.get_info();

    // Test de la classe SchoolBus
    cout << "\n=== Test SchoolBus ===" << endl;
    SchoolBus sb1("École Primaire Jean Jaurès");
    sb1.setmax_speed(90);
    sb1.setmileage(150000);
    sb1.setseating_capacity(45);

    cout << "SchoolBus - École: " << sb1.getSchoolName() << endl;
    sb1.get_info();

    // Test de countbigbus
    cout << "\n=== Test countbigbus ===" << endl;
    SchoolBus buses[5] = {
        SchoolBus("École A"),
        SchoolBus("École B"),
        SchoolBus("École C"),
        SchoolBus("École D"),
        SchoolBus("École E")
    };

    buses[0].setseating_capacity(35);
    buses[1].setseating_capacity(45);
    buses[2].setseating_capacity(42);
    buses[3].setseating_capacity(30);
    buses[4].setseating_capacity(50);

    int bigBusCount = SchoolBus::countbigbus(buses, 5);
    cout << "Nombre de bus scolaires avec capacité > 40: " << bigBusCount << endl;

    return 0;
}
