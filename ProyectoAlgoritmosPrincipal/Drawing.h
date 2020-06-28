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
    void draw_text2(const Cairo::RefPtr<Cairo::Context>& cr, int posX, int posY, int origendestino);
    Gtk::Label lblOrigen,lblDestino;
    Gtk::Fixed fixed;
    
private:
    void vuelosTiempoReal();
    void vuelosSeleccionados();
    Vuelo* vuelo;
    MostrarItinerario* mostrarItinerario;
    ColaAviones* cola;
    string texto;
    OrigenDestinoBusiness* origenDestino;
    vector<string> vectorOrigenDestino;
    vector<Vuelo> vuelos;
    priority_queue <Avion*> colaEmirates; //declaracion colas de prioridad
    priority_queue <Avion*> colaCopa;
    priority_queue <Avion*> colaAvianca;
    priority_queue <Avion*> colaVolaris;
    priority_queue <Avion*> colaJetblue;
};

#endif /* DRAWING_H */

