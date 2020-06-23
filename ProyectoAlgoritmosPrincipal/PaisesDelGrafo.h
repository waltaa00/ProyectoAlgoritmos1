/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PaisesDelGrafo.h
 * Author: mint
 *
 * Created on June 22, 2020, 7:33 PM
 */

#ifndef PAISESDELGRAFO_H
#define PAISESDELGRAFO_H

#include "GrafoViajes.h"


class PaisesDelGrafo {
public:
    PaisesDelGrafo();
    PaisesDelGrafo(const PaisesDelGrafo& orig);
    virtual ~PaisesDelGrafo();
private:
    GrafoViajes* grafo;

};

#endif /* PAISESDELGRAFO_H */

