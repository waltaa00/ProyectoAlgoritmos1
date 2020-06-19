/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OrigenDestinoDataSingleton.h
 * Author: yareth
 *
 * Created on 18 de junio de 2020, 07:19 PM
 */

#ifndef ORIGENDESTINODATASINGLETON_H
#define ORIGENDESTINODATASINGLETON_H
#include <string>
#include <vector>
using namespace std;
class OrigenDestinoDataSingleton {
public:
    static OrigenDestinoDataSingleton* GetInstance();

    void guardarOrigenDestino(string origen,string destino);
    
    vector<string> recuperarOrigenDestino();
private:
    static OrigenDestinoDataSingleton* instance;
    vector<string> origenDestino;

    OrigenDestinoDataSingleton();

};
//OrigenDestinoDataSingleton* OrigenDestinoDataSingleton::instance = 0;

#endif /* ORIGENDESTINODATASINGLETON_H */

