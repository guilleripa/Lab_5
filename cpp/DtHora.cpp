#include "../include/DtHora.h"
#include <time.h>
#include <stdlib.h>

DtHora::DtHora(){
  Reloj * r;
  r = Reloj::getInstancia();
  minuto = r->getMinuto();
  hora = r->getHora();
}

DtHora::DtHora(int minuto, int hora){
  this->minuto = minuto;
  this->hora = hora;
}

int DtHora::getMinuto(){
  return minuto;
}

int DtHora::getHora(){
  return hora;
}

string DtHora::toText(){
  string res = to_string(hora) + ":" + to_string(minuto);
  return res;
}