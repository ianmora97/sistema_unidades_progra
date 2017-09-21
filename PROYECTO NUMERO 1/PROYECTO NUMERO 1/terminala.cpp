#include "terminala.h"

TerminalA::TerminalA() {
	tam = 8;
	terminala = new idUnidad[8];
}
void TerminalA::insertarUnidades(idUnidad &u) {
	if (can <= tam) {
		terminala[can] = u;
		can++;
	}
}
int TerminalA::getCan() {
	return can;
}
int TerminalA::getTam() {
	return tam;
}
void TerminalA::sacarUnidad() { 
	can--;
}
void TerminalA::imprimirUnidades() {
	int cont=0;
	for (int i = 0; i < can ; i++) {
		cont++;
	}
	cout << "Terminal A " << cont << " unidades" <<endl << endl;
	for (int i = 0; i < can; i++) {
		cout << " ------- " << " \t";
	}
	cout << endl;
	for (int j = 0; j < can; j++) {
		cout << "|[][] []|" << " \t";
	}
	cout << endl;
	for (int h = 0; h <can; h++) {
		cout << " ------- " << " \t";
	}
	cout << endl;
	for (int k = 0; k < can; k++) {
		cout << " O     O " << " \t";
	}
	cout << endl;
}

TerminalA::~TerminalA() {}