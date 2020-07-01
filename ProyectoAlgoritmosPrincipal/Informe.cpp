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
    this->set_size_request(250, 600);
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
    
    this->tvInforme.set_size_request(200, 300);
    //this->tvInforme.set_text("Prueba");
    //Fixed
    this->fixed.put(this->lblInfo, 50, 20);
    this->fixed.put(this->btnInfoUsuarios, 20, 70);
    this->fixed.put(this->btnTotalAviones, 20, 160);
    this->fixed.put(this->tvInforme, 20, 240);
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
    
    Glib::RefPtr<Gtk::TextBuffer> informe;
    
    informe = Gtk::TextBuffer::create();
    informe->set_text(resultado);
    
    this->tvInforme.set_buffer(informe);
        
        
//                row3[columRecord.tmcHorasalida] = colaEmirates.top()->getHoraSalida();
//                row3[columRecord.tmcHorallegada] = colaEmirates.top()->getHoraLlegada();
//                row3[columRecord.tmcOrigen] = colaEmirates.top()->getOrigen();
//                row3[columRecord.tmcDestino] = colaEmirates.top()->getDestino();
//
//                //        this->paisesVuelo = colaEmirates.top()->getOrigen()+" - "+colaEmirates.top()->getDestino();
//                //        cout<<this->paisesVuelo<<endl;
//
//                row3[columRecord.tmcCapacidad] = colaEmirates.top()->getCantidad();
//                row3[columRecord.tmcAvion] = colaEmirates.top()->getNombre();


    
    
}




void Informe::aboutWinClose() {

    //this->mostrarAerolineas = 0;


}

Informe::~Informe() {
}

