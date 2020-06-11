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
    this->set_size_request(850, 400);
    initComponents();
    this->show_all_children();
}

void MostrarItinerario::initComponents() {

    this->btnFiltrar.signal_clicked().connect(sigc::mem_fun(*this,
            &MostrarItinerario::onButtonClickedFiltrarTabla));
    this->btnFiltrar.set_label("Filtrar");
    this->lblOrigen.set_text("Origen");
    this->lblDestino.set_text("Destino");

    colaItinerario = cA.getCola();

    m_ScrolledWindow.add(m_TreeView);

    //Only show the scrollbars when they are necessary:
    m_ScrolledWindow.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);
    m_refTreeModel = Gtk::ListStore::create(columRecord);
    //Gtk::TreeModel::Row row = *(m_refTreeModel->append());
    //Gtk::TreeModel::Row row2 = *(m_refTreeModel->append());
    m_TreeView.set_model(m_refTreeModel);
    //m_TreeView.append_column("Aerolinea", columRecord.tmcNombreAerolinea);
    m_TreeView.append_column("Origen", columRecord.tmcOrigen);
    m_TreeView.append_column("Destino", columRecord.tmcDestino);
    m_TreeView.append_column("Hora Salida", columRecord.tmcHorasalida);
    m_TreeView.append_column("Hora Llegada", columRecord.tmcHorallegada);
    m_TreeView.append_column("Avion", columRecord.tmcAvion);
    m_TreeView.append_column("Capacidad Pasajeros", columRecord.tmcCapacidad);


//    row[columRecord.tmcHorasalida] = colaItinerario.top();
//    row2[columRecord.tmcHorasalida] = "10:34";
//    colaItinerario.pop();
//    row[columRecord.tmcHorallegada] = colaItinerario.top();
//    row2[columRecord.tmcHorallegada] = "12:46";
//    colaItinerario.pop();
//    row[columRecord.tmcNombreAerolinea] = colaItinerario.top();
//    row2[columRecord.tmcNombreAerolinea] = "Emirates";
    completaTabla();
    m_ScrolledWindow.set_size_request(550, 300);
    this->fixed.put(this->m_ScrolledWindow, 10, 10);
    this->fixed.put(this->lblOrigen, 600, 10);
    this->fixed.put(this->lblDestino, 600, 50);
    this->fixed.put(this->etOrigen, 650, 10);
    this->fixed.put(this->etDestino, 650, 50);
    this->fixed.put(this->btnFiltrar, 600, 100);
    add(this->fixed);
}

void MostrarItinerario::completaTabla() {
    //se pueden agregar varias filas mediante un for
    int tamano = colaItinerario.size();
    for (int i = 0; i <tamano ; i++) {
        Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
        row3[columRecord.tmcHorasalida] = colaItinerario.top()->getHoraSalida();
        row3[columRecord.tmcHorallegada] = colaItinerario.top()->getHoraLlegada();
        row3[columRecord.tmcOrigen] = colaItinerario.top()->getOrigen();
        row3[columRecord.tmcDestino] = colaItinerario.top()->getDestino();
        row3[columRecord.tmcCapacidad] = colaItinerario.top()->getCantidad();
        row3[columRecord.tmcAvion] = colaItinerario.top()->getNombre();
        colaItinerario.pop();
//        row3[columRecord.tmcNombreAerolinea] = "Alzin";
//        row3[columRecord.tmcHorasalida] = "10:34";
    }
}

void MostrarItinerario::onButtonClickedFiltrarTabla() {

}

MostrarItinerario::~MostrarItinerario() {
}
