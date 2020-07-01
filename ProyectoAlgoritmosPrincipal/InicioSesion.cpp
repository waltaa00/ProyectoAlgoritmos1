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
    this->usuarioBusiness = new UsuarioBusiness();

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

    this->mostrarAerolineas = 0;

    this->add(fixed);
}

std::string InicioSesion::getNombre() {
    return nombreFiltro;

}

void InicioSesion::setNombre(string nombre) {
    nombreFiltro = nombre;

}

std::string InicioSesion::getContrasenia() {
    return contraseniaFiltro;

}

void InicioSesion::setContrasenia(string contrasenia) {
    contraseniaFiltro= contrasenia;

}

void InicioSesion::onButtonClickedIngresar() {
    string nombre;
    nombre = etNombre.get_text().c_str();
    string contrasena;
    contrasena = etContrasena.get_text().c_str();
    
    nombreFiltro= nombre;
    contraseniaFiltro= contrasena;

    //vector<Usuario> usuarios= this->usuarioBusiness->obtenerUsuario();
    if (nombre == "" || contrasena == "") {
        Gtk::MessageDialog dialogo(
                *this,
                "Cuadros sin llenar o valores mal ingresados",
                false,
                Gtk::MESSAGE_ERROR
                );
        dialogo.run();
    }
    if (usuarioBusiness->buscarUsuario(nombre, contrasena) == true) {
 
        Gtk::MessageDialog dialogo(
                *this,
                "Bienvenido a AeroTurri",
                false,
                Gtk::MESSAGE_INFO
                );
        dialogo.set_secondary_text(this->etNombre.get_text());

        dialogo.run();
        if (this->mostrarAerolineas != 0)
            return;
        
        this->hide();//Esconde la ventana
        
        this->mostrarAerolineas = new MostrarAerolineas();
        this->mostrarAerolineas->signal_hide().connect(sigc::mem_fun(*this, &InicioSesion::aboutWinClose));
        this->mostrarAerolineas->show_all();
    } else {// comentar en caso de error
        cout << "dentro del else" << endl;
        Gtk::MessageDialog dialogo(// comentar en caso de error
                *this, // comentar en caso de error
                "Usuario no está registrado", // comentar en caso de error
                false, // comentar en caso de error
                Gtk::MESSAGE_ERROR // comentar en caso de error
                ); // comentar en caso de error
        dialogo.run();
    } // comentar en caso de error

}

void InicioSesion::aboutWinClose() {

    //this->mostrarAerolineas = 0;


}
