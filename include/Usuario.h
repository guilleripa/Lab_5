#ifndef USUARIO_H
#define USUARIO_H

#include "Reserva.h"
#include "Puntaje.h"
#include "Comentario.h"
#include <vector>
#include <map>

using namespace std;

class Usuario {
  private: 
    string nick;
    string contrasenia;
    string fotoPerfil;
    string tipoUsuario;
    vector<Puntaje*> puntajes;
    map<int, Comentario*> comentarios;
    vector<Reserva*> reservas;
  public:
    Usuario(string,string,string,string);
    string getNick();
    void setPass(string);
    bool chequearContrasenia(string);
    map<int, Comentario> getComentarios();
    vector<Puntaje*> getPuntajes();
    vector<Reserva*> getReservas();
    void addReserva(Reserva*);
    void addPuntaje(Puntaje*);
    void addComentario(Comentario*);
    void eliminarReserva(Reserva*);
    void eliminarPuntaje(Puntaje*);
    void eliminarComentario(Comentario*);
};

#endif