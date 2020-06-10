/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MostrarItinerario.h
 * Author: yareth
 *
 * Created on 8 de junio de 2020, 06:25 PM
 */

#ifndef MOSTRARITINERARIO_H
#define MOSTRARITINERARIO_H

#include <gtkmm-3.0/gtkmm/grid.h>
#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/fixed.h>
#include <gtkmm-3.0/gtkmm/label.h>

using namespace std;
class MostrarItinerario: public Gtk::Window{
public:
    MostrarItinerario();
    virtual ~MostrarItinerario();
    void initComponents();
private:
    Gtk::Grid tabla;
    Gtk::Fixed fixed;
    Gtk::Label label,label2;
};

#endif /* MOSTRARITINERARIO_H */

