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
      char linea[5000];
      char * contenidoLinea;

   
    archivo.open("usuarios.txt", ios::in); // abriendo el archivo en modo lectura
    
    while(!archivo.eof()){ // mientras no sea el final del archivo
        archivo.getline(linea, 5000);
        contenidoLinea = strtok(linea, ",");

        //contenidoLinea = archivo.getline(linea, 500);
 
       //this->vectorUsuarios.push_back(new Usuario(contenidoLinea.str_c(),contenidoLinea[1].c_str(),contenidoLinea[2].c_str(),contenidoLinea[3].c_str().contenidoLinea[4].c_str(),contenidoLinea[5].c_str()));
        cout<< contenidoLinea <<endl;
   
        

    }
    
    return vectorUsuarios;
    
    archivo.close(); // cerramos el archivo


}