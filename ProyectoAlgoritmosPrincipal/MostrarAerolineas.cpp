/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "MostrarAerolineas.h"
#include <iostream>
#include <list>
using namespace std;

MostrarAerolineas::MostrarAerolineas() {
    this->set_title("Muestra Aerolineas");
    this->set_size_request(400, 300);
    initComponents();
    this->show_all_children();
}

MostrarAerolineas::~MostrarAerolineas() {

}

void MostrarAerolineas::initComponents() {
    aeroList = lA.getLista();

    //aeroList.push_front("Trivago");
    this->lblAerolinea.set_label(aeroList.front());
    this->fixed.put(this->lblAerolinea, 40, 40);
    this->add(fixed);
}

bool MostrarAerolineas::on_key_press_event(GdkEventKey* event) {
    if (event->keyval == GDK_KEY_Up) {
        string temp = aeroList.back();
        aeroList.pop_back();
        aeroList.push_front(temp);
        cout << aeroList.front() << endl;
        this->lblAerolinea.set_label(aeroList.front());

    } else if (event->keyval == GDK_KEY_Down) {
        string temp2 = aeroList.front();
        aeroList.pop_front();
        aeroList.push_back(temp2);
        cout << aeroList.front() << endl;
        this->lblAerolinea.set_label(aeroList.front());

    } else if (event->keyval == GDK_KEY_space) {
//        if (this->mostrarItinerarios != 0)
//            return;

        this->mostrarItinerarios = new MostrarItinerario();
        this->mostrarItinerarios->signal_hide().connect(sigc::mem_fun(*this, &MostrarAerolineas::aboutWinClose));
        this->mostrarItinerarios->show_all();
    }
}



void MostrarAerolineas::aboutWinClose() {

    this->mostrarItinerarios = 0;
}


