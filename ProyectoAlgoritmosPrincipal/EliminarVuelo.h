/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EliminarVuelo.h
 * Author: mint
 *
 * Created on June 29, 2020, 6:36 PM
 */

#ifndef ELIMINARVUELO_H
#define ELIMINARVUELO_H

#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/messagedialog.h>
#include <gtkmm-3.0/gtkmm/label.h>
#include <gtkmm-3.0/gtkmm/entry.h>
#include <gtkmm-3.0/gtkmm/fixed.h>
#include <string.h>
#include <queue>

#include "ColaAviones.h"

using namespace std;

class EliminarVuelo : public Gtk::Window{
public:
    EliminarVuelo();
    EliminarVuelo(const EliminarVuelo& orig);
    virtual ~EliminarVuelo();
private:
    void initComponents();

    void onButtonClickedAceptar();
    
    //Avion(string nombre, string cantidad,string destino, string origen, string horaSalida, string horaLlegada);
    Gtk::Fixed fixed;
    Gtk::Button btnAceptar;
    Gtk::Entry etInfo,etAerolinea, etNombreAvion;
    Gtk::Label lblInfo,lblAerolinea, lblNombreAvion;
    
    ColaAviones *colaAviones;
    priority_queue <Avion*> colaEmirates; //declaracion cola de prioridad
    priority_queue <Avion*> colaCopa;
    priority_queue <Avion*> colaAvianca;
    priority_queue <Avion*> colaVolaris;
    priority_queue <Avion*> colaJetblue;

};

#endif /* ELIMINARVUELO_H */

