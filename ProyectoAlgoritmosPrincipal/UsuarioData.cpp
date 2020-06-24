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

UsuarioData::UsuarioData()  {

}


UsuarioData::~UsuarioData() {
}

void UsuarioData::registrarUsuarios(Usuario *usuario){
    //string nombre, string edad, string pasaporte, string genero,  string nacionalidad, string contrasenia
    this->archivo.open("usuarios.txt", ios::app);
    this->archivo<< usuario->getNombre() << "," ;
    this->archivo<< usuario->getEdad() << "," ;
    this->archivo<< usuario->getPasaporte() << "," ;
    this->archivo<< usuario->getGenero() << "," ;
    this->archivo<< usuario->getNacionalidad() << "," ;
    this->archivo<< usuario->getContrasenia() << "\n" ;
    
    this->archivo.close();

}
vector<Usuario>  UsuarioData::obtenerUsuarios(){
    ifstream archivo;
    string contenidoLinea; // igualar readLine en c++
    //string[] linea = NULL;
    //string linea[5];;
    archivo.open("usuarios.txt", ios::in); // abriendo el archivo en modo lectura
    
    while(!archivo.eof()){ // mientras no sea el final del archivo
        //linea= contenidoLinea; // hace falta hacerle el split
        //this->vectorUsuarios->push_back(new Usuario(linea[0],linea[1], linea[2], linea[3], linea[5], linea[5]));
        //contenidoLinea= // igualar readLine en c++
    
    
    }
    
    return vectorUsuarios;
    
    archivo.close(); // cerramos el archivo


}
