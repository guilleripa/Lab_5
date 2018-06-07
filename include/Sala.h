#ifndef SALA_H
#define SALA_H

#include "Cine.h"

using namespace std;

class Sala {
  private: 
    Cine * cine;
    int ref;
    int capacidad;
  public:
    Sala(int,int, Cine*);
    int getRef();
    int getCapacidad();
    Cine* getCine();
};

#endif