/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "RegistrarUsuario.h"

RegistrarUsuario::RegistrarUsuario() {
    this->set_title("Registrar Usuario");
    this->set_size_request(400, 300);
    initComponents();
    this->show_all_children();
}

RegistrarUsuario::~RegistrarUsuario() {

}

void RegistrarUsuario::initComponents() {
    //label
    this->lblNombre.set_label("Nombre:");
    this->lblContrasena.set_label("Contraseña:");
    this->lblNacionalidad.set_label("Nacionalidad:");
    //Button
    this->btnGuardar.add_pixlabel("assets/save.png", "Guardar");
    this->btnGuardar.signal_clicked().connect(sigc::mem_fun(*this,
            &RegistrarUsuario::onButtonClickedGuardar));
    //Fixed
    this->fixed.put(this->lblNombre, 20, 10);
    this->fixed.put(this->etNombre, 100, 10);
    this->fixed.put(this->lblContrasena, 20, 50);
    this->fixed.put(this->etContrasena, 100, 50);
    this->fixed.put(this->lblNacionalidad, 20, 100);
    this->fixed.put(this->etNacionalidad, 100, 100);
    this->fixed.put(this->btnGuardar, 20, 250);
    this->add(fixed);
}

void RegistrarUsuario::onButtonClickedGuardar() {
    string nombre;
    nombre = etNombre.get_text().c_str();
    string contrasena;
    contrasena = etContrasena.get_text().c_str();
    string imagen;
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
