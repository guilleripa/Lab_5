#include "../include/DtFecha.h"

DtFecha::DtFecha(){
    Reloj * r;
    r = Reloj::getInstancia();
    dia = r->getDia();
    mes = r->getMes();
    anio = r->getAnio();
}

DtFecha::DtFecha(int dia, int mes, int anio){
  this->dia = dia;
  this->mes = mes;
  this->anio = anio;
}

int DtFecha::getDia(){
  return dia;
}

int DtFecha::getMes(){
  return mes;
}

int DtFecha::getAnio(){
  return anio;
}

string DtFecha::toText(){
  string res = to_string(dia) + "/" + to_string(mes) + "/" + to_string(anio);
  return res;
}
