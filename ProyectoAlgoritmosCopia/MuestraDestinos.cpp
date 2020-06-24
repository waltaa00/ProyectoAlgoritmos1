/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MuestraDestinos.cpp
 * Author: yareth
 * 
 * Created on 15 de junio de 2020, 06:26 PM
 */

#include "MuestraDestinos.h"

MuestraDestinos::MuestraDestinos() {
    this->set_title("Muestra Destinos");
    this->panelDibujo.show_all();
    this->add(panelDibujo);
}

MuestraDestinos::~MuestraDestinos() {
}

