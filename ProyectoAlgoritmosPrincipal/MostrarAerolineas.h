/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MostrarAerolineas.h
 * Author: yareth
 *
 * Created on 6 de junio de 2020, 07:27 PM
 */

#ifndef MOSTRARAEROLINEAS_H
#define MOSTRARAEROLINEAS_H

#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/label.h>
#include <gtkmm-3.0/gtkmm/fixed.h>
#include <list>
#include "ListaAerolineas.h"
#include "MostrarItinerario.h"


using namespace std;

class MostrarAerolineas : public Gtk::Window {
public:

    MostrarAerolineas();

    virtual ~MostrarAerolineas();


private:

    void initComponents();

    bool on_key_press_event(GdkEventKey* event);

    list <string> aeroList;
    ListaAerolineas lA;
    Gtk::Button btn;
    Gtk::Fixed fixed;
    Gtk::Label lblAerolinea;
    MostrarItinerario *mostrarItinerarios;
    
       void aboutWinClose(); //aboutWinClose
};

#endif /* MOSTRARAEROLINEAS_H */

