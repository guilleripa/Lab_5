#ifndef FINANCIERA_H
#define FINANCIERA_H

#include "Pelicula.h"
#include "Usuario.h"

#include <map>

using namespace std;

class Financiera {
  private: 
    string nombre;
    int desc; 
  public:
    Financiera(string, string);
    int getNombre();
    int getDesc();
};

#endif