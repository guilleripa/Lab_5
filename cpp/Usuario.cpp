#include "../include/Usuario.h"

Usuario::Usuario(string nick, string contrasenia, string fotoPerfil, string tipoUsuario){
    this->nick = nick;
    this->contrasenia = contrasenia;
    this->fotoPerfil = fotoPerfil;
    this->tipoUsuario = tipoUsuario;
}

string getNick(){
    return this->nick;
}

void setPass(string contrasenia){
    this->contrasenia = contrasenia;
}

bool chequearContrasenia(string pass){
    int aux = strcmp(this->contrasenia, pass);
    if (aux == 0)
        return true;
    else
        return false;
}

map<int, Comantario*> getComentarios(){
    return this->comentarios;
}

vector<Puntaje*> getPuntajes(){
    return this->puntajes;
}

vector<Reserva*> getReservas(){
    return this->reservas;
}

void addReserva(Reserva* NuevaReserva){
    this->reservas.push_back(NuevaReserva);
}

void addPuntaje(Puntaje* NuevoPuntaje){
    this->reservas:push_back(NuevoPuntaje);
}

void addComentario(Comentario* NuevoComentario){
    comentarios[NuevoComentario->getId()]= NuevoComentario;
}

