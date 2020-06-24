/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ModuloAdministrativo.h
 * Author: mint
 *
 * Created on June 24, 2020, 11:44 AM
 */

#ifndef MODULOADMINISTRATIVO_H
#define MODULOADMINISTRATIVO_H

#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/messagedialog.h>
#include <gtkmm-3.0/gtkmm/label.h>
#include <gtkmm-3.0/gtkmm/entry.h>
#include <gtkmm-3.0/gtkmm/fixed.h>
#include <string.h>
#include <queue>

#include "ColaAviones.h"


using namespace std;

class ModuloAdministrativo : public Gtk::Window{
public:
    ModuloAdministrativo();
    ModuloAdministrativo(const ModuloAdministrativo& orig);
    virtual ~ModuloAdministrativo();
private:
    void initComponents();

    void onButtonClickedAceptar();
    
    //Avion(string nombre, string cantidad,string destino, string origen, string horaSalida, string horaLlegada);
    Gtk::Fixed fixed;
    Gtk::Button btnAceptar;
    Gtk::Entry etInfo,etAerolinea, etNombreAvion, etCantidadPasajeros, 
                etDestino, etOrigen, etHoraSalida, etHoraLlegada;
    Gtk::Label lblInfo,lblAerolinea, lblNombreAvion, lblCantidadPasajeros, 
                lblDestino, lblOrigen, lblHoraSalida, lblHoraLlegada;
    
    ColaAviones *colaAviones;
    priority_queue <Avion*> colaEmirates; //declaracion cola de prioridad
    priority_queue <Avion*> colaCopa;
    priority_queue <Avion*> colaAvianca;
    priority_queue <Avion*> colaVolaris;
    priority_queue <Avion*> colaJetblue;

};

#endif /* MODULOADMINISTRATIVO_H */

