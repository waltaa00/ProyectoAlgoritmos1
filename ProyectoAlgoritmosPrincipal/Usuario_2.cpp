


#include "Usuario_2.h"

Usuario::Usuario(string nombre, string edad, string pasaporte, string genero, string nacionalidad, string contrasenia) {
    this->nombre = nombre;
    this->edad = edad;
    this->pasaporte = pasaporte;
    this->genero = genero;
    this->nacionalidad = nacionalidad;
    this->contrasenia= contrasenia;
}

Usuario::~Usuario() {



}

std::string Usuario::getNombre() {
    return nombre;

}

void Usuario::setNombre(string nombre) {
    nombre = nombre;

}

std::string Usuario::getEdad() {
    return edad;

}

void Usuario::setEdad(string edad) {
    edad = edad;

}

std::string Usuario::getPasaporte() {
    return pasaporte;

}

void Usuario::setPasaporte(string pasaporte) {
    pasaporte = pasaporte;

}

std::string Usuario::getGenero() {
    return genero;

}

void Usuario::setGenero(string genero) {
    genero = genero;

}

std::string Usuario::getNacionalidad() {
    return nacionalidad;

}

void Usuario::setNacionalidad(string nacionalidad) {
    nacionalidad = nacionalidad;

}


std::string Usuario::getContrasenia() {
    return contrasenia;

}

void Usuario::setContrasenia(string contrasenia) {
    contrasenia= contrasenia;

}

std::string Usuario::toString() {
    stringstream result;

    result <<

            "\nNombre del Usuario: " << nombre
            << "\nEdad: " << edad
            << "\nPasaporte: " << pasaporte
            << "\nGenero: " << genero
            << "\nNaciolidad: " << nacionalidad
            << "\nContraseña: " << contrasenia;
    return result.str();

}

