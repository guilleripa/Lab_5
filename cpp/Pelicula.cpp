#include "../include/Pelicula.h"

#include <vector>

using namespace std;

Pelicula::Pelicula(string titulo, string sinopsis, string poster){
    this->titulo = titulo;
    this->sinopsis = sinopsis;
    this->poster = poster;
};

string Pelicula::getTitulo(){
  return titulo;
}

string Pelicula::getSinopsis(){
  return sinopsis;
}

int Pelicula::getPoster() {
  return poster;
}

vector<int> Pelicula::obtenerFuturasFuncionesEnPelicula(int pere){
   
}

void Pelicula::addReserva(Reserva r){
   
}

vector<string> Pelicula::obtenerCinesConFunciones(){
  vector<String> cines;
  Sala* sala;
  Cine* cine;
  for (itr = funciones.begin(); itr != funciones.end(); ++itr){
        sala = itr->getSala();
        cine = sala->getCine();
        cines.push_back(cine->toText());
    }
    
  return cines;
}

vector<string> Pelicula::obtenerFuturasFuncionesEnCine(int nroCine){
  vector<string> funcs;
  Sala* sala;
  Cine* cine;
  for (itr = funciones.begin(); itr != funciones.end(); ++itr){
        sala = itr->getSala();
        cine = sala->getCine();
        if(cine->getRef() == nroCine){
          funcs.push_back(itr->toText());
        }
    }
  return funcs;
}


