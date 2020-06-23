

#include "Vuelo_2.h"
#include "ColaAviones.h"

Vuelo::Vuelo(int posX, int posY, ColaAviones colaAviones) {
    this->posX = posX;
    this->posY = posY;
    this->colaAviones = colaAviones;
    this->image=Gdk::Pixbuf::create_from_file("assets/plane(1).png");
}//Contructor sobrecargado

Vuelo::Vuelo(int posX, int posY) {
    this->posX = posX;
    this->posY = posY;
    this->image=Gdk::Pixbuf::create_from_file("assets/plane(1).png");
}//Contructor sobrecargado

Vuelo::Vuelo() {
    this->image=Gdk::Pixbuf::create_from_file("assets/plane(1).png");
    spawn();
}//Contructor sobrecargado

void Vuelo::spawn() {
        //srand(time(NULL));
        this->posX=(rand() % (20) * this->image->get_width());
        this->posY=(rand() % (12) * this->image->get_height());
    }//fin spawn,es para aparecer en un sitio aleatorio

Vuelo::~Vuelo() {
}

int Vuelo::getPosX(){
    return this->posX;
    
}

void Vuelo::setPosX(int posX){
    this->posX = this->posX;

}

int Vuelo::getPosY(){
    return this->posY;
    
}

void Vuelo::setPosY(int posY){
    this->posY = this->posY;

}

void Vuelo::draw(const Cairo::RefPtr<Cairo::Context>& cr){

       Gdk::Cairo::set_source_pixbuf(cr, this->image, this->posX, this->posY);
       cr->rectangle(this->posX, this->posY, this->image->get_width(), this->image->get_height());
       cr->fill();
        
} // draw

void Vuelo::start(){
        pthread_create(&vueloThread, 0, run, this);
    }
    
    void Vuelo::wait(){
        (void)pthread_join(vueloThread, NULL);
    }

void Vuelo::posicionRandom(){

        int i = ((int)(rand()%30) * 40);
        int j = ((int)(rand()%20) * 40);
        this->setPosX(i);
        this->setPosY(j);
        
    }

 void* Vuelo::run(void* arg){   
        Vuelo* vT=reinterpret_cast<Vuelo*>(arg);
         vT->animate();
        return 0;    
    } // run 

void Vuelo::animate(){
        
        while(true){
            
            usleep(500000);
            posicionRandom();
        
        }
        
    }


std::string Vuelo::toString(){
    std::string result;

//    result = 
//           
//             +"\nPosX: "+this->posX
//             +"\nPosY: "+this->posY
//             +"\nAvion en la cola: ";
//           
    return result;
    
}



