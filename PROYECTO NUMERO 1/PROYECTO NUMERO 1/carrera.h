#ifndef CARRERA_H
#define CARRERA_H
#include "librerias.h"
#include "unidad.h"
#include "terminala.h"
#include "terminalb.h"
using namespace std;

class Carrera{
public:
	Carrera();
	void calcularRuta();
	void asignaEstado();
	void imprimeCarreras();
	void cuentaCarreras();
	int getCarreras();
	~Carrera();

private:
	int hora1;
	int hora2;
	int monto;
	char ruta;
	int carreras;
};




#endif // !CARRERA_H

