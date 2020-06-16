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

using namespace std;

class Drawing : public Gtk::DrawingArea {
public:

    Drawing(); // constructor

    virtual ~Drawing(); // destructor

    void updateDrawingArea(); // updateDrawingArea


protected:

    bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr); // on_draw

    Glib::RefPtr<Gdk::Pixbuf> fondo;
private:

};

#endif /* DRAWING_H */

