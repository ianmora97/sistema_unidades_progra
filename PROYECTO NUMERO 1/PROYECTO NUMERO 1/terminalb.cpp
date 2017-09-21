#include "terminalb.h"

TerminalB::TerminalB(){
	tam = 8;
	terminalb = new idUnidad[8];
}
void TerminalB::insertarUnidad(idUnidad &u) {
	if (can <= tam) {
		terminalb[can] = u;
		can++;
	}
}
int TerminalB::getCan() {
	return can;
}
int TerminalB::getTam() {
	return tam;
}
void TerminalB::saleUnidad() {
	can--;
}
void TerminalB::imprimeUnidades() {
	int cont = 0;
	for (int i = 0; i < can; i++) {
		cont++;
	}
	cout << "Terminal B " << cont << " unidades" << endl << endl;
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
TerminalB::~TerminalB(){}