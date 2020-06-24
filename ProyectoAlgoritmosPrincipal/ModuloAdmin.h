/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ModuloAdmin.h
 * Author: mint
 *
 * Created on June 23, 2020, 9:38 PM
 */

#ifndef MODULOADMIN_H
#define MODULOADMIN_H

#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/messagedialog.h>
#include <gtkmm-3.0/gtkmm/label.h>
#include <gtkmm-3.0/gtkmm/entry.h>
#include <gtkmm-3.0/gtkmm/fixed.h>
#include <string.h>


using namespace std;

class ModuloAdmin : public Gtk::Window{
public:
    ModuloAdmin();
    ModuloAdmin(const ModuloAdmin& orig);
    virtual ~ModuloAdmin();
private:
    
    void initComponents();

    void onButtonClickedIngresar();
    
    Gtk::Fixed fixed;
    Gtk::Button btnIngresar;
    Gtk::Entry etNombre, etContrasena;
    Gtk::Label lblNombre, lblContrasena, lblPersonajes;

};

#endif /* MODULOADMIN_H */

