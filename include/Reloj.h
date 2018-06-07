#ifndef RELOJ_H
#define RELOJ_H

#include "DtFech.h"

using namespace std;

class Reloj {
  private: 
    int dia;
    int mes;
    int anio;
    int hora;
    int minutos;
  public:
    Reloj(string);
    void setFecha(string);
    DtFecha getFecha();
};

#endif