/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UsuarioBusiness.cpp
 * Author: diego
 * 
 * Created on 22 de junio de 2020, 06:28 PM
 */

#include "UsuarioBusiness.h"

UsuarioBusiness::UsuarioBusiness() {
}

UsuarioBusiness::~UsuarioBusiness() {
}

void UsuarioBusiness::registrarUsuario(Usuario *usuario) {
    this->usuarioData.registrarUsuarios(usuario);
}//registrarMapa

vector<Usuario> UsuarioBusiness::obtenerUsuario() {
    return this->usuarioData.obtenerUsuarios();
}

bool UsuarioBusiness::buscarUsuario(string nombre, string contrasenia){
    return this->usuarioData.buscarUsuario(nombre, contrasenia);
}

string UsuarioBusiness::buscarNacionalidad(string nombre, string contrasenia){
    return this->usuarioData.buscarNacionalidad(nombre, contrasenia);
}

