#include "../include/CineCtrl.h"

#include <vector>

using namespace std;

CineCtrl* CineCtrl::instancia = NULL;
CineCtrl::CineCtrl() {
   titulo = ""; //chequear
}
CineCtrl * CineCtrl::getInstancia() {
   if(instancia == NULL)
      instancia = new CineCtrl();
   return instancia;
}

void addCine(Cine* cine){}