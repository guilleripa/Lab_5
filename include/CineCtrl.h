#ifndef CINECTRL_H
#define CINECTRL_H

#include <string>
#include <map>
#include <vector>
#include "Cine.h"
#include "Funcion.h"

using namespace std

class CineCtrl {
   private:
      map<int, Cine*> cines;
      static CineCtrl* instancia;
      CineCtrl();
      
   public:
      static CineCtrl* getInstancia();
      void addCine(Cine*);
}

#endif