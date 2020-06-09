

#ifndef AVION_H
#define AVION_H

#include <string>
#include<sstream>
#include "iostream"


using namespace std;

class Avion {
public:
    Avion(string nombre, string cantidad,string destino, string origen, string horaSalida, string horaLlegada);



    ~Avion();

    void setNombre(string nombre);
    string getNombre();
    void setCantidad(string cantidad);
    string getCantidad();
    string getDestino();
    void setDestino(string destino);
    string getOrigen();
    void setOrigen(string origen);
    string getHoraSalida();
    void setHoraSalida(string horaSalida);
    string getHoraLlegada();
    void setHoraLlegada(string horaLLegada);
    string toString();




private:
    string nombre;
    string cantidad;
    string destino;
    string origen;
    string horaSalida;
    string horaLlegada;

    // me hace falta agregar lo de los registros de vuelos y destinos


};

#endif /* AVION_H */

