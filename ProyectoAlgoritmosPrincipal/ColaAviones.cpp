

#include "ColaAviones.h"

ColaAviones::ColaAviones() {
    //Avion(string nombre, string cantidad,string destino, string origen, string horaSalida, string horaLlegada);
    colaEmirates.push(new Avion("Boeing757", "350 pasajeros", "Bangladesh", "Costa Rica", "8:40", "15:25"));
    colaEmirates.push(new Avion("Boeing567", "220 pasajeros", "USA", "Panama", "13:11", "9:10"));
    colaEmirates.push(new Avion("AirForce1", "420 pasajeros", "Jamaica", "Colombia", "23:00", "4:20"));
    
    colaCopa.push(new Avion("Boeing567", "220 pasajeros", "USA", "Panama", "13:11", "9:10"));
    colaCopa.push(new Avion("AirForce1", "420 pasajeros", "Jamaica", "Colombia", "23:00", "4:20"));
    
    
    colaAvianca.push(new Avion("Marc12", "120 pasajeros", "Nicarague", "Paraguay", "13:00", "14:20"));
    colaAvianca.push(new Avion("Balenciaga1", "212 pasajeros", "Costa Rica", "Venezuela", "21:00", "1:50"));
     colaAvianca.push(new Avion("GucciTwo", "189 pasajeros", "Grecia", "Francia", "22:10", "23:55"));
   
    colaVolaris.push(new Avion("Boeing707", "305 pasajeros", "USA", "Canada", "9:18", "11:43"));
    colaVolaris.push(new Avion("Boeing311", "155 pasajeros", "USA", "Costa Rica", "13:11", "14:05"));
    colaVolaris.push(new Avion("Boeing567", "170 pasajeros", "USA", "Panama", "15:11", "19:10"));
   
    
    colaJetblue.push(new Avion("DrakesPlane", "50 pasajeros", "USA", "Costa Rica", "16:00", "17:03"));
    
}

ColaAviones::ColaAviones(const ColaAviones& orig) {
}

ColaAviones::~ColaAviones() {
}

priority_queue <Avion*> ColaAviones::getColaEmirates() {
    return colaEmirates;
}

priority_queue <Avion*> ColaAviones::getColaCopa() {
    return colaCopa;
}

priority_queue <Avion*> ColaAviones::getColaAvianca() {
    return colaAvianca;
}

priority_queue <Avion*> ColaAviones::getColaVolaris() {
    return colaVolaris;
}

priority_queue <Avion*> ColaAviones::getColaJetblue() {
    return colaJetblue;
}