/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yareth
 *
 * Created on 5 de junio de 2020, 03:36 PM
 */

#include <cstdlib>
#include "MainWindows.h"
#include "ListaAerolineas.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Glib::RefPtr<Gtk::Application> app =
            Gtk::Application::create(argc, argv, "titulo");
    MainWindows window;
    return app->run(window);
    return 0;
}

