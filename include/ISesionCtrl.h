#ifndef ISESIONCTRL_H
#define ISESIONCTRL_H

//#include "Mascota.h"
using namespace std;

class ISesionCtrl {
    public:
        virtual static SesionCtrl * getInstancia() = 0;
        virtual bool logeado() = 0;
        virtual void recibirNick( string ) = 0;
        virtual bool chequearContrasenia( string ) = 0;
        virtual void cancelarCasoDeUso( bool ) = 0;
};

#endif