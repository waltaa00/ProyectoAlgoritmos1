/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Usuario_2.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <memory>
#include <bits/stl_vector.h>



/* 
 * File:   UsuarioData.h
 * Author: diego
 *
 * Created on 22 de junio de 2020, 05:22 PM
 */

using namespace std;

#ifndef USUARIODATA_H
#define USUARIODATA_H

class UsuarioData {
public:
    UsuarioData();

    virtual ~UsuarioData();
    
    
    void registrarUsuarios(Usuario *usuario);
    vector<Usuario> obtenerUsuarios();
private:
    
        ofstream archivo;
        vector<Usuario> vectorUsuarios;
};

#endif /* USUARIODATA_H */