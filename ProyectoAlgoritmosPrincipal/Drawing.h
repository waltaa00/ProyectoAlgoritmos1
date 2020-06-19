/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Drawing.h
 * Author: Yareth
 *
 * 
 */

#ifndef DRAWING_H
#define DRAWING_H

#include <gtkmm.h>
#include "iostream"
#include "Vuelo_2.h"
#include "MostrarItinerario.h"
#include <string>
#include <vector>
using namespace std;

class Drawing : public Gtk::DrawingArea {
public:

    Drawing(); // constructor

    virtual ~Drawing(); // destructor

    void updateDrawingArea(); // updateDrawingArea


protected:

    Glib::RefPtr<Gdk::Pixbuf> fondo;
    bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr); // on_draw
    void draw_text(const Cairo::RefPtr<Cairo::Context>& cr, int posX, int posY);
    Gtk::Label lblOrigen,lblDestino;
    Gtk::Fixed fixed;
    
private:
    Vuelo* vuelo;
    MostrarItinerario* mostrarItinerario;
    //ColaAviones* cola;
    string texto;
    OrigenDestinoBusiness* origenDestino;
    vector<string> vectorOrigenDestino;

};

#endif /* DRAWING_H */

