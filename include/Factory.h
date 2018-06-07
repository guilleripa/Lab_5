#ifndef FACTORY_H
#define FACTORY_H

//#include "Mascota.h"
using namespace std;

class : Factory {
  private: 
    static Factory * instancia;
    Factory();
      
  public:
    static Factory * getInstancia();
    IPeliculaCtrl getIPeliculaCtrl();
    ICineCtrl getICineCtrl();
    IReservaCtrl getIReservaCtrl();
    ISesionCtrl getISesionCtrl();
};

#endif
