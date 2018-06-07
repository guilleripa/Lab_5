#include "../include/PeliculaCtrl.h"
#include "../include/DtPosterYSinopsis.h"
#include "../include/CineCtrl.h"
#include <vector>

using namespace std;

PeliculaCtrl* PeliculaCtrl::instancia = NULL;

PeliculaCtrl::PeliculaCtrl() {
   titulo = ""; //chequear
}

PeliculaCtrl * PeliculaCtrl::getInstancia() {
   if(instancia == NULL)
      instancia = new PeliculaCtrl();
   return instancia;
}

vector<string> PeliculaCtrl::listarPeliculas(){
   vector<string> pelis;
   for (itr = peliculas.begin(); itr != peliculas.end(); ++itr){
        pelis.push_back(itr->getTitulo());
    }
    
    return pelis;
}

void PeliculaCtrl::selccionarPelicula(string nombre){
   nomPeli = nombre;
}

DtPosterYSinopsis PeliculaCtrl::PeobtenerPosterYSinopsis(){
   Pelicula* peli = peliculas[nomPeli];
   
   string poster = peli->getPoster();
   string sinopsis = peli->getSinopsis();
   
   DtPosterYSinopsis data(poster, sinopsis);
   return data;
}

DtPosterYSinopsis PeliculaCtrl::PeobtenerPosterYSinopsis(string nombre){
   Pelicula* peli = peliculas[nombre];
   
   string poster = peli->getPoster();
   string sinopsis = peli->getSinopsis();
   
   DtPosterYSinopsis data(poster, sinopsis);
   return data;
}

vector<string> PeliculaCtrl::obtenerCinesConFunciones(){
   Pelicula* peli = peliculas[nomPeli];
   vector<string> cines = peli->obtenerCinesConFunciones();
   
   return cines;
}

vector<string> PeliculaCtrl::obtenerCinesConFunciones(string nombre){
   Pelicula* peli = peliculas[nombre];
   vector<string> cines = peli->obtenerCinesConFunciones();
   
   return cines;
}

vector<string> PeliculaCtrl::obtenerFuturasFuncionesEnCine(int nroCine){
   Pelicula* peli = peliculas[nomPeli];
   vector<string> funcs = peli->obtenerFuturasFuncionesEnCine(nroCine);

   return funcs;
}

vector<string> PeliculaCtrl::obtenerFuturasFuncionesEnCine(int nroCine, string nombre){
   Pelicula* peli = peliculas[nombre];
   vector<string> funcs = peli->obtenerFuturasFuncionesEnCine(nroCine);

   return funcs;
}