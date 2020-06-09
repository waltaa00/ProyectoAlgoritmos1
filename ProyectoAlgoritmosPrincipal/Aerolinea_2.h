

#ifndef AEROLINEA_H
#define AEROLINEA_H

#include <string>
#include<sstream>
#include "iostream"


using namespace std;

class Aerolinea {
public:



    Aerolinea(string nombre);
    ~Aerolinea();
    string toString();
    string getNombre();
    void setNombre(string nombre);




private:
    string nombre;





};

#endif /* AEROLINEA_H */

