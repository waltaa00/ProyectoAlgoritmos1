/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UsuarioBusiness.h
 * Author: diego
 *
 * Created on 22 de junio de 2020, 06:28 PM
 */

#ifndef USUARIOBUSINESS_H
#define USUARIOBUSINESS_H

#include "Usuario_2.h"
#include "UsuarioData.h"



class UsuarioBusiness {
public:
    UsuarioBusiness();

    virtual ~UsuarioBusiness();
    
    void registrarUsuario(Usuario *usuario);
      
    vector<Usuario> obtenerUsuario();
    bool buscarUsuario(string nombre, string contrasenia);
private:
    UsuarioData usuarioData;;
    
    

};

#endif /* USUARIOBUSINESS_H */