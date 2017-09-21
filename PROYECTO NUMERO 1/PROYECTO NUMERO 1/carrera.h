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
	~Carrera();

private:
	int hora1;
	int hora2;
	int monto;
	char ruta;
};




#endif // !CARRERA_H

