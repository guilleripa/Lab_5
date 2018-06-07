#include "../include/Reserva.h"

Reserva::Reserva(int asientos, int costo, DtTarjeta tarjeta, Usuario* usuario, Funcion* funcion) {
    this->cantAsientos = asientos;
    this->costo = costo;
    this->tarjeta = tarjeta;
    this->usuario = usuario;
    this->funcion = funcion;
}

int getCantAsientos(){
    return this->cantAsientos;
}

int getCosto(){
    return this->costo;
}

DtTarjeta getTarjeta(){
    return this->tarjeta;
}

Funcion* getFuncion(){
    return this->funcion;
}

Usuario* getUsuario(){
    return this->usuario;
}