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

//#include <glib-2.0/glib/gmacros.h>

#include "UsuarioData.h"
using namespace std;

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

    cout << vectorUsuarios.size() << endl;
    archivo.close(); // cerramos el archivo
    cout << "archivo cerrado" << endl;

    return vectorUsuarios;
}

string UsuarioData::leerUsuarios() {

    cout << "Leyendo el archivo" << endl;
    ifstream archivo;
    string texto;
    string informe;

    archivo.open("usuarios.txt", ios::out | ios::in); // abriendo el archivo en modo lectura

    while (!archivo.eof()) { // mientras no sea el final del archivo
        getline(archivo, texto);
        informe += texto;
        informe += "\n";
        //cout<<texto<<endl;
    }
    //cout<<informe<<endl;
    return informe;

    archivo.close();

}

bool UsuarioData::buscarUsuario(string nombre, string contrasenia) {
    //cout<<this->obtenerUsuarios().size()<<endl;
    this->obtenerUsuarios();
    for (int i = 0; i < this->vectorUsuarios.size(); i++) {
        if (this->vectorUsuarios.at(i).getNombre() == nombre
                && this->vectorUsuarios.at(i).getContrasenia() == contrasenia) {
            return true;
        }
    }
    return false;

}

string UsuarioData::buscarNacionalidad(string nombre, string contrasenia) {
    this->obtenerUsuarios();
    for (int i = 0; i < this->vectorUsuarios.size(); i++) {
        if (this->vectorUsuarios.at(i).getNombre() == nombre
                && this->vectorUsuarios.at(i).getContrasenia() == contrasenia) {
            cout << this->vectorUsuarios.at(i).getNacionalidad() << endl;
            return this->vectorUsuarios.at(i).getNacionalidad();
        }

    }
    return "Nacionalidad no encontrada";


}
