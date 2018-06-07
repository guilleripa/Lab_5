#ifndef SESIONCTRL_H
#define SESIONCTRL_H

#include "./Reserva.h"
#include <map>
#include "Usuario.h"

using namespace std;

class SesionCtrl {
    private:
        map<string, Usuario*> usuarios;
        static SesionCtrl * instancia;
        SesionCtrl();
        string nick;
    public:
        static SesionCtrl * getInstancia();

        bool logeado();
        void recibirNick( string );
        void agregarReservaUsuario( Reserva* );
        bool chequearContraseña( string );
        void cancelarCasoDeUso( bool );
        void addUsuario(Usuario*);
};

#endif