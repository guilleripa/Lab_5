#ifndef COMENTARIO_H
#define COMENTARIO_H

#include "Pelicula.h"
#include "Usuario.h"

#include <map>

using namespace std;

class Comentario {
  private: 
    int idComentario;
    string texto;
    Usuario * usuario;
    Pelicula * pelicula;
    map<int,Comentario*> comentHijos;
  public:
    Comentario(string, Usuario*, Pelicula*);
    void addComentarioHijo(Comentario*);
    int getId();
    int getTexto();
};

#endif