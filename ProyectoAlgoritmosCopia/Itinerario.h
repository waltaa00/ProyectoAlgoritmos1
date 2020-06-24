

#ifndef ITINERARIO_H
#define ITINERARIO_H

#include <string>
#include<sstream>
#include "iostream"
#include "Avion.h"
#include "Aerolinea.h"
#include "Vuelo.h"




using namespace std;

class Itinerario {
public:
    Itinerario(Aerolinea* aerolinea, Avion* avion);



    ~Itinerario();
    void setAerolinea(Aerolinea* aerolinea);
    Aerolinea* getAerolinea();
    void setAvion(Avion* avion);
    Avion* getAvion();
      string toString();



private:
    Avion* avion;

    Aerolinea* aerolinea;

};

#endif /* ITINERARIO_H */

