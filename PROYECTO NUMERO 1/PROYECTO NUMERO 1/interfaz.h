#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "empresaDatos.h"
using namespace std;

class interfaz{
private:
	bool cicloMenu;
public:
    interfaz();
	void setCicloMenu(bool);
    void menu();
    int validarOpc();
	void imprimeNombreEmpresa();
};

#endif /* INTERFAZ_H */

