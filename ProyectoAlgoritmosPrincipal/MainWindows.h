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
#include "MuestraDestinos.h"
#include "MuestraSalidas.h"
#include "EliminarVuelo.h"
#include "ModuloAdministrativo.h"
#include "Informe.h" 
#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm-3.0/gtkmm/menubar.h>
#include <gtkmm-3.0/gtkmm/imagemenuitem.h>

class MainWindows : public Gtk::Window {
public:

    MainWindows(); // constructor
    ColaAviones* getColaAviones() const;

    virtual ~MainWindows(); // destructor

protected:


private:

    void initComponents();

    void abrirRegistrarUsuario();

    void abrirInicioSesion();

    void abrirAerolineas();
    
    void abrirItinerarios();
    
    void abrirDestinos();
    
    void abrirSalidas();
    
    void abrirModulo();
    
    void abrirEliminarVuelo();
    
    void abrirInformes();
 

    void aboutWinClose(); //aboutWinClose

    Gtk::MenuBar menuBar, menuBar2;
    Gtk::MenuItem menuArchivo, menuModulo;
    Gtk::Menu subMenuArchivo, subMenuModulo;
    Gtk::ImageMenuItem menuRegistraUsuario, menuIniciaSesion,menuAerolineas,menuItinerario,
            menuDestinos,menuSalidas, menuAdministrar, menuEliminar, menuInformes;
    Gtk::Fixed fixed; // contenedor

    ColaAviones * colaAviones;
    RegistrarUsuario *registrarUsuario;
    InicioSesion *inicioSesion;
    //MostrarAerolineas *mostrarAerolineas;
    MostrarItinerario *mostrarItinerarios;
    MuestraDestinos *mostrarDestinos;
    MuestraSalidas *muestraSalidas;
    ModuloAdministrativo *moduloAdministrativo;
    EliminarVuelo *eliminarVuelo;
    Informe *informes;
    
};

#endif /* MAINWINDOWS_H */

