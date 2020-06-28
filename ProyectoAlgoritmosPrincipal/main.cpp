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
#include "time.h"
#include <ctime>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //cout<<"Cambio Walter"<<endl;
    
    //prueba tiempo
    time_t t = time(0);
    tm* now = localtime(&t);
    int hora = now->tm_hour;
    int minutos = now->tm_min;
    int segundos = now->tm_sec;
//    cout << " tiempo en horas: "<<hora<<"\n tiempo en minutos: "<<
//            minutos<<"\n tiempo en segundos: "<<segundos<<endl;
    
     UsuarioData uD;
    uD.obtenerUsuarios();
    
    Glib::RefPtr<Gtk::Application> app =
            Gtk::Application::create(argc, argv, "titulo");
    MainWindows window;
    return app->run(window);
    return 0;
    
   
    
}

