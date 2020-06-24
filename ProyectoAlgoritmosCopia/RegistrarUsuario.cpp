

#include "RegistrarUsuario.h"
#include "Usuario_2.h"
#include "UsuarioBusiness.h"

RegistrarUsuario::RegistrarUsuario() {
    this->set_title("Registrar Usuario");
    this->set_size_request(400, 400);
    initComponents();
    uB= new UsuarioBusiness();
    this->show_all_children();
}

RegistrarUsuario::~RegistrarUsuario() {

}

void RegistrarUsuario::initComponents() {
    //label
    this->lblNombre.set_label("Nombre:");
    this->lblContrasena.set_label("Contraseña:");
    this->lblNacionalidad.set_label("Nacionalidad:");
    this->lblEdad.set_label("Edad:");
    this->lblPasaporte.set_label("Pasaporte:");
    this->lblGenero.set_label("Genero:");
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

    this->fixed.put(this->lblEdad, 20, 150);
    this->fixed.put(this->etEdad, 100, 150);

    this->fixed.put(this->lblPasaporte, 20, 200);
    this->fixed.put(this->etPasaporte, 100, 200);

    this->fixed.put(this->lblGenero, 20, 250);
    this->fixed.put(this->etGenero, 100, 250);


    this->fixed.put(this->btnGuardar, 150, 300);
    this->add(fixed);
}

void RegistrarUsuario::onButtonClickedGuardar() {
    string nombre;
    nombre = etNombre.get_text().c_str();
    string contrasena;
    contrasena = etContrasena.get_text().c_str();
    
    //Usuario(string nombre, string edad, string pasaporte, string genero,  string nacionalidad);
    //Usuario usuario = new Usuario(etNombre, etEdad, etPasaporte, etGenero, etNacionalidad);
    //usuarios[1] = usuario;
    
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
        //string nombre, string edad, string pasaporte, string genero, string nacionalidad, string contrasenia
        
        Usuario *usuario;
        usuario = new Usuario(etNombre.get_text(), etEdad.get_text(), etPasaporte.get_text(),
                etGenero.get_text(), etNacionalidad.get_text(), etContrasena.get_text());
        
       // uB->registrarUsuario(new Usuario(usuario));
        cout<<"usuario registrado"<<endl;
             Gtk::MessageDialog dialogo(
                *this,
                "Usuario Registrado",
                false,
                Gtk::MESSAGE_INFO
                );
        dialogo.set_secondary_text(this->etNombre.get_text());
               
        dialogo.run();
    }
}