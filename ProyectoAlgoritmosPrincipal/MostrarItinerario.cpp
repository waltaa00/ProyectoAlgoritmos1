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

MostrarItinerario::MostrarItinerario(string filtro) {
    this->filtro = filtro;
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

    this->colaEmirates = cA.getColaEmirates();
    this->colaAvianca = cA.getColaAvianca();
    this->colaJetblue = cA.getColaJetblue();
    this->colaCopa = cA.getColaCopa();
    this->colaVolaris = cA.getColaVolaris();
    this->aeroList = lA.getLista();
    

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
    int tamanoEmirates = colaEmirates.size();
    int tamanoAvianca = colaAvianca.size();
    int tamanoCopa = colaCopa.size();
    int tamanoVolaris = colaVolaris.size();
    int tamanoJetblue = colaJetblue.size();
    
    if(this->filtro == "Emirates"){
    for (int i = 0; i <tamanoEmirates ; i++) {
        Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
        row3[columRecord.tmcHorasalida] = colaEmirates.top()->getHoraSalida();
        row3[columRecord.tmcHorallegada] = colaEmirates.top()->getHoraLlegada();
        row3[columRecord.tmcOrigen] = colaEmirates.top()->getOrigen();
        row3[columRecord.tmcDestino] = colaEmirates.top()->getDestino();
        row3[columRecord.tmcCapacidad] = colaEmirates.top()->getCantidad();
        row3[columRecord.tmcAvion] = colaEmirates.top()->getNombre();
        colaEmirates.pop();
      }
    }else if(this->filtro == "Jet Blue"){
    for (int i = 0; i <tamanoJetblue ; i++) {
        Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
        row3[columRecord.tmcHorasalida] = colaJetblue.top()->getHoraSalida();
        row3[columRecord.tmcHorallegada] = colaJetblue.top()->getHoraLlegada();
        row3[columRecord.tmcOrigen] = colaJetblue.top()->getOrigen();
        row3[columRecord.tmcDestino] = colaJetblue.top()->getDestino();
        row3[columRecord.tmcCapacidad] = colaJetblue.top()->getCantidad();
        row3[columRecord.tmcAvion] = colaJetblue.top()->getNombre();
        colaJetblue.pop();
      }
    } else if(this->filtro == "Avianca"){
    for (int i = 0; i <tamanoAvianca ; i++) {
        Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
        row3[columRecord.tmcHorasalida] = colaAvianca.top()->getHoraSalida();
        row3[columRecord.tmcHorallegada] = colaAvianca.top()->getHoraLlegada();
        row3[columRecord.tmcOrigen] = colaAvianca.top()->getOrigen();
        row3[columRecord.tmcDestino] = colaAvianca.top()->getDestino();
        row3[columRecord.tmcCapacidad] = colaAvianca.top()->getCantidad();
        row3[columRecord.tmcAvion] = colaAvianca.top()->getNombre();
        colaAvianca.pop();
      }
    } else if(this->filtro == "Copa Airlines"){
    for (int i = 0; i <tamanoCopa ; i++) {
        Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
        row3[columRecord.tmcHorasalida] = colaCopa.top()->getHoraSalida();
        row3[columRecord.tmcHorallegada] = colaCopa.top()->getHoraLlegada();
        row3[columRecord.tmcOrigen] = colaCopa.top()->getOrigen();
        row3[columRecord.tmcDestino] = colaCopa.top()->getDestino();
        row3[columRecord.tmcCapacidad] = colaCopa.top()->getCantidad();
        row3[columRecord.tmcAvion] = colaCopa.top()->getNombre();
        colaCopa.pop();
      }
    } else if(this->filtro == "Volaris"){
    for (int i = 0; i <tamanoVolaris ; i++) {
        Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
        row3[columRecord.tmcHorasalida] = colaVolaris.top()->getHoraSalida();
        row3[columRecord.tmcHorallegada] = colaVolaris.top()->getHoraLlegada();
        row3[columRecord.tmcOrigen] = colaVolaris.top()->getOrigen();
        row3[columRecord.tmcDestino] = colaVolaris.top()->getDestino();
        row3[columRecord.tmcCapacidad] = colaVolaris.top()->getCantidad();
        row3[columRecord.tmcAvion] = colaVolaris.top()->getNombre();
        colaVolaris.pop();
      }
    }
    
}

void MostrarItinerario::onButtonClickedFiltrarTabla() {

}

MostrarItinerario::~MostrarItinerario() {
}
