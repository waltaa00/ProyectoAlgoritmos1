/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PaisesGrafo.h
 * Author: mint
 *
 * Created on June 23, 2020, 5:42 PM
 */
#include "GrafoViajes.h"

#ifndef PAISESGRAFO_H
#define PAISESGRAFO_H

class PaisesGrafo {
public:
    PaisesGrafo();
    PaisesGrafo(const PaisesGrafo& orig);
    virtual ~PaisesGrafo();
private:
    GrafoViajes* grafo;

};

#endif /* PAISESGRAFO_H */

