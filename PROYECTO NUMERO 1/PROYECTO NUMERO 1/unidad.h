#ifndef UNIDADES_H
#define UNIDADES_H
#include "librerias.h"
#include "idUnidad.h"
using namespace std;

class Unidad{
public:
	Unidad();
	void insertarIdEnUnidad(idUnidad&);
	~Unidad();

private:
	idUnidad *idunidad;
};

#endif // UNIDADES_H

