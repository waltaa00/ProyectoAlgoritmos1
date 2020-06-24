/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MuestraSalidas.cpp
 * Author: yareth
 * 
 * Created on 23 de junio de 2020, 08:15 PM
 */

#include "MuestraSalidas.h"

MuestraSalidas::MuestraSalidas() {

    this->colaEmirates = cA.getColaEmirates();
    this->colaAvianca = cA.getColaAvianca();
    this->colaJetblue = cA.getColaJetblue();
    this->colaCopa = cA.getColaCopa();
    this->colaVolaris = cA.getColaVolaris();


    m_ScrolledWindow.add(m_TreeView);

    //Only show the scrollbars when they are necessary:
    m_ScrolledWindow.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);
    m_refTreeModel = Gtk::ListStore::create(columRecord);
    //Gtk::TreeModel::Row row = *(m_refTreeModel->append());
    //Gtk::TreeModel::Row row2 = *(m_refTreeModel->append());
    m_TreeView.set_model(m_refTreeModel);
    //m_TreeView.set_reorderable();

    //  m_TreeView.
    //m_TreeView.append_column("Aerolinea", columRecord.tmcNombreAerolinea);
    m_TreeView.append_column("Hora Salida", columRecord.tmcHorasalida);
    m_TreeView.append_column("Origen", columRecord.tmcOrigen);
    m_TreeView.append_column("Destino", columRecord.tmcDestino);
    m_TreeView.append_column("Avion", columRecord.tmcAvion);
    m_TreeView.append_column("Estado", columRecord.tmcEstado);

    completaTabla();
    m_ScrolledWindow.set_size_request(550, 300);
    this->fixed.put(this->m_ScrolledWindow, 10, 10);
    add(this->fixed);
}

MuestraSalidas::MuestraSalidas(const MuestraSalidas& orig) {
}

MuestraSalidas::~MuestraSalidas() {
}

void MuestraSalidas::completaTabla() {
    time_t t = time(0);
    tm* now = localtime(&t);
    int hora = now->tm_hour;
    int tamanoEmirates = colaEmirates.size();
    int tamanoAvianca = colaAvianca.size();
    int tamanoCopa = colaCopa.size();
    int tamanoVolaris = colaVolaris.size();
    int tamanoJetblue = colaJetblue.size();

    for (int i = 0; i < tamanoEmirates; i++) {
        cout << "hora salida" << colaEmirates.top()->getHoraSalida() << " hora real " << hora << endl;
        if (atoi(colaEmirates.top()->getHoraSalida().c_str()) > hora) {
            Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
            row3[columRecord.tmcHorasalida] = colaEmirates.top()->getHoraSalida();
            row3[columRecord.tmcOrigen] = colaEmirates.top()->getOrigen();
            row3[columRecord.tmcDestino] = colaEmirates.top()->getDestino();
            row3[columRecord.tmcAvion] = colaEmirates.top()->getNombre();
            row3[columRecord.tmcEstado] = "Disponible";
        }
        colaEmirates.pop();
    }
    for (int i = 0; i < tamanoJetblue; i++) {
        if (atoi(colaJetblue.top()->getHoraSalida().c_str()) > hora) {
            Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
            row3[columRecord.tmcHorasalida] = colaJetblue.top()->getHoraSalida();
            row3[columRecord.tmcOrigen] = colaJetblue.top()->getOrigen();
            row3[columRecord.tmcDestino] = colaJetblue.top()->getDestino();
            row3[columRecord.tmcAvion] = colaJetblue.top()->getNombre();
            row3[columRecord.tmcEstado] = "Disponible";
        }
        colaJetblue.pop();
    }
    for (int i = 0; i < tamanoAvianca; i++) {
        cout << "hora salida" << colaAvianca.top()->getHoraSalida() << ", hora real " << hora << endl;
        if (atoi(colaAvianca.top()->getHoraSalida().c_str()) > hora) {
            Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
            row3[columRecord.tmcHorasalida] = colaAvianca.top()->getHoraSalida();
            row3[columRecord.tmcOrigen] = colaAvianca.top()->getOrigen();
            row3[columRecord.tmcDestino] = colaAvianca.top()->getDestino();
            row3[columRecord.tmcAvion] = colaAvianca.top()->getNombre();
            row3[columRecord.tmcEstado] = "Disponible";
        }
        colaAvianca.pop();
    }
    for (int i = 0; i < tamanoCopa; i++) {
        if (atoi(colaCopa.top()->getHoraSalida().c_str()) > hora) {
            Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
            row3[columRecord.tmcHorasalida] = colaCopa.top()->getHoraSalida();
            row3[columRecord.tmcOrigen] = colaCopa.top()->getOrigen();
            row3[columRecord.tmcDestino] = colaCopa.top()->getDestino();
            row3[columRecord.tmcAvion] = colaCopa.top()->getNombre();
            row3[columRecord.tmcEstado] = "Disponible";

        }
        colaCopa.pop();
    }
    for (int i = 0; i < tamanoVolaris; i++) {
        if (atoi(colaVolaris.top()->getHoraSalida().c_str()) > hora) {
            Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
            row3[columRecord.tmcHorasalida] = colaVolaris.top()->getHoraSalida();
            row3[columRecord.tmcOrigen] = colaVolaris.top()->getOrigen();
            row3[columRecord.tmcDestino] = colaVolaris.top()->getDestino();
            row3[columRecord.tmcAvion] = colaVolaris.top()->getNombre();
            row3[columRecord.tmcEstado] = "Disponible";

        }
        colaVolaris.pop();
    }
}
