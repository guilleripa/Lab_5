#ifndef RESERVA_H
#define RESERVA_H

#include "DtTarjeta.h"
#include "Usuario.h"
#include "Pelicula.h"

using namespace std;

class Reserva {
  private: 
    Usuario * usuario;
    Funcion * funcion,
    int cantAsientos;
    int costo;
    DtTarjeta tarjeta;
    
  public:
    Reserva(int, Financiera*, Usuario*, Funcion*); //antes decia DtTarjeta en vez de financiera
    int getCantAsientos();
    int getCosto(); //costo total, multiplicarlo por cantAsientos y el precio del cine y el descuento
    //DtTarjeta getTarjeta();
    Financiera* getFinanciera();
    Funcion* getFuncion();
    Usuario* getUsuario();
};

#endif