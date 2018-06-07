#include "include/Cine.h"
#include "include/Comentario.h"
#include "include/DtFecha.h"
#include "include/DtHora.h"
#include "include/DtPosterYSinopsis.h"
#include "include/Factory.h"
#include "include/Funcion.h"
#include "include/IPeliculaCtrl.h"
#include "include/IReservaCtrl.h"
#include "include/Pelicula.h"
#include "include/Puntaje.h"
#include "include/Reloj.h"
#include "include/Reserva.h"
#include "include/Sala.h"
#include "include/Usuario.h"


#include <iostream>
#include <ostream>
#include <string>
#include <stdexcept>
#include <vector>

using namespace std;

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////


int main(){
  
    int opcion;
    bool hubo_error = false;
  
    do{
   
        cout << " Bienvenido. Elija la opción: \n"
        
        <<" 0  - Cargar Datos \n"
        <<" 1  - Iniciar Sesión. \n"
        <<" 2  - Crear Reserva. \n"
        <<" 3  - Alta Cine. \n"
        <<" 4  - Alta Función. \n"
        <<" 5  - Puntuar Película. \n"
        <<" 6  - Comentar Película. \n
        <<" 7  - Ver Información de Película. \n""    
        <<" 8  - Ver Comentarios y Puntaje de Película. \n"
        <<" 9  - Eliminar Película. \n"
        <<" \n"
        <<" 10 - Salir \n\n";
        
        
        cin >> opcion;
        if (cin.fail()){
          cout << "La entrada debe ser un número. \n\n";
          cin.clear();
        }
        
    
//////////////////////////    OPCION 0   - CARGAR DATOS   ////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////  
        if(opcion == 0){
            
            // Cargando cines
            CineCtrl * cineCtrl = CineCtrl::getInstancia();
            
            Cine * c1 = new Cine(1, "21 de Setiembre 6658", 300);
            cineCtrl->addCine(c1);
            
            Cine * c2 = new Cine(2, "Miguel Barreiro 4588", 250);
            cineCtrl->addCine(c2);
            
            
            // Cargando salas
            Sala * s11 = new Sala(11, 20, c1);
            Sala * s12 = new Sala(12, 60, c1);
            Sala * s13 = new Sala(13, 30, c1);
            Sala * s21 = new Sala(21, 200, c2);
            Sala * s22 = new Sala(22, 60, c2);
            
            //Cargando peliculas
            PeliculaCtrl * peliculaCtrl = PeliculaCtrl::getInstancia();
            
            Pelicula * p1 = new Pelicula(1, "The Vindicators 3", 
            "Tercera entrega de la saga de superheroes.", "/home/accion/posters/vindicators.png"); 
            peliculaCtrl-> addPelicula(p1);
            Pelicula * p2 = new Pelicula(2, "Sangre de campeones", "Documental",
            "/home/accion/posters/scampeones.png");
            peliculaCtrl-> addPelicula(p2);
            Pelicula * p3 = new Pelicula(3, "El insulto", "Drama libanés", "/home/accion/posters/elinsulto.png");
            peliculaCtrl-> addPelicula(p3);
            Pelicula * p4 = new Pelicula(4, "La noche que no se repite", 
            "Tremenda pelicula uruguaya", "/home/accion/posters/nr.png");
            peliculaCtrl-> addPelicula(p4);
            
            
            //Haciendo DtFechas
            DtFecha  fecha1 =  DtFecha (15, 06, 2018);
            DtFecha  fecha2 =  DtFecha (15, 06, 2018);
            DtFecha  fecha3 =  DtFecha (15, 06, 2018);
            DtFecha  fecha4 =  DtFecha (15, 06, 2018);
            
            //Haciendo DtHoras
            DtHora hora1 = DtHora(14, 0);
            DtHora hora2 = DtHora(16, 0);
            DtHora hora3 = DtHora(14, 0);
            DtHora hora4 = DtHora(22, 0);
            
            //Cargando funciones     Funcion(int, DtFecha, DtHora, Sala*);
            Funcion * f1 = new Funcion(1, fecha1, hora1, 2, s11);
            p1 -> addFuncion(f1);
            Funcion * f2 = new Funcion(2, fecha2, hora2, 2, s11):
            p2 -> addFuncion(f2);
            Funcion * f3 = new Funcion(3, fecha3, hora3, 2, s21);
            p1 -> addFuncion(f3);
            Funcion * f4 = new Funcion(4, fecha4, hora4, 2, s13);
            p3 -> addFuncion(f4);
            
            //Cargando usuarios
            Usuario * u1 = new("chachoElNumberOne", "jorgeP4", 
            "/users/registered/chachoElNumberOne.png", "usuario");
            Usuario * u2 = new("carmeBeiro2010", "carmela5688", 
            "/users/registered/carmeBeiro2010.png", "usuario");
            Usuario * u3 = new("ale_ulises", "p4eslomejor21",
            "/admin/registered/ale_ulises.png", "administrador");
            
            //Intancia ReservaCtrl
            ReservaCtrl * reservaCtrl = ReservaCtrl::getInstancia();
            
            //Cargando financieras
            Financiera * f11 = new Financiera("Oca", 15);
            reservaCtrl -> addFinanciera(f11); 
            Financiera * f12 = new Financiera("Creditel", 20);
            reservaCtrl -> addFinanciera(f12);
            Financiera * f13 = new Financiera("BROU", 0);
            
            //Cargando Comentarios             Comentario(string, Usuario*, Pelicula*);
            Comentario * com1 = new Comentario(
            "Es tremenda pelicula. La mejor parte es cuando aparecen Rick y Morty",
            u1, p1);
            p1 -> addComentario(com1);
            u1 -> addComentario(com1);
            
            Comentario * com2 = new Comentario(
            "Esta muy buena pero la mejor parte es cuando explota el planeta con los malos",
            u2, p1);
            com1 -> addComentarioHijo(com2);  
            u2 -> addComentario(com2);
            Comentario * com3 = new Comentario( "Callateee no cuentes el final!!",
            u1, p1);
            com2 -> addComentarioHijo(com3);  
            u1 -> addComentario(com3);
            
            //Cargando Puntajes                     Puntaje(int, Usuario*, Pelicula*);
            Puntaje * pu1 = new Puntaje(9, u1, p1);
            p1 -> addPuntaje(pu1);
            u1 -> addPuntaje(pu1);
            
            Puntaje * pu2 = new Puntaje(6, u2, p3);
            p3 -> addPuntaje(pu2);
            u2 -> addPuntaje(pu2);
            
            // Cargando Reservas  Reserva(CantAsientos, Financiera*, Usuario*, Funcion*);
            ReservaCtrl * reservaCtrl = ReservaCtrl::getInstancia();
            
            Reserva * r1 = new Reserva(7, f13, u1, f1);
            f1 -> addReserva(r1);
            u1 -> addReserva(r1);
            
            Reserva * r2 = new Reserva(8, f11, u2, f1);
            f1 -> addReserva(r2);
            u2 -> addReserva(r2);
            
            
            cout << " Datos cargados con éxito \n";
            
            
    //////////////////////////    OPCION 1   - INICIAR SESION   //////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////  
        
        }else if(opcion == 1){ //Iniciar Sesion
            
            //definicion de variables
            string nickRecibido, pass;
            int opcionSesion;
            bool contraCorrecta;
            
            Factory * factory = Factory::getInstancia();
            ISesionCtrl * iSesionCtrl = Factory->getISesionCtrl();
        
            cout << " Ingrese nombre de Usuario: \n";
            cin.ignore();
            getline(cin, nickRecibido);
            
            iSesionCtrl->recibirNick(nickRecibido);
            
            cout << " Ingrese contraseña: \n";
            cin >> pass;   
            
            contraCorrecta = iSesionCtrl->chequearContrasenia(pass);
            
            while(!contraCorrecta){
                cout << " 1 - Intentar de nuevo \n 2 - Cancelar \n";
                cin >> opcionSesion
                if(opcionSesion == 1){
                    
                    cout << " Ingrese contraseña: \n";
                    cin >> pass;
                    
                    contraCorrecta = iSesionCtrl->chequearContrasenia(pass);
                    
                }else if(opcionSesion == 0){
                    iSesionCtrl->cancelarCasoDeUso();
                    contraCorrecta = true;
                }else{
                  cout 
                  << "Opción no valida \n"
                  << "Elige de nuevo.\n";
                }
            }
            
            cout << " Sesion iniciada con exito! \n"
//////////////////////////    OPCION 2   - CREAR RESERVA   ///////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
    
        }else if(opcion == 2){ //Crear Reserva
       
          //void agregarMascota(string ci, const DtMascota& dtMascota)
          //DataMascota(string nombre, Genero genero, float peso, float racionDiaria)
          
          //definicion de variables 
          string ci, nombre, sexo, vacuna;
          Genero genero; 
          TipoPelo tipoPelo; 
          RazaPerro raza;
          float peso;
          int tipoMascota, razaAux, pelo;
          bool vacunaCachorro;
          
          
          cout << " 1 - Ingresar un perro \n 2 - Ingresar un gato \n";
          cin >> tipoMascota;
          
          if(tipoMascota == 1){ //PERRO
            
            cout << " Ingrese CI de Socio\n";
            cin >> ci;
            
            cout << " Ingrese Nombre de la Mascota \n";
            cin.ignore();
            getline(cin, nombre);
            
            cout << " Ingrese Peso \n";
            cin >> peso;
            if (cin.fail()){
              cout << "La entrada debe ser un numero. \n\n";
              cin.clear();
              hubo_error = true;
            }
            
            cout << " Ingrese Genero (Para macho M, y para Hembra  H) \n";
            cin >> sexo;
            
            if (sexo == "M") genero = Macho;
            else if (sexo == "H") genero = Hembra;
            else{
              cout << ("Hay un error en el genero\n\n");
              hubo_error = true;
            }
    
            cout << " Ingrese una raza de la siguiente lista: \n 1- labrador\n 2- ovejero\n 3- bulldog\n 4- pitbull\n 5- collie\n 6- pekines\n 7- otro \n";
            cin >> razaAux;
            if (cin.fail()){
              cout << "La entrada debe ser un numero. \n\n";
              cin.clear();
              hubo_error = true;
            }
            
            switch(razaAux){
              case 1 : raza = labrador;
                     break;
              case 2 : raza = ovejero;
                     break;
              case 3 : raza = bulldog;
                     break;
              case 4 : raza = pitbull;
                     break;
              case 5 : raza = collie;
                     break;
              case 6 : raza = pekines;
                     break;
              case 7 : raza = otro;
                     break;
              default: 
                cout << ("Hay un error en la raza\n\n");
                hubo_error = true;
                break;
            }
             
            cout << "Tiene vacuna? Ingrese S/N \n";
            cin >> vacuna;
            
            if (vacuna == "S") vacunaCachorro = true;
            else if (vacuna == "N") vacunaCachorro = false;
            else{
              cout << ("Hay un error en la vacuna");
              hubo_error = true;
            }
            
            if(!hubo_error){
              // DtPerro* nueva= new DtPerro(nombre, genero, peso, peso*0.025, raza, vacunaCachorro);
              DtPerro nueva(nombre, genero, peso, peso*0.025, raza, vacunaCachorro);
              
              try{
                // agregarMascota(ci, *nueva);
                agregarMascota(ci, nueva);
                // delete nueva;
              }catch(invalid_argument e){
                cout << "Invalid Argument: " << e.what() << "\n\n";
              }
            }
            
          }else if(tipoMascota == 2){ //GATO
          
            cout << " Ingrese CI de Socio\n";
            cin >> ci;
            
            cout << " Ingrese Nombre de la Mascota \n";
            cin.ignore();
            getline(cin, nombre);
            
            cout << " Ingrese Peso \n";
            cin >> peso;
            if (cin.fail()){
              cout << "La entrada debe ser un numero. \n\n";
              cin.clear();
              hubo_error = true;
            }
            
            cout << " Ingrese Genero (Para macho M, y para Hembra  H) \n";
            cin >> sexo;
            
            if (sexo == "M") genero = Macho;
            else if (sexo == "H") genero = Hembra;
            else{
              cout << ("Hay un error en el genero\n\n");
              hubo_error = true;
            }
            
            cout << " Ingrese un tipo de pelo: \n 1 - largo \n 2 - mediano \n 3 - corto\n";
            cin >> pelo;
            
            switch(pelo){
              case 1 : tipoPelo = Largo;
                     break;
              case 2 : tipoPelo = Mediano;
                     break;
              case 3 : tipoPelo = Corto;
                     break;
              default :
                cout << ("Hay un error en el tipo de Pelo\n\n");
                hubo_error = true;
                break;       
            }
            
            if(!hubo_error){
              DtGato* nueva= new DtGato(nombre, genero, peso, peso*0.015, tipoPelo);
              
              try{
                agregarMascota(ci, *nueva);
                delete nueva;
                cout << "Mascota agregada!! \n\n";
              }catch(invalid_argument e){
                cout << "Invalid Argument: " << e.what() << "\n\n";
              }
            }
          }else{
            cout << "input invalido \n";
          }
          hubo_error=false;
    //////////////////////////    OPCION 3 - ALTA CINE    /////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////  
         
        }else if(opcion == 3){ //Alta Cine
       
          //void ingresarConsulta(string motivo, string ci)
        
          //definicion de variables 
          string ci, motivo;
          
          cout << " Ingrese CI \n";
          cin >> ci;
          
          cout << " Ingrese Motivo \n";
          cin.ignore();
          getline(cin, motivo);
          
         try{
            ingresarConsulta(motivo, ci);
            cout << "Consulta ingresada!! \n\n";
          }catch(invalid_argument e){
            cout << "Invalid Argument: " << e.what() << "\n\n";
          }
    //////////////////////////    OPCION 4 - ALTA FUNCION   //////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////    
    
        }else if(opcion == 4){//Alta Funcion
    
          //definicion de variables 
          string ciSocio;
          int cantConsultas, dia, mes, anio;
          //acá hay que poner un catch para el socio
          cout << " Ingrese CI \n";
          cin >> ciSocio;
          if (cin.fail()){
            cout << "La entrada debe ser un numero. \n\n";
            cin.clear();
            hubo_error = true;
          }
          
          cout << " Ingrese Día (dd)\n";
          cin >> dia;
          if (cin.fail()){
            cout << "La entrada debe ser un numero. \n\n";
            cin.clear();
            hubo_error = true;
          }
          
          cout << " Ingrese Mes (mm)\n";
          cin >> mes;
          if (cin.fail()){
            cout << "La entrada debe ser un numero. \n\n";
            cin.clear();
            hubo_error = true;
          }
          
          cout << " Ingrese Año (yyyy)\n";
          cin >> anio;
          if (cin.fail()){
            cout << "La entrada debe ser un numero. \n\n";
            cin.clear();
            hubo_error = true;
          }
          
          if(!hubo_error){
            DtFecha nuevaFecha(dia,mes,anio);
            
            try{
              DtConsulta** consultas = verConsultasAntesDeFecha( nuevaFecha, ciSocio, cantConsultas);
              if(consultas != NULL){
                cout << "\n Esta/s es/son su/s consulta/s, " <<  socios.array[buscarSocio(ciSocio)]->getNombre() << ":\n\n";
                
                for(int i = 0 ; i < cantConsultas ; i++){
                  cout << "Consulta " << i << ": \n"
                  << "-Fecha: "
                  << consultas[i]->getFechaConsulta().getDia()
                  << "/" << consultas[i]->getFechaConsulta().getMes()
                  << "/" << consultas[i]->getFechaConsulta().getAnio()
                  << "\n"
                  << "-Motivo: "
                  << consultas[i]->getMotivo()
                  << "\n";
                }
                cout << "\n";
                for(int i = 0; i < cantConsultas; i++){
                delete consultas[i];
                }
                delete[] consultas;
              }else{
                cout << "\nNo tiene consultas disponibles \n\n";
              }
            }catch(invalid_argument e){
              cout << "Invalid Argument: " << e.what() << "\n\n";
            }
          }
          hubo_error=false;
    
    //////////////////////////    OPCION 5  - PUNTUAR PELICULA   ////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////     
         
        }else if(opcion == 5){//Eliminar Socio
         
          //eliminarSocio(string ci)
          
          //definicion de variables 
          string ci;
          
          cout << " Ingrese CI \n";
          cin >> ci;
          
          
          try{
            eliminarSocio(ci);
            cout << "Socio eliminado \n\n";
          }catch(invalid_argument e){
            cout << "Invalid Argument: " << e.what() << "\n\n";
          }
    //////////////////////////    OPCION 6   - COMENTAR PELICULA   /////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////////////////
    
        }else if(opcion == 6){ //Obtener Mascotas
        
          //DtMascota** obtenerMascotas(string ci, int& cantMascotas)
          
          string ci;
          int cantMascotas;
          
          cout << "Ingrese CI \n";
          cin >> ci;
          cout << "\n";
          
          try{
            DtMascota** mascotas = obtenerMascotas(ci, cantMascotas);
            cout << "Estas son sus mascotas, " <<  socios.array[buscarSocio(ci)]->getNombre() << ":\n\n";
            for(int i = 0; i < cantMascotas; i++){
              cout << *mascotas[i] << "\n";
            }
            for(int i = 0; i < cantMascotas; i++){
              delete mascotas[i];
            }
            delete[] mascotas;
          }catch(invalid_argument e){
            cout << "Invalid Argument: " << e.what() << "\n\n";
          }
    
    
    //////////////////////    OPCION 7 - VER INFO PELICULA      /////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////
        }else if(opcion == 7 ){
    ///////////    OPCION 8 - VER COMENTARIOS Y PUNTAJE DE PELICULA      ////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////
        }else if (opcion == 8 ){
    //////////////////////    OPCION 9 - ELIMINAR PELICULA      /////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////
        }else if (opcion == 9 ){
    //////////////////////////    OPCION 10 - SALIR      ////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////
    
    // esta es la implementación del Lab_0 de salir todavia
    
    
        }else if(opcion == 10){ //Salir
          
          
          for(int i = 0; i < socios.tope; i++){
            if (socios.array[i] != NULL){
              delete socios.array[i];
            }
          }
          delete[] socios.array;
           
          std::cout << "Termino el Programa.\n";
        }else{
          cout 
          << "Opción no valida \n"
          << "Elige de nuevo.\n";
        }
  
  }while (opcion != 10); 
    return 0;
}
