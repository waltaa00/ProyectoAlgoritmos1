/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ColaAviones.h
 * Author: mint
 *
 * Created on June 9, 2020, 9:32 PM
 */

#ifndef COLAAVIONES_H
#define COLAAVIONES_H
#include <queue>

#include "Avion_2.h"

class ColaAviones {
public:
    ColaAviones();
    ColaAviones(const ColaAviones& orig);
    virtual ~ColaAviones();
    priority_queue <Avion*> getColaEmirates();
    priority_queue <Avion*> getColaCopa();
    priority_queue <Avion*> getColaAvianca();
    priority_queue <Avion*> getColaVolaris();
    priority_queue <Avion*> getColaJetblue();
    
    //Avion(string nombre, string cantidad,string destino, string origen, string horaSalida, string horaLlegada);
    void pushAvianca(string nombre, string cantidad,string destino, string origen, string horaSalida, string horaLlegada);
    
private:
    priority_queue <Avion*> colaEmirates; //declaracion cola de prioridad
    priority_queue <Avion*> colaCopa;
    priority_queue <Avion*> colaAvianca;
    priority_queue <Avion*> colaVolaris;
    priority_queue <Avion*> colaJetblue;
};

#endif /* COLAAVIONES_H */

