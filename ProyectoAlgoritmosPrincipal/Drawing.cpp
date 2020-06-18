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
    
    //this->texto = this->cola->getColaAvianca().top()->getOrigen();
    //cout<<"info paises: "<<this->texto<<endl;
    
   // cout<<"Prueba info paises: "<<mostrarItinerario-><<endl;
    
    
//    this->lblDestino.set_text("Destino");
//    this->fixed.put(this->lblDestino, 200, 200);
//    this->add(this->fixed);
    
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
    cr->paint();//se pinta el fondo
    
    this->vuelo->draw(cr);//se dibuja el avion
    
    cr->set_source_rgb(0,0,0);//color del texto
    this->draw_text(cr, this->vuelo->getPosX()-10, this->vuelo->getPosY()-30, "Origen - Destino");
    cout<<this->vuelo->getPosX()<<" , "<<this->vuelo->getPosY()<<endl;
    
//    string texto = mostrarItinerario->getPaisesVuelo();
//    this->draw_text(cr, 200, 200, texto);
    
    
    
    
    
    
    

    return true;

}

void Drawing::draw_text(const Cairo::RefPtr<Cairo::Context>& cr, int posX, int posY, string text) {

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

    } // draw_text


Drawing::~Drawing() {
}
