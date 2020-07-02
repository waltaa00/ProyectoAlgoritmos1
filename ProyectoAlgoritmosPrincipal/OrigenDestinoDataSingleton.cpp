/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OrigenDestinoDataSingleton.cpp
 * Author: yareth
 * 
 * Created on 18 de junio de 2020, 07:19 PM
 */

#include "OrigenDestinoDataSingleton.h"
#include <iostream>
OrigenDestinoDataSingleton* OrigenDestinoDataSingleton::GetInstance() {
    if (instance == 0) {
        instance = new OrigenDestinoDataSingleton();
    }
    return instance;
}

OrigenDestinoDataSingleton::OrigenDestinoDataSingleton() {

}

void OrigenDestinoDataSingleton::guardarOrigenDestino(string origen, string destino) {
    //origenDestino.clear();
    origenDestino.push_back(origen);
    origenDestino.push_back(destino);
}

vector<string> OrigenDestinoDataSingleton::recuperarOrigenDestino() {
    return origenDestino;
}

void OrigenDestinoDataSingleton::guardarUsuario(string nombre, string contrasena) {
    usuario.clear();
    usuario.push_back(nombre);
    usuario.push_back(contrasena);
}

vector<string> OrigenDestinoDataSingleton::recuperarUsuario() {
    return usuario;
}

OrigenDestinoDataSingleton* OrigenDestinoDataSingleton::instance = 0;
