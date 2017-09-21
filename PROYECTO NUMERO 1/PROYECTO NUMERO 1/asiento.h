#ifndef ASIENTO_H
#define ASIENTO_H

#include "librerias.h"
#include "Persona.h"
using namespace std;


class Asiento{
public:
	Asiento();
	int getCan();
	int getTam();
	void imprimeUnidad();
	void imprimeClientes();
	void insertaEl(Persona&);
	void eliminaEl();
	~Asiento();

private:
	int tam;
	int can;
	string numeroA[96];
	Persona *asientoPos;
};



#endif // !ASIENTO_H

