/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PaisesDelGrafo.cpp
 * Author: mint
 * 
 * Created on June 22, 2020, 7:33 PM
 */

#include "PaisesDelGrafo.h"

PaisesDelGrafo::PaisesDelGrafo() {
    
    //Anadir los nodos
    this->grafo->AnadirNodo("USA");
    this->grafo->AnadirNodo("Costa Rica");
    this->grafo->AnadirNodo("Nicaragua");
    this->grafo->AnadirNodo("Panama");
    this->grafo->AnadirNodo("Bangladesh");
    this->grafo->AnadirNodo("Guatemala");
    this->grafo->AnadirNodo("Jamaica");
    this->grafo->AnadirNodo("Colombia");
    this->grafo->AnadirNodo("Brasil");
    this->grafo->AnadirNodo("India");
    this->grafo->AnadirNodo("Canada");
    this->grafo->AnadirNodo("Paraguay");
    this->grafo->AnadirNodo("Uruguay");
    this->grafo->AnadirNodo("Venezuela");
    this->grafo->AnadirNodo("Grecia");
    this->grafo->AnadirNodo("Francia");
    this->grafo->AnadirNodo("India");
    this->grafo->AnadirNodo("Mexico");
    
    //Anadir las Aristas
    //this->grafo->AnadirArco();
    
}

PaisesDelGrafo::PaisesDelGrafo(const PaisesDelGrafo& orig) {
}

PaisesDelGrafo::~PaisesDelGrafo() {
}

