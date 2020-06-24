/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MuestraSalidas.h
 * Author: yareth
 *
 * Created on 23 de junio de 2020, 08:15 PM
 */

#ifndef MUESTRASALIDAS_H
#define MUESTRASALIDAS_H
#include <gtkmm-3.0/gtkmm/grid.h>
#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/fixed.h>
#include <gtkmm-3.0/gtkmm/label.h>
#include <gtkmm-3.0/gtkmm/treemodel.h>
#include <gtkmm-3.0/gtkmm/treeview.h>
#include <gtkmm-3.0/gtkmm/liststore.h>
#include <gtkmm-3.0/gtkmm/scrolledwindow.h>
#include <queue>
#include "ListaAerolineas.h"
#include "Avion_2.h"
#include "ColaAviones.h"

class MuestraSalidas : public Gtk::Window {
public:
    MuestraSalidas();
    MuestraSalidas(const MuestraSalidas& orig);
    virtual ~MuestraSalidas();
private:
    //Tree model columns:

    class ModelColumns : public Gtk::TreeModel::ColumnRecord {
    public:

        ModelColumns() {
            add(tmcHorasalida);
            add(tmcOrigen);
            add(tmcDestino);
            add(tmcAvion);
            add(tmcEstado);
        }


        Gtk::TreeModelColumn<Glib::ustring> tmcHorasalida, tmcOrigen
        , tmcDestino, tmcAvion, tmcEstado;

    };



    void completaTabla();
    ModelColumns columRecord;

    priority_queue <Avion*> colaEmirates; //declaracion colas de prioridad
    priority_queue <Avion*> colaCopa;
    priority_queue <Avion*> colaAvianca;
    priority_queue <Avion*> colaVolaris;
    priority_queue <Avion*> colaJetblue;
    ColaAviones cA;
    Gtk::Fixed fixed;
    Gtk::TreeView m_TreeView;
    Glib::RefPtr<Gtk::ListStore> m_refTreeModel;
    Glib::RefPtr<Gtk::TreeSelection> refTreeSelection;
    Gtk::TreeModel::iterator iter;
    Gtk::ScrolledWindow m_ScrolledWindow;
};

#endif /* MUESTRASALIDAS_H */

