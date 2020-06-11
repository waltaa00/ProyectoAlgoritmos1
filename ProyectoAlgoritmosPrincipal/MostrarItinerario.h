/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MostrarItinerario.h
 * Author: yareth
 *
 * Created on 8 de junio de 2020, 06:25 PM
 */

#ifndef MOSTRARITINERARIO_H
#define MOSTRARITINERARIO_H

#include <gtkmm-3.0/gtkmm/grid.h>
#include <gtkmm-3.0/gtkmm/window.h>
#include <gtkmm-3.0/gtkmm/fixed.h>
#include <gtkmm-3.0/gtkmm/label.h>
#include <gtkmm-3.0/gtkmm/treemodel.h>
#include <gtkmm-3.0/gtkmm/treeview.h>
#include <gtkmm-3.0/gtkmm/liststore.h>
#include <gtkmm-3.0/gtkmm/scrolledwindow.h>
#include <queue>
#include "ColaAviones.h"

using namespace std;

class MostrarItinerario : public Gtk::Window {
public:
    MostrarItinerario();
    virtual ~MostrarItinerario();
    void initComponents();
private:
    
    //Tree model columns:
  class ModelColumns : public Gtk::TreeModel::ColumnRecord
  {
  public:

    ModelColumns()
    {add(tmcNombreAerolinea);add(tmcOrigen);add(tmcDestino); add(tmcHorasalida);
    add(tmcHorallegada);add(tmcAvion);add(tmcCapacidad);}


    Gtk::TreeModelColumn<Glib::ustring>  tmcHorallegada, tmcHorasalida, tmcNombreAerolinea,tmcOrigen
    ,tmcDestino,tmcAvion,tmcCapacidad;

  };

  void completaTabla();
  void onButtonClickedFiltrarTabla();
  ModelColumns columRecord;
    
    priority_queue <string> colaItinerario;
    ColaAviones cA;
    Gtk::Fixed fixed;
    Gtk::TreeView m_TreeView;
    Glib::RefPtr<Gtk::ListStore> m_refTreeModel;
    Gtk::ScrolledWindow m_ScrolledWindow;
    Gtk::Entry etOrigen,etDestino;
    Gtk::Label lblOrigen,lblDestino;
    Gtk::Button btnFiltrar;
};

#endif /* MOSTRARITINERARIO_H */

