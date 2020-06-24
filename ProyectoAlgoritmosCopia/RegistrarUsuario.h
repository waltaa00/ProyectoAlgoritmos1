/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RegistrarUsuario.h
 * Author: yareth
 *
 * Created on 26 de mayo de 2020, 05:53 PM
 */

#ifndef REGISTRARUSUARIO_H
#define REGISTRARUSUARIO_H

#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/fixed.h>
#include <gtkmm-3.0/gtkmm/button.h>
#include <gtkmm-3.0/gtkmm/entry.h>
#include <gtkmm-3.0/gtkmm/radiobutton.h>
#include <gtkmm-3.0/gtkmm/messagedialog.h>

#include "Usuario_2.h"
#include "UsuarioBusiness.h"

using namespace std;

class RegistrarUsuario : public Gtk::Window {
public:

    RegistrarUsuario();

    virtual ~RegistrarUsuario();
private:

    void initComponents();

    void onButtonClickedGuardar();
    //Gtk
    Gtk::Fixed fixed;
    Gtk::Button btnGuardar;
    Gtk::Entry etNombre, etContrasena,etNacionalidad, etEdad, etPasaporte, etGenero;
    Gtk::Label lblNombre, lblContrasena,lblNacionalidad, lblEdad, lblPasaporte, lblGenero;
    
    UsuarioBusiness *uB;
    
//    Usuario usuarios[];
};

#endif /* REGISTRARUSUARIO_H */
