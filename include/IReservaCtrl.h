#ifndef IRESERVACTRL_H
#define IRESERVACTRL_H

//#include "Mascota.h"
using namespace std;

class : IReservaCtrl {
   public:
     virtual static ReservaCtrl * getInstancia() = 0;
     virtual void seleccionarFuncion(int nroFuncion) = 0;
     virtual int ingresarDatosReserva(int cantAsientos, DtTarjeta tarjeta) = 0;
     virtual int calcularPrecioTotal() = 0;
     virtual void crearReserva() = 0;
     virtual bool validarDatosReserva(DtTarjeta, int) = 0;
     virtual ~IReservaCtrl(){};
};

#endif
