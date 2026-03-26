#include "SchoolBus.h"

// Constructeur
SchoolBus::SchoolBus(string sn) : Bus() {
    school_name = sn;
}

// Getter pour school_name
string SchoolBus::getSchoolName() {
    return school_name;
}

// Setter pour school_name
void SchoolBus::setSchoolName(string sn) {
    school_name = sn;
}

// Méthode statique pour compter les SchoolBus avec capacité > 40
int SchoolBus::countbigbus(SchoolBus t[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (t[i].getseating_capacity() > 40) {
            count++;
        }
    }
    return count;
}
