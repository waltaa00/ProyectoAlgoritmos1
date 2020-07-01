/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Informes.h
 * Author: mint
 *
 * Created on June 30, 2020, 9:08 PM
 */

#ifndef INFORMES_H
#define INFORMES_H

#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/messagedialog.h>
#include <gtkmm-3.0/gtkmm/label.h>
#include <gtkmm-3.0/gtkmm/entry.h>
#include <gtkmm-3.0/gtkmm/fixed.h>
#include <gtkmm.h>
#include <gtkmm-3.0/gtkmm/textbuffer.h>
#include <string.h>
#include "UsuarioBusiness.h"
#include <queue>
#include "ColaAviones.h"
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>  

using namespace std;

class Informes : public Gtk::Window{
public:
    Informes();;
    virtual ~Informes();
    void aboutWinClose(); 
    
private:

    void initComponents();

    void onButtonClickedIngresar();
    void onButtonClickedAviones();
    //Gtk
    Gtk::Fixed fixed;
    Gtk::Button btnInfoUsuarios, btnTotalAviones, btnAvionesHoras;
    Gtk::TextView tvInforme;
    Gtk::Label lblInfo;
    UsuarioData *usuarioData;
    UsuarioBusiness *usuarioBusiness;
    
    priority_queue <Avion*> colaEmirates; //declaracion colas de prioridad
    priority_queue <Avion*> colaCopa;
    priority_queue <Avion*> colaAvianca;
    priority_queue <Avion*> colaVolaris;
    priority_queue <Avion*> colaJetblue;
    ColaAviones* cA;

};

#endif /* INFORMES_H */

