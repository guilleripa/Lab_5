#include "../include/Funcion.h"

using namespace std;

Funcion::Funcion(int nro, DtFecha fecha, DtHora hora, int duracion, Sala * sala){
   this->nro = nro;
   this->fecha = fecha;
   this->hora = hora;
   this->sala = sala;
   this->duracion = duracion;
}

void Funcion::addReserva(Reserva r){}

int Funcion::getNro(){
   return nro;
}

DtFecha Funcion::getFecha(){
   return Fecha;
}

DtHora Funcion::getHora(){
   return Hora;
}

string Funcion::toText(){
   string res = "Ref: " + to_string(nro) + ", Fecha: " + fecha.toText() + " " + hora.toText() + ", Duracion: " + to_string(duracion);
   return res;
}