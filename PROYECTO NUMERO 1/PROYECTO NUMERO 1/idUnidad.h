/*
clase de identificacion de unidades
numero de placa, capacidad etc

*/
#ifndef IDENTIFICACIONDEUNIDADES_H
#define IDENTIFICACIONDEUNIDADES_H
#include "librerias.h"
#include "asiento.h"
#include "terminala.h"
#include "terminalb.h"
using namespace std;

class idUnidad {
public:
	idUnidad();
	void insertarAsientos(Asiento&);
	void setId(int);
	int getId();
	void setPlaca(string);
	string getPlaca();
	void setCapacidad(int);
	int getCapacidad();
	void setDisponibilidad(char);
	char getDisponibilidad();
	void setEstado(char);
	char getEstado();
	void revisaDisponibilidad();
	void cantidadAsientos();
	void imprimeId();
	~idUnidad();

private:
	int id;
	string placa;
	char capacidad;
	char disponibilidad;
	char estado;
	Asiento *asientos;
};
#endif // !IDENTIFICACIONDEUNIDADES_H

