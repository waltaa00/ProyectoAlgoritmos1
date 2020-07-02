/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OrigenDestinoBusiness.cpp
 * Author: yareth
 * 
 * Created on 18 de junio de 2020, 07:27 PM
 */

#include "OrigenDestinoBusiness.h"
using namespace std;

OrigenDestinoDataSingleton* OrigenDestinoBusiness::getSingleton() const {
    return singleton;
}

void OrigenDestinoBusiness::guardarOrigenDestino(string origen, string destino) {
    this->singleton->guardarOrigenDestino(origen, destino);
}

vector<string> OrigenDestinoBusiness::recuperarOrigenDestino() {
    return this->singleton->recuperarOrigenDestino();
}

void OrigenDestinoBusiness::guardarUsuario(string nombre, string contrasena) {
    this->singleton->guardarUsuario(nombre,contrasena);
}

vector<string> OrigenDestinoBusiness::recuperarUsuario() {
     return this->singleton->recuperarUsuario();
}

OrigenDestinoBusiness::OrigenDestinoBusiness() {
    this->singleton = OrigenDestinoDataSingleton::GetInstance();
}

