/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MuestraDestinos.h
 * Author: yareth
 *
 * Created on 15 de junio de 2020, 06:26 PM
 */

#ifndef MUESTRADESTINOS_H
#define MUESTRADESTINOS_H

#include "Drawing.h"


class MuestraDestinos:public Gtk::Window{
public:
    MuestraDestinos();
    virtual ~MuestraDestinos();
private:
    Drawing panelDibujo;
};

#endif /* MUESTRADESTINOS_H */

