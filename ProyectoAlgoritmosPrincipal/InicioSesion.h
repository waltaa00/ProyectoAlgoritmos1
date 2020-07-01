/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InicioSesion.h
 * Author: yareth
 *
 * Created on 27 de mayo de 2020, 01:39 PM
 */

#ifndef INICIOSESION_H
#define INICIOSESION_H

#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/messagedialog.h>
#include <gtkmm-3.0/gtkmm/label.h>
#include <gtkmm-3.0/gtkmm/entry.h>
#include <gtkmm-3.0/gtkmm/fixed.h>
#include <string.h>
#include "MostrarAerolineas.h"
#include "UsuarioBusiness.h"


using namespace std;

class InicioSesion : public Gtk::Window {
public:

    InicioSesion();

    virtual ~InicioSesion();

    void aboutWinClose();

    string getContrasenia();
    void setContrasenia(string contrasenia);
    string getNombre();
    void setNombre(string nombre);

private:

    void initComponents();

    void onButtonClickedIngresar();
    //Gtk

    string nombreFiltro;
    string contraseniaFiltro;
    Gtk::Fixed fixed;
    Gtk::Button btnIngresar;
    Gtk::Entry etNombre, etContrasena;
    Gtk::Label lblNombre, lblContrasena, lblPersonajes;
    MostrarAerolineas *mostrarAerolineas;
    UsuarioBusiness *usuarioBusiness;
    UsuarioData *usuarioData;
};

#endif /* INICIOSESION_H */

