#ifndef RESERVACTRL_H
#define RESERVACTRL_H

#include "Financiera.h"
#include "Reserva.h"
#include "PeliculaCtrl.h"
#include "CineCtrl.h"// para obtener el precio de la entrada
#include <map>
#include <vector>
using namespace std;

class : ReservaCtrl {
    private: 
        map<string, Financiera*> financieras;
        vector<Reserva*> reservas;
        static ReservaCtrl * instancia;
        ReservaCtrl();
        int nroFuncion;
        string nomPeli;
        int cantAsientos;
        DtTarjeta tarjeta;

    public:
        // Comparidas con PeliculasCtrl
        vector<string> listarPeliculas();
        void selccionarPelicula(string);
        DtPosterYSinopsis obtenerPosterYSinopsis();
        vector<string> obtenerCinesConFunciones();
        vector<string> obtenerFuturasFuncionesEnCine(int);
        // ----
        static ReservaCtrl * getInstancia();
        void seleccionarFuncion(int);
        int ingresarDatosReserva(int, DtTarjeta)
        int calcularPrecioTotal();
        void crearReserva();
        bool validarDatosReserva(DtTarjeta, int);
        void addReserva(Reserva*);
        void addFinanciera(Financiera*);
};

#endif
