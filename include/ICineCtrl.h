#ifndef ICINECTRL_H
#define ICINECTRL_H

//#include <string>
//#include <map>
#include <vector>
//#include "Cine.h"

using namespace std

class CineCtrl {
   private:
   public:
      virtual static CineCtrl* getInstancia() = 0;
      virtual vector<int> obtenerFuturasFuncionesEnCine(int) = 0;
      virtual void addCine(Cine*) = 0;
      virtual ~ICineCtrl(){};
}

#endif