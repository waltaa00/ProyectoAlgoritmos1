/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Drawing.h"

Drawing::Drawing() {
    try {
        fondo = Gdk::Pixbuf::create_from_file("assets/mapa.jpg");
    } catch (const Gio::ResourceError& ex) {
        std::cerr << "ResourceError: " << ex.what() << std::endl;
    } catch (const Gdk::PixbufError& ex) {
        std::cerr << "PixbufError: " << ex.what() << std::endl;
    }

    // Show at least a quarter of the image.
    if (fondo)
        set_size_request(fondo->get_width(), fondo->get_height());
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
    cr->paint();

    return true;

}

Drawing::~Drawing() {
}
