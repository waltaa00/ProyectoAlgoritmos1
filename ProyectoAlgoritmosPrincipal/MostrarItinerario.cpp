/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MostrarItinerario.cpp
 * Author: yareth
 * 
 * Created on 8 de junio de 2020, 06:25 PM
 */

#include "MostrarItinerario.h"

MostrarItinerario::MostrarItinerario() {
    this->set_title("Itinerarios");
    this->set_size_request(400, 400);
    initComponents();
    this->show_all_children();
}

void MostrarItinerario::initComponents() {
    
    colaItinerario = cA.getCola();
    
    m_ScrolledWindow.add(m_TreeView);

    //Only show the scrollbars when they are necessary:
    m_ScrolledWindow.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);
    m_refTreeModel = Gtk::ListStore::create(columRecord);
    Gtk::TreeModel::Row row = *(m_refTreeModel->append());
    Gtk::TreeModel::Row row2 = *(m_refTreeModel->append());
    m_TreeView.set_model(m_refTreeModel);
    m_TreeView.append_column("Hora Salida", columRecord.tmcHorasalida);
    m_TreeView.append_column("Hora Llegada", columRecord.tmcHorallegada);
    m_TreeView.append_column("Aerolinea", columRecord.tmcNombreAerolinea);
    
    
    row[columRecord.tmcHorasalida] = colaItinerario.top();
    row2[columRecord.tmcHorasalida] = "10:34";
    colaItinerario.pop();
    row[columRecord.tmcHorallegada] = colaItinerario.top();
    row2[columRecord.tmcHorallegada] = "12:46";
    colaItinerario.pop();
    row[columRecord.tmcNombreAerolinea] = colaItinerario.top();
    row2[columRecord.tmcNombreAerolinea] = "Emirates";
    
    m_ScrolledWindow.set_size_request(300,300);
    this->fixed.put(this->m_ScrolledWindow,10,10);
    add(this->fixed);
}

MostrarItinerario::~MostrarItinerario() {
}
