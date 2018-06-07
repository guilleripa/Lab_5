#include "../include/SesionCtrl.h"

using namespace std;

SesionCtrl * SesionCtrl:instancia = NULL;
SesionCtrl()::SesionCtrl(){
   nick = ""; //chequear
}

SesionCtrl * SesionCtrl::getInstancia() {
    if(instancia == NULL)
        instancia = new SesionCtrl();
    return instancia;
}

bool logeado(){
    return nick != "";
}

void recibirNick( string nickname ){
    nick = nickname;
}

void agregarReservaUsuario( Reserva r ){
    
}

bool chequearContraseña( string pass ){
    
}

void cancelarCasoDeUso( bool cancelar ){
    
}
