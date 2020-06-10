/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ColaAviones.cpp
 * Author: mint
 * 
 * Created on June 9, 2020, 9:32 PM
 */

#include "ColaAviones.h"

ColaAviones::ColaAviones() {
    cola.push("Hora salida");
    cola.push("Hora llegada");
    cola.push("Aerolinea");
}

ColaAviones::ColaAviones(const ColaAviones& orig) {
}

ColaAviones::~ColaAviones() {
}

priority_queue <string> ColaAviones::getCola() {
    return cola;
}


