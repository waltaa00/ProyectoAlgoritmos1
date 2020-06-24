

#include "Avion.h"

Avion::Avion(string nombre, string cantidad, string destino, string origen, string horaSalida, string horaLlegada) {
    this->nombre = nombre;
    this->cantidad = cantidad;
    this->destino = destino;
    this->origen = origen;
    this->horaLlegada = horaLlegada;
    this->horaSalida = horaSalida;
}

Avion::~Avion() {
}

string Avion::getCantidad() {
    return cantidad;

}

void Avion::setCantidad(string cantidad) {
    this->cantidad = cantidad;

}

void Avion::setNombre(string nombre) {

    this->nombre = nombre;
}

string Avion::getNombre() {
    return nombre;

}

std::string Avion::getDestino() {
    return destino;

}

void Avion::setDestino(string destino) {
    destino = destino;

}

std::string Avion::getOrigen() {
    return origen;

}

void Avion::setOrigen(string origen) {
    origen = origen;

}

std::string Avion::getHoraLlegada() {
    return horaLlegada;

}

void Avion::setHoraLlegada(string horaLlegada) {
    horaLlegada = horaLlegada;

}

std::string Avion::getHoraSalida() {
    return horaSalida;

}

void Avion::setHoraSalida(string horaSalida) {
    horaSalida = horaSalida;

}

std::string Avion::toString() {
   stringstream result;

    result <<

            "\nNombre de avion: " << nombre
            <<"\nCantidad de pasajeros " << cantidad
    <<"\nDestino: " << destino
            << "\nOrigen: " << origen
            << "\nHora de salida: " << horaSalida
            <<"\nHora de llegada " <<horaLlegada;



    return result.str();

}

