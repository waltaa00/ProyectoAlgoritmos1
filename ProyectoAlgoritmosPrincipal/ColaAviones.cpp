

#include "ColaAviones.h"

ColaAviones::ColaAviones() {
    //Avion(string nombre, string cantidad,string destino, string origen, string horaSalida, string horaLlegada);
    colaEmirates.push(new Avion("Boeing757", "350 pasajeros", "Bangladesh", "Costa Rica", "8:40", "15:25"));
    colaEmirates.push(new Avion("Boeing567", "220 pasajeros", "USA", "Panama", "13:11", "9:10"));
    colaEmirates.push(new Avion("Boeing567", "180 pasajeros", "Guatemala", "Panama", "17:11", "19:47"));
    colaEmirates.push(new Avion("AirForce1", "420 pasajeros", "Jamaica", "Colombia", "23:00", "4:20"));
    
    colaCopa.push(new Avion("Boeing567", "220 pasajeros", "USA", "Panama", "13:11", "9:10"));
    colaCopa.push(new Avion("TheCleaner", "120 pasajeros", "India", "Canada", "15:11", "19:10"));
    colaCopa.push(new Avion("JurassicPark", "130 pasajeros", "India", "Canada", "15:11", "19:10"));
    colaCopa.push(new Avion("Boeing4560", "220 pasajeros", "Costa Rica", "USA", "19:17", "22:26"));
    colaCopa.push(new Avion("Discovery", "160 pasajeros", "Uruguay", "Brasil", "22:10", "23:40"));
    colaCopa.push(new Avion("NoLoSeRick", "420 pasajeros", "Jamaica", "Colombia", "23:00", "4:20"));
    colaCopa.push(new Avion("RoloViajes", "225 pasajeros", "Costa Rica", "Brasil", "23:23", "2:55"));

    colaAvianca.push(new Avion("Marc12", "120 pasajeros", "Nicaragua", "Paraguay", "13:00", "14:20"));
    colaAvianca.push(new Avion("Jordan1", "120 pasajeros", "USA", "Colombia", "17:00", "20:20"));
    colaAvianca.push(new Avion("Jordan4", "145 pasajeros", "USA", "Costa Rica", "19:00", "22:15"));
    colaAvianca.push(new Avion("Yeezys", "205 pasajeros", "Panama", "Colombia", "20:03", "22:42"));
    colaAvianca.push(new Avion("Balenciaga1", "212 pasajeros", "Costa Rica", "Venezuela", "21:00", "1:50"));
    colaAvianca.push(new Avion("GucciTwo", "189 pasajeros", "Grecia", "Francia", "22:10", "23:55"));
    //pushAvianca("","","","","","");

    colaVolaris.push(new Avion("Boeing707", "305 pasajeros", "USA", "Canada", "9:18", "11:43"));
    colaVolaris.push(new Avion("Boeing311", "155 pasajeros", "USA", "Costa Rica", "13:11", "14:05"));
    colaVolaris.push(new Avion("Boeing303", "170 pasajeros", "USA", "Panama", "15:11", "19:10"));
    colaVolaris.push(new Avion("Boeing007", "205 pasajeros", "Colombia", "Panama", "17:11", "20:30"));
    colaVolaris.push(new Avion("SpaceX", "190 pasajeros", "USA", "Panama", "21:15", "23:50"));
    colaVolaris.push(new Avion("Boeing345", "110 pasajeros", "Costa Rica", "Nicarague", "22:02", "23:20"));

    colaJetblue.push(new Avion("DrakesPlane", "50 pasajeros", "Canada", "Costa Rica", "16:00", "19:03"));
    colaJetblue.push(new Avion("LilYatchy", "195 pasajeros", "India", "USA", "18:00", "22:21"));
    colaJetblue.push(new Avion("FuturesPlane", "130 pasajeros", "USA", "Mexico", "20:00", "21:35"));
    colaJetblue.push(new Avion("LilYatchy", "150 pasajeros", "USA", "Canada", "22:00", "23:45"));

}//Constructor

//gets
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

//metodos pop
void ColaAviones::pushAvianca(string nombre, string cantidad, string destino, string origen, string horaSalida, string horaLlegada){
    colaAvianca.push(new Avion(nombre, cantidad, destino, origen, horaSalida, horaLlegada));
}

void ColaAviones::pushEmirates(string nombre, string cantidad, string destino, string origen, string horaSalida, string horaLlegada){
    colaEmirates.push(new Avion(nombre, cantidad, destino, origen, horaSalida, horaLlegada));
}

void ColaAviones::pushCopa(string nombre, string cantidad, string destino, string origen, string horaSalida, string horaLlegada){
    colaCopa.push(new Avion(nombre, cantidad, destino, origen, horaSalida, horaLlegada));
}

void ColaAviones::pushVolaris(string nombre, string cantidad, string destino, string origen, string horaSalida, string horaLlegada){
    colaVolaris.push(new Avion(nombre, cantidad, destino, origen, horaSalida, horaLlegada));
}

void ColaAviones::pushJetblue(string nombre, string cantidad, string destino, string origen, string horaSalida, string horaLlegada){
    colaJetblue.push(new Avion(nombre, cantidad, destino, origen, horaSalida, horaLlegada));
}

//metodos pop
void ColaAviones::popAvianca(){
    colaAvianca.pop();
}

void ColaAviones::popEmirates(){
    colaEmirates.pop();
}

void ColaAviones::popCopa(){
    colaCopa.pop();
}

void ColaAviones::popVolaris(){
    colaVolaris.pop();
}

void ColaAviones::popJetblue(){
    colaJetblue.pop();
}