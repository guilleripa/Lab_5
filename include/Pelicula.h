#ifndef PELICULA_H
#define PELICULA_H

#include <vector>
#include <map>
#include "Funcion.h"
#include "Comentario.h"
#include "Puntaje.h"

using namespace std;

class Pelicula {
  private:
    int ref;
    string titulo;
    string sinopsis;
    string poster;
    vector<Puntaje*> puntajes;
    map<int, Comentario*> comentarios;
    map<int, Funcion*> funciones;
  public:
    Pelicula(int, string, string, string);
    int getRef();
    string getTitulo();
    string getSinopsis();
    string getPoster();
    int getPuntajePromedio();
    vector<string> obtenerCinesConFunciones();
    vector<string> obtenerFuturasFuncionesEnCine(int);
    vector<Puntaje*> getPuntajes();
    map<int,Comentario*> getComentarios();
    map<int,Funcion*> getFunciones();
    void addPuntaje(Puntaje*);
    void addComentario(Comentario*);
    void addFuncion(Funcion*);
};

#endif 