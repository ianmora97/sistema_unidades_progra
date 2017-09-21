/*
Clase para meter cada unidad en una terminal
*/
#ifndef TERMINALB_H
#define TERMINALB_H
#include "librerias.h"
#include "idUnidad.h"
using namespace std;
class TerminalB
{
public:
	TerminalB();
	void insertarUnidad(idUnidad&);
	void saleUnidad();
	int getCan();
	int getTam();
	void imprimeUnidades();
	~TerminalB();

private:
	idUnidad *terminalb;
	int tam, can;
};




#endif // !TERMINALB_H
