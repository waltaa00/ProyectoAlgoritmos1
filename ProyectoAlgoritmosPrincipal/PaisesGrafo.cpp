/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PaisesGrafo.cpp
 * Author: mint
 * 
 * Created on June 23, 2020, 5:42 PM
 */

#include "PaisesGrafo.h"

PaisesGrafo::PaisesGrafo() {
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
      //Vuelos de Emirates
    this->grafo->AnadirArco("Bangladesh","Costa Rica");
    this->grafo->AnadirArco("USA","Panama");
    this->grafo->AnadirArco("Guatemala","Panama");
    this->grafo->AnadirArco("Jamaica","Colombia");
    
      //Vuelos de Copa
    this->grafo->AnadirArco("USA","Panama");
    this->grafo->AnadirArco("India","Canada");
    this->grafo->AnadirArco("India","Canada");
    this->grafo->AnadirArco("Costa Rica","USA");
    this->grafo->AnadirArco("Uruguay","Brasil");
    this->grafo->AnadirArco("Jamaica","Colombia");
    this->grafo->AnadirArco("Costa Rica","Brasil");
    
      //Vuelos de Avianca
    this->grafo->AnadirArco("Nicaragua","Paraguay");
    this->grafo->AnadirArco("USA","Colombia");
    this->grafo->AnadirArco("USA","Costa Rica");
    this->grafo->AnadirArco("Panama","Colombia");
    this->grafo->AnadirArco("Costa Rica","Venezuela");
    this->grafo->AnadirArco("Gracia","Francia");
}

PaisesGrafo::PaisesGrafo(const PaisesGrafo& orig) {
}

PaisesGrafo::~PaisesGrafo() {
}

