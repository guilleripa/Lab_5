#include "../include/Reloj.h"

using namespace std;

void setFecha(string fecha){
    string s = fecha;
    std::string delimiter = "/";
    size_t pos = 0;
    std::string token;
    token = s.substr(0, s.find(delimiter));
    this->dia = atoi(token);
    s = s.substr(pos + delimiter.length());
    s.erase(0, s.find(delimiter) + delimiter.length()); // borra todo hasta la priera ocurrencia de delimiter(incluido)
    token = s.substr(0, s.find(delimiter));
    this->mes = atoi(token);
    s = s.substr(pos + delimiter.length());
    s.erase(0, s.find(delimiter) + delimiter.length());
    delimiter = " ";
    token = s.substr(0, s.find(delimiter));
    this->anio = atoi(token);
    s = s.substr(pos + delimiter.length());
    s.erase(0, s.find(delimiter) + delimiter.length());
    delimiter = ":";
    token = s.substr(0, s.find(delimiter));
    this->hora = atoi(token);
    s = s.substr(pos + delimiter.length());
    s.erase(0, s.find(delimiter) + delimiter.length());
    this->minutos = atoi(s);
}

DtFecha getFecha(){
    DtFecha res = DtFecha(this->dia, this->mes, this->anio);
    return res;
}
