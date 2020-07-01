

#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include<sstream>
#include "iostream"



using namespace std;

class Usuario {
public:
    Usuario(string nombre, string edad, string pasaporte, string genero,  string nacionalidad, string contrasenia);





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
    string getContrasenia();
    void setContrasenia(string contrasenia);



private:
    string nombre;
    string edad;
    string pasaporte;
    string genero;
    string nacionalidad;
    string contrasenia;


};

#endif /* USUARIO_H */
