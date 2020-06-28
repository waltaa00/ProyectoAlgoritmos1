

#ifndef VUELO_H
#define VUELO_H

#include <string>
#include <sstream>
#include "iostream"
#include "Avion.h"
#include "ColaAviones.h"
#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <gtkmm.h>
#include "ctime"


using namespace std;

class Vuelo {
public:
    Vuelo(int posX, int posY);
    Vuelo();
    Vuelo(int posX, int posY, string origen, string destino);
    Vuelo(string origen, string destino);

    ~Vuelo();

    string toString();
    int getPosX();
    void setPosX(int posX);
    int getPosY();
    void setPosY(int posY);
    string getDestino() const;

    void setDestino(string destino);

    string getOrigen() const;

    void setOrigen(string origen);

    void draw(const Cairo::RefPtr<Cairo::Context>& cr);
    void posicionRandom();

    void spawn();
    void start();
    void wait();
    void animate();
    static void* run(void* arg);
    void avionSeleccionado();

private:

    
    int posX;
    int posY;
    ColaAviones* colaAviones;
    Glib::RefPtr<Gdk::Pixbuf> image;
    pthread_t vueloThread;
    string origen,destino;


};

#endif /* VUELO_H */

