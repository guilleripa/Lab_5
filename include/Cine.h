#ifndef CINE_H
#define CINE_H

#include <map>
#include <vector>
#include "Funcion.h"
using namespace std;

class Cine {
  private: 
    map<int, Funcion*> funciones;
    int ref;
    string direccion;
    int entrada;
  public:
    Cine(int, string, int);
    int getRef();
    string getDireccion();
    int getEntrada();
    //void addReserva(Reserva*); PAU
    map<int, Funcion*> getFunciones();
    void addFuncion(Funcion*)
    string toText();
    
};

#endif