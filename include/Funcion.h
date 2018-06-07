#ifndef FUNCION_H
#define FUNCION_H

#include <string>
#include <vector>

#include "Sala.h"
#include "Reserva.h"

class Funcion{
    private:
        int ref;
        DtFecha fecha;
        DtHora hora;
        int duracion;
        vector<Reserva*> reservas;
        Sala* sala;
        
    public:
        Funcion(int, DtFecha, DtHora, int, Sala*);
        ~Funcion();
        void addReserva(Reserva*);
        int getNro();
        DtFecha getFecha();
        DtHora getHora();
        vector<Puntaje*> getPuntajes();
        Sala* getSala();
        string toText();
}

