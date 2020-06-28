/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ModuloAdministrativo.cpp
 * Author: mint
 * 
 * Created on June 24, 2020, 11:44 AM
 */

#include "ModuloAdministrativo.h"
#include "Avion.h"
#include "MainWindows.h"

ModuloAdministrativo::ModuloAdministrativo() {
    this->set_title("Modulo Administrativo");
    this->set_size_request(320, 450);
    colaAviones = new ColaAviones();
    initComponents();
    this->show_all_children();

}

void ModuloAdministrativo::initComponents() {
    //label
    this->lblInfo.set_label("Informacion del vuelo que desea agregar");
    this->lblAerolinea.set_label("Aerolinea:");
    this->lblNombreAvion.set_label("Avion:");
    this->lblCantidadPasajeros.set_label("Cantidad pasajeros:");
    this->lblDestino.set_label("Destino:");
    this->lblOrigen.set_label("Origen:");
    this->lblHoraSalida.set_label("Hora Salida:");
    this->lblHoraLlegada.set_label("Hora Llegada:");
    //Button
    this->btnAceptar.set_size_request(130, 50);
    this->btnAceptar.add_pixlabel("assets/save2.png", "Aceptar");
    
    this->btnAceptar.signal_clicked().connect(sigc::mem_fun(*this,
            &ModuloAdministrativo::onButtonClickedAceptar));
    //Fixed
    this->fixed.put(this->lblInfo, 50, 10);
    this->fixed.put(this->lblAerolinea, 20, 55);
    this->fixed.put(this->etAerolinea, 140, 50);
    this->fixed.put(this->lblNombreAvion, 20, 95);
    this->fixed.put(this->etNombreAvion, 140, 90);
    this->fixed.put(this->lblCantidadPasajeros, 20, 135);
    this->fixed.put(this->etCantidadPasajeros, 140, 130);
    this->fixed.put(this->lblDestino, 20, 175);
    this->fixed.put(this->etDestino, 140, 170);
    this->fixed.put(this->lblOrigen, 20, 215);
    this->fixed.put(this->etOrigen, 140, 210);
    this->fixed.put(this->lblHoraSalida, 20, 255);
    this->fixed.put(this->etHoraSalida, 140, 250);
    this->fixed.put(this->lblHoraLlegada, 20, 295);
    this->fixed.put(this->etHoraLlegada, 140, 290);
    this->fixed.put(this->btnAceptar, 105, 340);
    
    this->add(fixed);
}

void ModuloAdministrativo::onButtonClickedAceptar() {
    string nombreAvion, aerolinea, pasajeros, destino, origen, horaSalida, horaLlegada;
    nombreAvion = etNombreAvion.get_text().c_str();
    aerolinea = etAerolinea.get_text().c_str();
    pasajeros = etCantidadPasajeros.get_text().c_str();
    destino = etDestino.get_text().c_str();
    origen = etOrigen.get_text().c_str();
    horaSalida = etHoraSalida.get_text().c_str();
    horaLlegada = etHoraLlegada.get_text().c_str();
    
    cout<<"\n\nDatos del Modulo:\n"<<nombreAvion<<"\n"<<origen<<"\n"<<destino<<"\n"<<endl;

    if (aerolinea == "Avianca" || aerolinea == "avianca") {
        colaAviones->pushAvianca(nombreAvion, pasajeros, destino, origen, horaSalida, horaLlegada);
        Gtk::MessageDialog dialogo(
                *this,
                "Vuelo de Avianca ingresado en la cola",
                false,
                Gtk::MESSAGE_ERROR
                );
        dialogo.run();
    } 
    if (aerolinea == "Emirates" || aerolinea == "emirates") {
        colaAviones->pushEmirates(nombreAvion, pasajeros, destino, origen, horaSalida, horaLlegada);
        Gtk::MessageDialog dialogo(
                *this,
                "Vuelo de Emirates ingresado en la cola",
                false,
                Gtk::MESSAGE_ERROR
                );
        dialogo.run();
    }
    if (aerolinea == "Copa Airlines" || aerolinea == "copa airlines" || aerolinea == "Copa" || aerolinea == "copa") {
        colaAviones->pushCopa(nombreAvion, pasajeros, destino, origen, horaSalida, horaLlegada);
        Gtk::MessageDialog dialogo(
                *this,
                "Vuelo de Copa Airlines ingresado en la cola",
                false,
                Gtk::MESSAGE_ERROR
                );
        dialogo.run();
    }
    if (aerolinea == "Jetblue" || aerolinea == "JetBlue" || aerolinea == "jetblue") {
        colaAviones->pushJetblue(nombreAvion, pasajeros, destino, origen, horaSalida, horaLlegada);
        Gtk::MessageDialog dialogo(
                *this,
                "Vuelo de JetBlue ingresado en la cola",
                false,
                Gtk::MESSAGE_ERROR
                );
        dialogo.run();
    }
    if (aerolinea == "Volaris" || aerolinea == "volaris") {
        colaAviones->pushVolaris(nombreAvion, pasajeros, destino, origen, horaSalida, horaLlegada);
        Gtk::MessageDialog dialogo(
                *this,
                "Vuelo de Volaris ingresado en la cola",
                false,
                Gtk::MESSAGE_ERROR
                );
        dialogo.run();
    }
    
    //Avion(string nombre, string cantidad,string destino, string origen, string horaSalida, string horaLlegada);
    
    
}

ModuloAdministrativo::ModuloAdministrativo(const ModuloAdministrativo& orig) {

}

ModuloAdministrativo::~ModuloAdministrativo() {
}

