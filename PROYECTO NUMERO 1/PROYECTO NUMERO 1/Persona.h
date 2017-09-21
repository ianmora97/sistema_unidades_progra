#ifndef PERSONA_H
#define PERSONA_H
#include "empresaDatos.h"
using namespace std;

class Persona{
private:
	string id;
	string nombre;
public:
	Persona();
	Persona(string, string);
	void setId(string);
	void setNombre(string n);
	void toString();
};

#endif // !PERSONA_H