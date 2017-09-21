#include"Persona.h"

Persona::Persona(){
id="";
nombre="";
}
Persona::Persona (string i,string n){
	id=i;
	nombre=n;
}
void Persona::setId(string i){
	id = i;
}

void Persona::setNombre(string n){
	nombre = n;
}

void Persona::toString(){
	cout << "-------------------------------------" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << " \tIdentificacion: " << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " \t\t" << id << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << " \tCliente: " << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " \t\t" << nombre << endl;
	cout << "-------------------------------------" << endl;
}