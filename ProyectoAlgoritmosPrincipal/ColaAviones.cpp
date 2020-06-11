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
    //Avion(string nombre, string cantidad,string destino, string origen, string horaSalida, string horaLlegada);
    cola.push(new Avion("Boing757", "350 pasajeros", "Bangladesh", "Costa Rica", "8:40", "15:25"));
    cola.push(new Avion("Boing567", "220 pasajeros", "USA", "Panama", "13:11", "9:10"));
    cola.push(new Avion("AirForce1", "420 pasajeros", "Jamaica", "Colombia", "23:00", "4:20"));
    //cola.push("Hora llegada");
    //cola.push("Aerolinea");
}

ColaAviones::ColaAviones(const ColaAviones& orig) {
}

ColaAviones::~ColaAviones() {
}

priority_queue <Avion*> ColaAviones::getCola() {
    return cola;
}


