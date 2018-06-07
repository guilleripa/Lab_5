#ifndef PELICULACTRL_H
#define PELICULACTRL_H

#include "CineCtrl.h" //o en el cpp?
#include <map>
#include <vector>
#include "Pelicula.h"
#include "Cine.h"
using namespace std;

class PeliculaCtrl {
  private:
    map<string, Pelicula*> peliculas;
    static PeliculaCtrl * instancia;
    PeliculaCtrl();
    string nomPeli;
  public:
    static PeliculaCtrl * getInstancia();
    vector<string> listarPeliculas();
    void selccionarPelicula(string);
    DtPosterYSinopsis obtenerPosterYSinopsis();
    vector<string> obtenerCinesConFunciones();
    vector<string> obtenerFuturasFuncionesEnCine(int);
    void eliminarPelicula();
    void finalizar();
    void addPelicula(Pelicula*);
    
    //Utilizadas por ReservaCtrl para el caso de uso Crear Reserva
    DtPosterYSinopsis obtenerPosterYSinopsis(string);
    vector<string> obtenerCinesConFunciones(string);
    vector<string> obtenerFuturasFuncionesEnCine(int, string);
};

#endif