

#include "MostrarItinerario.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



using namespace std;

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

    this->btnGuardar.signal_clicked().connect(sigc::mem_fun(*this,
            &MostrarItinerario::onButtonClickedGuardarVuelo));
    this->btnGuardar.set_label("Guardar");

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
    //m_TreeView.set_reorderable();

    //  m_TreeView.
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
    this->fixed.put(this->btnGuardar, 600, 150);
    add(this->fixed);
}


time_t t = time(0);
tm* now = localtime(&t);
int hora = now->tm_hour;
int minutos = now->tm_min;
int segundos = now->tm_sec;

void MostrarItinerario::completaTabla() {
    //se pueden agregar varias filas mediante un for
    int tamanoEmirates = colaEmirates.size();
    int tamanoAvianca = colaAvianca.size();
    int tamanoCopa = colaCopa.size();
    int tamanoVolaris = colaVolaris.size();
    int tamanoJetblue = colaJetblue.size();



    if (this->filtro == "Emirates") {
        for (int i = 0; i < tamanoEmirates; i++) {
            cout << "hora salida" << colaEmirates.top()->getHoraSalida() << " hora real " << hora << endl;
            if (atoi(colaEmirates.top()->getHoraSalida().c_str()) > hora) {
                Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
                row3[columRecord.tmcHorasalida] = colaEmirates.top()->getHoraSalida();
                row3[columRecord.tmcHorallegada] = colaEmirates.top()->getHoraLlegada();
                row3[columRecord.tmcOrigen] = colaEmirates.top()->getOrigen();
                row3[columRecord.tmcDestino] = colaEmirates.top()->getDestino();

                //        this->paisesVuelo = colaEmirates.top()->getOrigen()+" - "+colaEmirates.top()->getDestino();
                //        cout<<this->paisesVuelo<<endl;

                row3[columRecord.tmcCapacidad] = colaEmirates.top()->getCantidad();
                row3[columRecord.tmcAvion] = colaEmirates.top()->getNombre();


            }
            colaEmirates.pop();
        }
        //    this->paisesVuelo = colaEmirates.top()->getOrigen()+" - "+colaEmirates.top()->getDestino();
        //        cout<<"info paises"<<this->paisesVuelo<<endl;

    } else if (this->filtro == "Jet Blue") {
        for (int i = 0; i < tamanoJetblue; i++) {
            if (atoi(colaJetblue.top()->getHoraSalida().c_str()) > hora) {
                Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
                row3[columRecord.tmcHorasalida] = colaJetblue.top()->getHoraSalida();
                row3[columRecord.tmcHorallegada] = colaJetblue.top()->getHoraLlegada();
                row3[columRecord.tmcOrigen] = colaJetblue.top()->getOrigen();
                row3[columRecord.tmcDestino] = colaJetblue.top()->getDestino();
                row3[columRecord.tmcCapacidad] = colaJetblue.top()->getCantidad();
                row3[columRecord.tmcAvion] = colaJetblue.top()->getNombre();

                //        grafo.AnadirNodo(colaJetblue.top()->getOrigen());
                //        grafo.AnadirNodo(colaJetblue.top()->getDestino());


            }
            colaJetblue.pop();
        }
    } else if (this->filtro == "Avianca") {
        for (int i = 0; i < tamanoAvianca; i++) {
            cout << "hora salida" << colaAvianca.top()->getHoraSalida() << ", hora real " << hora << endl;
            if (atoi(colaAvianca.top()->getHoraSalida().c_str()) > hora) {
                Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
                row3[columRecord.tmcHorasalida] = colaAvianca.top()->getHoraSalida();
                row3[columRecord.tmcHorallegada] = colaAvianca.top()->getHoraLlegada();
                row3[columRecord.tmcOrigen] = colaAvianca.top()->getOrigen();
                row3[columRecord.tmcDestino] = colaAvianca.top()->getDestino();
                row3[columRecord.tmcCapacidad] = colaAvianca.top()->getCantidad();
                row3[columRecord.tmcAvion] = colaAvianca.top()->getNombre();


                //this->paisesVuelo = colaAvianca.top()->getOrigen()+" - "+colaAvianca.top()->getDestino();

                //        grafo.AnadirNodo(colaAvianca.top()->getOrigen());
                //        cout<<"\nAhora con destino"<<endl;
                //        grafo.AnadirNodo(colaAvianca.top()->getDestino());


            }
            colaAvianca.pop();
        }
    } else if (this->filtro == "Copa Airlines") {
        for (int i = 0; i < tamanoCopa; i++) {
            if (atoi(colaCopa.top()->getHoraSalida().c_str()) > hora) {
                Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
                row3[columRecord.tmcHorasalida] = colaCopa.top()->getHoraSalida();
                row3[columRecord.tmcHorallegada] = colaCopa.top()->getHoraLlegada();
                row3[columRecord.tmcOrigen] = colaCopa.top()->getOrigen();
                row3[columRecord.tmcDestino] = colaCopa.top()->getDestino();
                row3[columRecord.tmcCapacidad] = colaCopa.top()->getCantidad();
                row3[columRecord.tmcAvion] = colaCopa.top()->getNombre();

            }
            colaCopa.pop();
        }
    } else if (this->filtro == "Volaris") {
        for (int i = 0; i < tamanoVolaris; i++) {
            if (atoi(colaVolaris.top()->getHoraSalida().c_str()) > hora) {
                Gtk::TreeModel::Row row3 = *(m_refTreeModel->append());
                row3[columRecord.tmcHorasalida] = colaVolaris.top()->getHoraSalida();
                row3[columRecord.tmcHorallegada] = colaVolaris.top()->getHoraLlegada();
                row3[columRecord.tmcOrigen] = colaVolaris.top()->getOrigen();
                row3[columRecord.tmcDestino] = colaVolaris.top()->getDestino();
                row3[columRecord.tmcCapacidad] = colaVolaris.top()->getCantidad();
                row3[columRecord.tmcAvion] = colaVolaris.top()->getNombre();

            }
            colaVolaris.pop();
        }
    }

}

//string MostrarItinerario::getPaisesVuelo(){
//    return this->paisesVuelo;
//}

void MostrarItinerario::onButtonClickedFiltrarTabla() {

}

void MostrarItinerario::onButtonClickedGuardarVuelo() {
    cout << "Guardar Vuelo arriba" << endl;
    this->refTreeSelection = m_TreeView.get_selection();
    this->iter = this->refTreeSelection->get_selected();
    if(iter) //If anything is selected
    {
    Gtk::TreeModel::Row row3 = *iter;
    //Do something with the row.
    cout<<"row 3 seleccionada"<<endl;
    //cout<<row3.get_model_gobject()<<endl;
    }
    
    
}

MostrarItinerario::~MostrarItinerario() {
}
