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
    priority_queue <Avion*> getCola();
    
private:
    priority_queue <Avion*> cola; //declaracion cola de prioridad
};

#endif /* COLAAVIONES_H */

