
#include "Aerolinea.h"

Aerolinea::Aerolinea(string nombre) {
    this->nombre= nombre;
}


Aerolinea::~Aerolinea() {
}

std:: string Aerolinea::getNombre(){
    return nombre;
    
}




void Aerolinea::setNombre(string nombre){
    nombre= nombre;

}

std::string Aerolinea::toString(){
  stringstream result;

    result << 
             "Nombre aerolinea: "<<nombre;
 
    return result.str();
    
}


