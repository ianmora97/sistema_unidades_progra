#include "unidad.h"
#include "terminala.h"
#include "terminalb.h"

Unidad::Unidad(){
	idunidad = new idUnidad;
}
void Unidad::insertarIdEnUnidad(idUnidad &u) {
	*idunidad = u;
}
Unidad::~Unidad(){}