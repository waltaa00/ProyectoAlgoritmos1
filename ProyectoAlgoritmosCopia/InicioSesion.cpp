/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "InicioSesion.h"

InicioSesion::InicioSesion() {
    this->set_title("Inicio Sesion");
    this->set_size_request(300, 150);
    initComponents();
    this->show_all_children();
}

InicioSesion::~InicioSesion() {

}

void InicioSesion::initComponents() {
    //label
    this->lblNombre.set_label("Nombre:");
    this->lblContrasena.set_label("Contraseña:");
    //Button
    this->btnIngresar.add_pixlabel("assets/login.png", "Ingresar");
    this->btnIngresar.signal_clicked().connect(sigc::mem_fun(*this,
            &InicioSesion::onButtonClickedIngresar));
    //Fixed
    this->fixed.put(this->lblNombre, 20, 10);
    this->fixed.put(this->etNombre, 100, 10);
    this->fixed.put(this->lblContrasena, 20, 50);
    this->fixed.put(this->etContrasena, 100, 50);
    this->fixed.put(this->btnIngresar, 20, 100);
    this->add(fixed);
}

void InicioSesion::onButtonClickedIngresar() {
    string nombre;
    nombre = etNombre.get_text().c_str();
    string contrasena;
    contrasena = etContrasena.get_text().c_str();

    if (nombre == "" || contrasena == "") {
        Gtk::MessageDialog dialogo(
                *this,
                "Cuadros sin llenar o valores mal ingresados",
                false,
                Gtk::MESSAGE_ERROR
                );
        dialogo.run();
    } else {


    }
}
