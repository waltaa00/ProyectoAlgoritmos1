/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OrigenDestinoBusiness.h
 * Author: yareth
 *
 * Created on 18 de junio de 2020, 07:27 PM
 */

#ifndef ORIGENDESTINOBUSINESS_H
#define ORIGENDESTINOBUSINESS_H

#include "OrigenDestinoDataSingleton.h"


class OrigenDestinoBusiness{
public:
    OrigenDestinoBusiness();
    
    void guardarOrigenDestino(string origen,string destino);
    
    vector<string> recuperarOrigenDestino();
    
    OrigenDestinoDataSingleton* getSingleton() const;

private:
    OrigenDestinoDataSingleton *singleton;

};

#endif /* ORIGENDESTINOBUSINESS_H */

