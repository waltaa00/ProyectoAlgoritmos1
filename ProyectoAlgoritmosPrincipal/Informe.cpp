/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Informe.cpp
 * Author: mint
 * 
 * Created on June 30, 2020, 9:35 PM
 */

#include "Informe.h"

Informe::Informe() {
    this->set_title("Informes");
    this->set_size_request(630, 800);
    this->usuarioData = new UsuarioData();
    this->cA = new ColaAviones;
    initComponents();
    this->show_all_children();
}

void Informe::initComponents() {
    this->usuarioBusiness = new UsuarioBusiness();
    this->colaEmirates = cA->getColaEmirates();
    this->colaAvianca = cA->getColaAvianca();
    this->colaJetblue = cA->getColaJetblue();
    this->colaCopa = cA->getColaCopa();
    this->colaVolaris = cA->getColaVolaris();

    //label
    this->lblInfo.set_label("Que informe desea generar?");
    //Button
    this->btnInfoUsuarios.add_pixlabel("assets/info.png", "Usuarios Registrados");
    this->btnInfoUsuarios.signal_clicked().connect(sigc::mem_fun(*this,
            &Informe::onButtonClickedIngresar));
    
    this->btnTotalAviones.add_pixlabel("assets/info2.png", "Todos los Aviones");
    this->btnTotalAviones.signal_clicked().connect(sigc::mem_fun(*this,
            &Informe::onButtonClickedAviones));
    
//    this->btnAvionesHoras.add_pixlabel("assets/info3.png", "");
//    this->btnAvionesHoras.signal_clicked().connect(sigc::mem_fun(*this,
//            &Informes::onButtonClickedIngresar));
    
    this->tvInforme.set_size_request(400, 700);
    //this->tvInforme.set_text("Prueba");
    //Fixed
    this->fixed.put(this->lblInfo, 100, 20);
    this->fixed.put(this->btnInfoUsuarios, 440, 60);
    this->fixed.put(this->btnTotalAviones, 440, 150);
    this->fixed.put(this->tvInforme, 20, 50);
//    this->fixed.put(this->btnAvionesHoras, 20, 260);

    this->add(fixed);
}

void Informe::onButtonClickedIngresar() {
    
    Glib::RefPtr<Gtk::TextBuffer> informe;
    
    informe = Gtk::TextBuffer::create();
    informe->set_text("Usuarios Registrados \n\n"+this->usuarioData->leerUsuarios());
    //informe->set_text("Hola");
    
    this->tvInforme.set_buffer(informe);

}

void Informe::onButtonClickedAviones() {
    
    int tamanoEmirates = colaEmirates.size();
    int tamanoAvianca = colaAvianca.size();
    int tamanoCopa = colaCopa.size();
    int tamanoVolaris = colaVolaris.size();
    int tamanoJetblue = colaJetblue.size();
    
    string resultado;
    
    resultado = "Vuelos de Emirates:\n";
    for (int i = 0; i < tamanoEmirates; i++) {
        resultado += colaEmirates.top()->getNombre() + ", ";
       resultado += colaEmirates.top()->getHoraSalida() + ", "; 
       resultado += colaEmirates.top()->getHoraLlegada() + ", ";
       resultado += colaEmirates.top()->getOrigen() + ", ";
       resultado += colaEmirates.top()->getDestino() + ", ";
       resultado += colaEmirates.top()->getCantidad() + "\n";
       
       colaEmirates.pop();
    }
    
    resultado += "\nVuelos de Avianca:\n";
    for (int i = 0; i < tamanoAvianca; i++) {
        resultado += colaAvianca.top()->getNombre() + ", ";
       resultado += colaAvianca.top()->getHoraSalida() + ", "; 
       resultado += colaAvianca.top()->getHoraLlegada() + ", ";
       resultado += colaAvianca.top()->getOrigen() + ", ";
       resultado += colaAvianca.top()->getDestino() + ", ";
       resultado += colaAvianca.top()->getCantidad() + "\n";
       
       colaAvianca.pop();
    }
    
    resultado += "\nVuelos de Copa Airlines:\n";
    for (int i = 0; i < tamanoCopa; i++) {
        resultado += colaCopa.top()->getNombre() + ", ";
       resultado += colaCopa.top()->getHoraSalida() + ", "; 
       resultado += colaCopa.top()->getHoraLlegada() + ", ";
       resultado += colaCopa.top()->getOrigen() + ", ";
       resultado += colaCopa.top()->getDestino() + ", ";
       resultado += colaCopa.top()->getCantidad() + "\n";
       
       colaCopa.pop();
    }
    
    resultado += "\nVuelos de Volaris:\n";
    for (int i = 0; i < tamanoVolaris; i++) {
        resultado += colaVolaris.top()->getNombre() + ", ";
       resultado += colaVolaris.top()->getHoraSalida() + ", "; 
       resultado += colaVolaris.top()->getHoraLlegada() + ", ";
       resultado += colaVolaris.top()->getOrigen() + ", ";
       resultado += colaVolaris.top()->getDestino() + ", ";
       resultado += colaVolaris.top()->getCantidad() + "\n";
       
       colaVolaris.pop();
    }
    
    resultado += "\nVuelos de JetBlue:\n";
    for (int i = 0; i < tamanoJetblue; i++) {
        resultado += colaJetblue.top()->getNombre() + ", ";
       resultado += colaJetblue.top()->getHoraSalida() + ", "; 
       resultado += colaJetblue.top()->getHoraLlegada() + ", ";
       resultado += colaJetblue.top()->getOrigen() + ", ";
       resultado += colaJetblue.top()->getDestino() + ", ";
       resultado += colaJetblue.top()->getCantidad() + "\n";
       
       colaJetblue.pop();
    }
    
    Glib::RefPtr<Gtk::TextBuffer> informe;
    
    informe = Gtk::TextBuffer::create();
    informe->set_text(resultado);
    
    this->tvInforme.set_buffer(informe);
    
    
}//OnButtonClickedAviones




void Informe::aboutWinClose() {

    //this->mostrarAerolineas = 0;


}

Informe::~Informe() {
}

