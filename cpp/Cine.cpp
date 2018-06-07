#include "../include/Cine.h"
#include <string>  

#include <vector>

using namespace std;

Cine::Cine(int ref, string direccion, int entrada){
    this->ref = ref;
    this->direccion = direccion;
    this->entrada = entrada;
};

int Cine::getRef(){
  return ref;
}

string Cine::getDireccion(){
  return direccion;
}

int Cine::getEntrada() {
  return entrada;
}

string toText(){
  string res = "Ref: " + to_string(ref) + ", Direccion: " + direccion + ", Costo: $" + to_string(entrada);
  return res
}

void Cine::addReserva(Reserva r){
   
}