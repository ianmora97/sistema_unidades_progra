/*
Esta clase es para meter las unidades 
dentro de cada terminal
*/
#ifndef TERMINALA_H
#define TERMINALA_H
#include "librerias.h"
#include "idUnidad.h"
using namespace std;

class TerminalA {
public:
	TerminalA();
	void insertarUnidades(idUnidad&);
	void sacarUnidad();
	int getCan();
	int getTam();
	void imprimirUnidades();
	~TerminalA();
private:
	idUnidad *terminala;
	int can;
	int tam;
};

#endif // !TERMINALA_H

