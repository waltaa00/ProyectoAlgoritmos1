/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Drawing.h"

Drawing::Drawing() {
    try {
        fondo = Gdk::Pixbuf::create_from_file("assets/mapa2.png");
    } catch (const Gio::ResourceError& ex) {
        std::cerr << "ResourceError: " << ex.what() << std::endl;
    } catch (const Gdk::PixbufError& ex) {
        std::cerr << "PixbufError: " << ex.what() << std::endl;
    }

    // Show at least a quarter of the image.
    if (fondo)
        set_size_request(fondo->get_width(), fondo->get_height());


    this->vuelo = new Vuelo();
    this->vuelo->start();

    this->cola = new ColaAviones();

    this->origenDestino = new OrigenDestinoBusiness();
    vectorOrigenDestino = this->origenDestino->recuperarOrigenDestino();

    vuelosTiempoReal();
    vuelosSeleccionados();

}

void Drawing::updateDrawingArea() {
    this->queue_draw();
}

bool Drawing::on_draw(const Cairo::RefPtr<Cairo::Context>& cr) {



    if (!fondo)
        return false;

    Gtk::Allocation allocation = get_allocation();
    const int width = allocation.get_width();
    const int height = allocation.get_height();

    // Draw the image in the middle of the drawing area, or (if the image is
    // larger than the drawing area) draw the middle part of the image.
    Gdk::Cairo::set_source_pixbuf(cr, fondo,
            (width - fondo->get_width()) / 2, (height - fondo->get_height()) / 2);
    cr->paint(); //se pinta el fondo

    for (int i = 0; i < vuelos.size(); i++) {
        this->vuelos.at(i).draw(cr);
    }
    //}
    cr->set_source_rgb(0, 0, 0); //color del texto
    for (int i = 0; i < vuelos.size(); i++) {
        this->draw_text2(cr, this->vuelos.at(i).getPosX() - 10, this->vuelos.at(i).getPosY() - 30, i);
    }
    return true;

}

void Drawing::draw_text(const Cairo::RefPtr<Cairo::Context>& cr, int posX, int posY) {
    if (this->vectorOrigenDestino.size() == 0) {
        string text = this->vuelo->getOrigen() + " - " + this->vuelo->getDestino();
        Pango::FontDescription font;
        font.set_size(15 * Pango::SCALE);
        font.set_family("Mukti Narrow"); //Monospace Mukti Narrow
        font.set_weight(Pango::WEIGHT_BOLD);
        //font.set_style();
        Glib::RefPtr<Pango::Layout> layout = create_pango_layout(text);
        layout->set_font_description(font);
        int text_width;
        int text_height;
        //get the text dimensions (it updates the variables -- by reference)
        layout->get_pixel_size(text_width, text_height);
        // Position the text in the middle
        cr->move_to(posX, posY);
        layout->show_in_cairo_context(cr);


    } else {
        string text = vectorOrigenDestino.at(0) + " - " + vectorOrigenDestino.at(1);
        Pango::FontDescription font;
        font.set_size(15 * Pango::SCALE);
        font.set_family("Mukti Narrow"); //Monospace Mukti Narrow
        font.set_weight(Pango::WEIGHT_BOLD);
        //font.set_style();
        Glib::RefPtr<Pango::Layout> layout = create_pango_layout(text);
        layout->set_font_description(font);
        int text_width;
        int text_height;
        //get the text dimensions (it updates the variables -- by reference)
        layout->get_pixel_size(text_width, text_height);
        // Position the text in the middle
        cr->move_to(posX, posY);
        layout->show_in_cairo_context(cr);
    }

} // draw_text

void Drawing::draw_text2(const Cairo::RefPtr<Cairo::Context>& cr, int posX, int posY, int origendestino) {
    string text = vuelos.at(origendestino).getOrigen() + " - " + vuelos.at(origendestino).getDestino();
    Pango::FontDescription font;
    font.set_size(15 * Pango::SCALE);
    font.set_family("Mukti Narrow"); //Monospace Mukti Narrow
    font.set_weight(Pango::WEIGHT_BOLD);
    //font.set_style();
    Glib::RefPtr<Pango::Layout> layout = create_pango_layout(text);
    layout->set_font_description(font);
    int text_width;
    int text_height;
    //get the text dimensions (it updates the variables -- by reference)
    layout->get_pixel_size(text_width, text_height);
    // Position the text in the middle
    cr->move_to(posX, posY);
    layout->show_in_cairo_context(cr);
}

void Drawing::vuelosTiempoReal() {
    this->colaEmirates = cola->getColaEmirates();
    this->colaAvianca = cola->getColaAvianca();
    this->colaJetblue = cola->getColaJetblue();
    this->colaCopa = cola->getColaCopa();
    this->colaVolaris = cola->getColaVolaris();
    time_t t = time(0);
    tm* now = localtime(&t);
    int hora = now->tm_hour;
    int tamanoEmirates = colaEmirates.size();
    int tamanoAvianca = colaAvianca.size();
    int tamanoCopa = colaCopa.size();
    int tamanoVolaris = colaVolaris.size();
    int tamanoJetblue = colaJetblue.size();

    for (int i = 0; i < tamanoEmirates; i++) {
        if (atoi(colaEmirates.top()->getHoraSalida().c_str()) > hora) {
            Vuelo v(colaEmirates.top()->getOrigen(), colaEmirates.top()->getDestino());
            vuelos.push_back(v);
        }
        colaEmirates.pop();
    }
    for (int i = 0; i < tamanoJetblue; i++) {
        if (atoi(colaJetblue.top()->getHoraSalida().c_str()) > hora) {
            Vuelo v(colaJetblue.top()->getOrigen(), colaJetblue.top()->getDestino());
            vuelos.push_back(v);
        }
        colaJetblue.pop();
    }
    for (int i = 0; i < tamanoAvianca; i++) {;
        if (atoi(colaAvianca.top()->getHoraSalida().c_str()) > hora) {
            Vuelo v(colaAvianca.top()->getOrigen(), colaAvianca.top()->getDestino());
            vuelos.push_back(v);
        }
        colaAvianca.pop();
    }
    for (int i = 0; i < tamanoCopa; i++) {
        if (atoi(colaCopa.top()->getHoraSalida().c_str()) > hora) {
            Vuelo v(colaCopa.top()->getOrigen(), colaCopa.top()->getDestino());
            vuelos.push_back(v);
        }
        colaCopa.pop();
    }
    for (int i = 0; i < tamanoVolaris; i++) {
        if (atoi(colaVolaris.top()->getHoraSalida().c_str()) > hora) {
            Vuelo v(colaVolaris.top()->getOrigen(), colaVolaris.top()->getDestino());
            vuelos.push_back(v);
        }
        colaVolaris.pop();
    }
}

void Drawing::vuelosSeleccionados() {
    for (int i = 0; i < vuelos.size(); i++) {
        for (int j = 0; j < vectorOrigenDestino.size(); j += 2) {
            if (vuelos.at(i).getOrigen() == vectorOrigenDestino.at(j)) {
                if (vuelos.at(i).getDestino() == vectorOrigenDestino.at(j + 1)) {
                    vuelos.at(i).avionSeleccionado();
                }
            }
        }
    }
}

Drawing::~Drawing() {
}
