

#ifndef LISTAAEROLINEAS_H
#define LISTAAEROLINEAS_H
#include <list>


using namespace std;

class ListaAerolineas {
public:
    ListaAerolineas(){
        //lista = new list<>();
        lista.push_front("Avianca");
        lista.push_front("Copa Airlines");
        lista.push_front("Turri Viajes");
        lista.push_front("Emirates");
    }
    
    list<string> getLista(){
        return lista;
    }
    
    
private:
    list <string> lista;
    
    
    
};


#endif /* LISTAAEROLINEAS_H */

