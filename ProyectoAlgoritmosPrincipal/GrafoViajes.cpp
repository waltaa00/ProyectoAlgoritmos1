/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GrafoViajes.cpp
 * Author: mint
 * 
 * Created on June 14, 2020, 3:35 PM
 */

#include "GrafoViajes.h"

GrafoViajes::GrafoViajes() {
    
    int i, j;
    for (i = 0; i < MAX_NODOS; i++){
    Nodos [i].Existe = false;
    Nodos [i].listaArcosSalida = 0;
    Nodos [i].listaArcosEntrada = 0;
    }
    
}//Constructor


void GrafoViajes::AnadirNodo(ValorNodo viaje){

    int aux = 0;
    bool boolaux;
    
    while((Nodos [aux].Existe == true) && (aux < MAX_NODOS)){
        aux++;
        
        if(aux == MAX_NODOS){
            boolaux = false;
        } else {
            boolaux = true;
            Nodos [aux].Existe = true;
            Nodos [aux].info = viaje;
        }
        
    }


}


void GrafoViajes::AnadirArco(ValorNodo origen, ValorNodo destino, ValorArco viaje){
    int i_aux=0, j_aux=0;
    bool b_aux = false;
    
    while((i_aux < MAX_NODOS) && (Nodos [i_aux].Existe) && (Nodos [i_aux].info != origen)){
        i_aux++;
        
        if(i_aux == MAX_NODOS){
            b_aux = false;
        }else{
            while((j_aux < MAX_NODOS) && (Nodos [j_aux].Existe) && (Nodos[j_aux].info != destino)){
                if(j_aux == MAX_NODOS){
                    b_aux = false;
                } else {
                    
                } if(Arcos[i_aux][j_aux].Existe){
                    b_aux = false;
                } else {
                    b_aux = true;
                    Arcos [i_aux][j_aux].Existe = true;
                    Arcos [i_aux][j_aux].info = viaje;
                    
                }
            }//fin segundo while
            cout<<"Informacion arista: "<<viaje<<endl;
            
        }
        
    }//fin primer while
    
    
    
}


GrafoViajes::GrafoViajes(const GrafoViajes& orig) {
}

GrafoViajes::~GrafoViajes() {
}

