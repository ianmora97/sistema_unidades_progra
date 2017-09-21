/*
Universidad Nacional
Proyecto de programacion 1
Ian Mora Rodriguez
2017
*/
#ifndef DATOSDELAEMPRESA_H
#define DATOSDELAEMPRESA_H
#include "librerias.h"
using namespace std;

class EmpresaDatos{
public:
	EmpresaDatos();
	EmpresaDatos(string , int);
	void setNombreEmpresa(string);
	void setTelefonoEmpresa(int);
	string getNombreEmpresa();
	int getTelefonoEmpresa();
	void cambioTel();
	void toString();
	~EmpresaDatos();

private:
	//IdUnidad vector;
	string nombreEmpresa;
	int telefonoEmpresa;
};
#endif // !DATOSDELAEMPRESA_H

