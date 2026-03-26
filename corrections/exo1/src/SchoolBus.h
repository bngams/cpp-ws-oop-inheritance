#ifndef SCHOOLBUS_H
#define SCHOOLBUS_H

#include "Bus.h"
#include <string>
using namespace std;

class SchoolBus : public Bus {
private:
    string school_name;

public:
    // Constructeur
    SchoolBus(string sn);

    // Getter pour school_name
    string getSchoolName();

    // Setter pour school_name
    void setSchoolName(string sn);

    // Méthode statique pour compter les bus avec capacité > 40
    static int countbigbus(SchoolBus t[], int size);
};

#endif
