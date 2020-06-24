

#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include<sstream>
#include "iostream"


using namespace std;

class Usuario {
public:
    Usuario(string nombre, string edad, string pasaporte, string genero,  string nacionalidad);





    ~Usuario();

    string toString();
    string getNombre();
    void setNombre(string nombre);
    string getEdad();
    void setEdad(string edad);
    string getPasaporte();
    void setPasaporte(string pasaporte);
    string getGenero();
    void setGenero(string genero);
    string getNacionalidad();
    void setNacionalidad(string nacionalidad);



private:
    string nombre;
    string edad;
    string pasaporte;
    string genero;
    string nacionalidad;


};

#endif /* USUARIO_H */

