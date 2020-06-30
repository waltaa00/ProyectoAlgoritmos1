

#include "EliminarVuelo.h"
#include "Avion.h"

EliminarVuelo::EliminarVuelo() {
    this->set_title("Eliminar Vuelo");
    this->set_size_request(320, 230);
    colaAviones = new ColaAviones();
    initComponents();
    this->show_all_children();
}

void EliminarVuelo::initComponents() {
    //label
    this->lblInfo.set_label("Informacion del vuelo que desea eliminar");
    this->lblAerolinea.set_label("Aerolinea:");
    this->lblNombreAvion.set_label("Avion:");

    //Button
    this->btnAceptar.set_size_request(130, 50);
    this->btnAceptar.add_pixlabel("assets/save2.png", "Aceptar");
    
    this->btnAceptar.signal_clicked().connect(sigc::mem_fun(*this,
            &EliminarVuelo::onButtonClickedAceptar));
    //Fixed
    this->fixed.put(this->lblInfo, 50, 10);
    this->fixed.put(this->lblAerolinea, 45, 55);
    this->fixed.put(this->etAerolinea, 120, 50);
    this->fixed.put(this->lblNombreAvion, 45, 95);
    this->fixed.put(this->etNombreAvion, 120, 90);
    this->fixed.put(this->btnAceptar, 105, 150);
    
    this->add(fixed);
}

void EliminarVuelo::onButtonClickedAceptar() {
    
    this->colaEmirates = colaAviones->getColaEmirates();
    this->colaAvianca = colaAviones->getColaAvianca();
    this->colaJetblue = colaAviones->getColaJetblue();
    this->colaCopa = colaAviones->getColaCopa();
    this->colaVolaris = colaAviones->getColaVolaris();
    
    int tamanoEmirates = colaEmirates.size();
    int tamanoAvianca = colaAvianca.size();
    int tamanoCopa = colaCopa.size();
    int tamanoVolaris = colaVolaris.size();
    int tamanoJetblue = colaJetblue.size();
    
    string nombreAvion, aerolinea;
    nombreAvion = etNombreAvion.get_text().c_str();
    aerolinea = etAerolinea.get_text().c_str();
    
    cout<<"\n\nDatos del Eliminar:\n"<<nombreAvion<<"\n"<<aerolinea<<endl;
    
    
    if ((aerolinea == "Avianca" || aerolinea == "avianca") && nombreAvion != ""){
        for (int i = 0; i < tamanoAvianca; i++) {
            if(colaAvianca.top()->getNombre() == nombreAvion){
                colaAviones->popAvianca();
            }
            colaAvianca.pop();
        }//for
        Gtk::MessageDialog dialogo(
                *this,
                "Vuelo de Avianca eliminado de la cola",
                false,
                Gtk::MESSAGE_ERROR
                );
        dialogo.run();
    } 
    else if ((aerolinea == "Emirates" || aerolinea == "emirates") && nombreAvion != "") {
        for (int i = 0; i < tamanoEmirates; i++) {
            if(colaEmirates.top()->getNombre() == nombreAvion){
                colaAviones->popEmirates();
            }
            colaEmirates.pop();
        }//for
        Gtk::MessageDialog dialogo(
                *this,
                "Vuelo de Emirates eliminado de la cola",
                false,
                Gtk::MESSAGE_ERROR
                );
        dialogo.run();
    }
    else if ((aerolinea == "Copa Airlines" || aerolinea == "copa airlines" || aerolinea == "Copa" || aerolinea == "copa" ) && nombreAvion != "") {
        for (int i = 0; i < tamanoCopa; i++) {
            if(colaCopa.top()->getNombre() == nombreAvion){
                colaAviones->popCopa();
            }
            colaCopa.pop();
        }//for
        Gtk::MessageDialog dialogo(
                *this,
                "Vuelo de Copa Airlines eliminado de la cola",
                false,
                Gtk::MESSAGE_ERROR
                );
        dialogo.run();
    }
    else if ((aerolinea == "Jetblue" || aerolinea == "JetBlue" || aerolinea == "jetblue") && nombreAvion != "") {
        for (int i = 0; i < tamanoJetblue; i++) {
            if(colaJetblue.top()->getNombre() == nombreAvion){
                colaAviones->popJetblue();
            }
            colaJetblue.pop();
        }//for
        Gtk::MessageDialog dialogo(
                *this,
                "Vuelo de JetBlue eliminado de la cola",
                false,
                Gtk::MESSAGE_ERROR
                );
        dialogo.run();
    }
    else if ((aerolinea == "Volaris" || aerolinea == "volaris") && nombreAvion != "") {
        for (int i = 0; i < tamanoVolaris; i++) {
            if(colaVolaris.top()->getNombre() == nombreAvion){
                colaAviones->popVolaris();
            }
            colaVolaris.pop();
        }//for
        Gtk::MessageDialog dialogo(
                *this,
                "Vuelo de Volaris eliminado de la cola",
                false,
                Gtk::MESSAGE_ERROR
                );
        dialogo.run();
    }
    else{
        Gtk::MessageDialog dialogo(
                *this,
                "Datos erroneos o campos vacios",
                false,
                Gtk::MESSAGE_ERROR
                );
        dialogo.run();
    }
    
    //Avion(string nombre, string cantidad,string destino, string origen, string horaSalida, string horaLlegada);

}//Accion del boton

EliminarVuelo::EliminarVuelo(const EliminarVuelo& orig) {
}

EliminarVuelo::~EliminarVuelo() {
}

