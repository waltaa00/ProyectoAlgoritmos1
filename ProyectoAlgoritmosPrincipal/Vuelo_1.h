

#ifndef VUELO_H
#define VUELO_H

#include <string>
#include<sstream>
#include "iostream"


using namespace std;

class Vuelo {
public:
    Vuelo(string destino, string origen, string horaSalida, string horaLlegada);




    ~Vuelo();

    string toString();
    string getDestino();
    void setDestino(string destino);
    string getOrigen();
    void setOrigen(string origen);
    string getHoraSalida();
    void setHoraSalida(string horaSalida);
    string getHoraLlegada();
    void setHoraLlegada(string horaLLegada);




private:

    string destino;
    string origen;
    string horaSalida;
    string horaLlegada;



};

#endif /* VUELO_H */

