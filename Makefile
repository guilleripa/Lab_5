# Objetivo predeterminado (no se necesita especificarlo al invocar `make`).
all: principal

# Objetivos que no son archivos.
.PHONY: all clean_bin clean_test clean testing


# directorios
HDIR    = include
CPPDIR  = cpp
ODIR    = obj

TESTDIR = test

MODULOS = Mascota Gato Perro Socio Consulta DtConsulta DtFecha DtMascota DtGato DtPerro

# lista de archivos, con directorio y extensión
HS   = $(MODULOS:%=$(HDIR)/%.hpp)
CPPS = $(MODULOS:%=$(CPPDIR)/%.cpp)
OS   = $(MODULOS:%=$(ODIR)/%.o)

PRINCIPAL=principal
EJECUTABLE=principal

# compilador
CC = g++
# opciones de compilación
CCFLAGS = -Wall -Werror -I$(HDIR) -DNDEBUG -g
# se debe remover o agregar la directiva -DNDEBUG para que las llamadas a 
# `assert' tengan  efecto o no.

$(ODIR)/$(PRINCIPAL).o:$(PRINCIPAL).cpp
	$(CC) $(CCFLAGS) -c $< -o $@

# cada .o depende de su .cpp
# $@ se expande para tranformarse en el objetivo
# $< se expande para tranformarse en la primera dependencia
$(ODIR)/Gato.o: $(CPPDIR)/Gato.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

$(ODIR)/Perro.o: $(CPPDIR)/Perro.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

$(ODIR)/DtGato.o: $(CPPDIR)/DtGato.cpp 
	$(CC) $(CCFLAGS) -c $< -o $@

$(ODIR)/DtPerro.o: $(CPPDIR)/DtPerro.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

$(ODIR)/Socio.o: $(CPPDIR)/Socio.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

$(ODIR)/Mascota.o: $(CPPDIR)/Mascota.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

$(ODIR)/DtMascota.o: $(CPPDIR)/DtMascota.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

$(ODIR)/DtFecha.o: $(CPPDIR)/DtFecha.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

$(ODIR)/DtConsulta.o: $(CPPDIR)/DtConsulta.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

$(ODIR)/Consulta.o: $(CPPDIR)/Consulta.cpp
	$(CC) $(CCFLAGS) -c $< -o $@
	
# $^ se expande para tranformarse en todas las dependencias
$(EJECUTABLE): $(ODIR)/$(PRINCIPAL).o $(OS)
	$(CC) $(CCFLAGS) $^ -o $@

# borra binarios
clean_bin:
	rm -f $(EJECUTABLE) $(ODIR)/$(PRINCIPAL).o $(OS)

check-syntax:
	gcc -o nul -S ${CHK_SOURCES}
