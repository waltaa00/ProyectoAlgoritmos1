/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MostrarItinerario.cpp
 * Author: yareth
 * 
 * Created on 8 de junio de 2020, 06:25 PM
 */


#include "MostrarItinerario.h"

MostrarItinerario::MostrarItinerario() {
    this->set_title("Itinerarios");
    this->set_size_request(400, 400);
    initComponents();
    this->show_all_children();
}

void MostrarItinerario::initComponents() {
    //this->tabla.insert_row(1);
    //this->tabla.insert_row(2);
    //this->tabla.insert_column(1);
    //this->tabla.insert_column(2);
    this->label.set_text("Hola");
    this->label2.set_text("Mundo");
    this->tabla.attach(this->label,1,1,1,1);
    this->tabla.attach(this->label2,2,3,1,1);
    this->tabla.set_visible(true);
    this->fixed.put(this->tabla,10,10);
    add(this->fixed);
}

MostrarItinerario::~MostrarItinerario() {
}

