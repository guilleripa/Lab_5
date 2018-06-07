#ifndef IPELICULACTRL_H
#define IPELICULACTRL_H

#include <vector>

using namespace std;

class IPeliculaCtrl {
  private: 
  public:
    virtual static PeliculaCtrl * getInstancia() = 0;
    virtual vector<string> listarPeliculas() = 0;
    virtual void selccionarPelicula(string) = 0;
    virtual DtPosterYSinopsis obtenerPosterYSinopsis() = 0;
    virtual vector<int> obtenerCinesConFunciones() = 0;
    virtual vector<int> obtenerFuturasFuncionesEnCines(int) = 0;
    virtual void eliminarPelicula() = 0;
    virtual void finalizar() = 0;
    virtual ~IPeliculaCtrl(){};
};

#endif