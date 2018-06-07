#include "../include/ReservaCtrl.h"

using namespace std;

ReservaCtrl * ReservaCtrl:instancai = NULL;
ReservaCtrl()::ReservaCtrl(){
   
}

ReservaCtrl * ReservaCtrl::getInstancia() {
   if(instancia == NULL)
      instancia = new ReservaCtrl();
   return instancia;
}

int ReservaCtrl::getNroFuncion(){
  return this->nroFuncion;
}
string ReservaCtrl::getNomPeli(){
  return this->nomPeli;
}
int ReservaCtrl::getCantAsientos(){
  return this->cantAsientos;
}

void ReservaCtrl::setNroFuncion(int nroFuncion){
  this->nroFuncion = nroFuncion;
}
void ReservaCtrl::setNomPeli(string nomPeli){
  this->nomPeli = nomPeli;
}
void ReservaCtrl::setTarjeta(DtTarjeta tarjeta){
  this->tarjeta = tarjeta;
}

int ReservaCtrl::ingresarDatosReserva(int cantAsientos, DtTarjeta tarjeta){
   
}

int ReservaCtrl::calcularPrecioTotal(){
   
}

vector<string> ReservaCtrl::listarPeliculas(){
  PeliculaCtrl* pc = PeliculaCtrl::getInstancia();
  return pc->listarPeliculas();
}

void ReservaCtrl::selccionarPelicula(string){
  nomPeli = nombre;
}

DtPosterYSinopsis ReservaCtrl::obtenerPosterYSinopsis(){
  PeliculaCtrl* pc = PeliculaCtrl::getInstancia();
  return pc->obtenerPosterYSinopsis(nomPeli);
}

vector<string> ReservaCtrl::obtenerCinesConFunciones(){
  PeliculaCtrl* pc = PeliculaCtrl::getInstancia();
  return pc->obtenerCinesConFunciones(nomPeli);
}

vector<string> ReservaCtrl::obtenerFuturasFuncionesEnCine(int cine){
  PeliculaCtrl* pc = PeliculaCtrl::getInstancia();
  return pc->obtenerFuturasFuncionesEnCine(cine, nomPeli);
}

void ReservaCtrl::seleccionarFuncion(int nroFuncion){ //IGUAL A setNroFuncion??? Revisar casos de uso
   nroFuncion = nroFuncion;
}


void ReservaCtrl::crearReserva(){ 
  
}