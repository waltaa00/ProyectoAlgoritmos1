/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GrafoViajes.h
 * Author: mint
 *
 * Created on June 14, 2020, 3:35 PM
 */

#ifndef GRAFOVIAJES_H
#define GRAFOVIAJES_H

#include "Avion_2.h"


const int MAX_NODOS = 15;

typedef string ValorNodo;
typedef string ValorArco;
typedef struct Arco * punteroArco;

struct Arco{
    ValorArco info;
    bool Existe;
    int Origen;
    int Destino;
    punteroArco sigArcoSalida;
    punteroArco sigArcoEntrada;
    
};

struct Nodo{
    ValorNodo info;
    bool Existe;
    punteroArco listaArcosSalida;
    punteroArco listaArcosEntrada;
};

using namespace std;

class GrafoViajes {
public:
    GrafoViajes();
    GrafoViajes(const GrafoViajes& orig);
    virtual ~GrafoViajes();
    
    bool isEmpty (void);
    bool Grafo_Lleno (void);
    int NumeroNodos (void);
    int NumeroArcos (void);
    bool ObtenerValorArco (Arco, ValorArco &);
    void AnadirNodo (ValorNodo);
    void AnadirArco (ValorNodo, ValorNodo);
    bool EliminarNodo (ValorNodo);
    bool EliminarArco (ValorNodo, ValorNodo);
    
private:
    Nodo Nodos[MAX_NODOS];
    Arco Arcos [MAX_NODOS][MAX_NODOS];

};

#endif /* GRAFOVIAJES_H */

