/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UsuarioData.cpp
 * Author: diego
 * 
 * Created on 22 de junio de 2020, 05:22 PM
 */

#include "UsuarioData.h"

UsuarioData::UsuarioData() {

}

UsuarioData::~UsuarioData() {
}

void UsuarioData::registrarUsuarios(Usuario *usuario) {
    //string nombre, string edad, string pasaporte, string genero,  string nacionalidad, string contrasenia
    this->archivo.open("usuarios.txt", ios::app);
    this->archivo << usuario->getNombre() << ",";
    this->archivo << usuario->getEdad() << ",";
    this->archivo << usuario->getPasaporte() << ",";
    this->archivo << usuario->getGenero() << ",";
    this->archivo << usuario->getNacionalidad() << ",";
    this->archivo << usuario->getContrasenia() << endl;
    this->archivo.close();

}

vector<Usuario> UsuarioData::obtenerUsuarios() {
    ifstream archivo;
    string lineaz;
    archivo.open("usuarios.txt", ios::out | ios::in); // abriendo el archivo en modo lectura

    while (!archivo.eof()) { // mientras no sea el final del archivo
        archivo>>lineaz;
        stringstream lineaSplit(lineaz);
        string parte;
        vector<string> contenidoLinea;
        while (getline(lineaSplit, parte, ',')) {
            contenidoLinea.push_back(parte);
        }

        Usuario u(contenidoLinea[0], contenidoLinea[1], contenidoLinea[2],
                contenidoLinea[3], contenidoLinea[4], contenidoLinea[5]);
        bool rep = false;
        for (int i = 0; i < vectorUsuarios.size(); i++) {
            if (vectorUsuarios.at(i).getPasaporte() == u.getPasaporte()) {
                rep = true;
                break;
            }
        }
        if (!rep) {
            vectorUsuarios.push_back(u);
        }
    }
    archivo.close(); // cerramos el archivo
    cout << vectorUsuarios.size() << endl;
    return vectorUsuarios;
}