/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MainWindows.h
 * Author: yareth
 *
 * 
 */

#ifndef MAINWINDOWS_H
#define MAINWINDOWS_H

#include "iostream"
#include "RegistrarUsuario.h"
#include "InicioSesion.h"
#include "MostrarAerolineas.h"
#include "MostrarItinerario.h" 
#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm-3.0/gtkmm/menubar.h>
#include <gtkmm-3.0/gtkmm/imagemenuitem.h>

class MainWindows : public Gtk::Window {
public:

    MainWindows(); // constructor

    virtual ~MainWindows(); // destructor

protected:





private:

    void initComponents();


    void abrirRegistrarUsuario();

    void abrirInicioSesion();

    void abrirAerolineas();
    
    void abrirItinerarios();

    void aboutWinClose(); //aboutWinClose

    Gtk::MenuBar menuBar;
    Gtk::MenuItem menuArchivo;
    Gtk::Menu subMenuArchivo;
    Gtk::ImageMenuItem menuRegistraUsuario, menuIniciaSesion,menuAerolineas,menuItinerario,
            menuDestinos;
    Gtk::Fixed fixed; // contenedor

    RegistrarUsuario *registrarUsuario;
    InicioSesion *inicioSesion;
    MostrarAerolineas *mostrarAerolineas;
    MostrarItinerario *mostrarItinerarios;
};

#endif /* MAINWINDOWS_H */
