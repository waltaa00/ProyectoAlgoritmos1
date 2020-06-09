

#include "Itinerario.h"

Itinerario::Itinerario(Aerolinea* aerolinea, Avion* avion) {
    this->aerolinea= aerolinea;
    this->avion= avion;
}



Itinerario::~Itinerario() {
}

Aerolinea* Itinerario::getAerolinea() {
    return aerolinea;

}

void Itinerario::setAerolinea(Aerolinea* aerolinea) {
    this->aerolinea= aerolinea;

}

void Itinerario::setAvion(Avion* avion){
    this->avion= avion;

 
}

Avion* Itinerario::getAvion() {
    return avion;

}

//std:: string Itinerario::toString(){
// 
//
//    return Aerolinea::toString() + Avion::toString();
//
//
//
//}

