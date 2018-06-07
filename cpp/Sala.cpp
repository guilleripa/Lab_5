#include "../include/Sala.h"

Sala::Sala(int ref, int capacidad, Cine* cine){
    this->ref = ref;
    this->capacidad = capacidad;
    this->cine = cine;
}

int getRef(){
    return this->ref;
}

int getCapacidad(){
    return this->capacidad;
}

Cine* getCine(){
    return this->cine;
}