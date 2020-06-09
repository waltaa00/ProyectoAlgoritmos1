

#include "Vuelo.h"

Vuelo::Vuelo(string destino, string origen, string horaSalida, string horaLlegada) {
    this->destino= destino;
    this->origen= origen;
    this->horaLlegada= horaLlegada;
    this->horaSalida= horaSalida;
}



Vuelo::~Vuelo() {
}

std:: string Vuelo::getDestino(){
    return destino;
    
}

void Vuelo::setDestino(string destino){
    destino= destino;

}

std:: string Vuelo::getOrigen(){
    return origen;
    
}

void Vuelo::setOrigen(string origen){
    origen= origen;

}

std:: string Vuelo::getHoraLlegada(){
    return horaLlegada;
    
}

void Vuelo::setHoraLlegada(string horaLlegada){
    horaLlegada= horaLlegada;

}


std:: string Vuelo::getHoraSalida(){
    return horaSalida;
    
}

void Vuelo::setHoraSalida(string horaSalida){
    horaSalida= horaSalida;

}

std::string Vuelo::toString(){
    std::string result;

    result = 
           
             +"\nNombre del Usuario: "+destino
             +"\nEdad: "+origen
             +"\nPasaporte: "+horaSalida
             +"\nGenero: "+horaLlegada;
           
    return result;
    
}



