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
    this->archivo<< usuario->getContrasenia()<< "\n" ;
    
    this->archivo.close();

}
