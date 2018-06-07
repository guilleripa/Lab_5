#ifndef PUNTAJE_H
#define PUNTAJE_H

#include "Usuario.h"
#include "Pelicula.h"

using namespace std;

class Puntaje {
  private: 
    int puntaje;
    Usuario * usuario;
    Pelicula * pelicula;
  public:
    Puntaje(int, Usuario*, Pelicula*);
    Usuario * getUsuario();
    Pelicula * getPelicula();
    int getPuntaje();
    void setPuntaje(int); //hay que poner "int puntaje"
};

#endif