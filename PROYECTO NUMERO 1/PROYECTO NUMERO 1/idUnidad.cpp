#include "idUnidad.h"

idUnidad::idUnidad(){
	asientos = new Asiento;
}
void idUnidad::insertarAsientos(Asiento &a){
	*asientos = a;
}
void idUnidad::setId(int i) { //numero que la identifica del 1 al 8
	id = i;
}
int idUnidad::getId(){
	return id;
}
void idUnidad::setPlaca(string p) {//placa de unidad
	placa = p;
}
string idUnidad::getPlaca(){
	return placa;
}
void idUnidad::setCapacidad(int c) { //cantidad de asientos
	capacidad = c;
}
int idUnidad::getCapacidad(){
	return capacidad;
}
void idUnidad::setDisponibilidad(char d) { //si se esta usando o no
	disponibilidad = d;
}
char idUnidad::getDisponibilidad(){
	return disponibilidad;
}
void idUnidad::setEstado(char e) { //donde esta la unidad, en A o B
	estado = e;
}
char idUnidad::getEstado(){
	return estado;
}
void idUnidad::revisaDisponibilidad() { //revisa si la unidad esta llena o vacia
	Asiento a;
	if ((a.getCan()) == (a.getTam())) {
		setDisponibilidad('U');
		cout << "Unidad en uso"<<endl;
	}
	else if ((a.getCan()) != (a.getTam())) {
		setDisponibilidad('N');
		cout << "Unidad no en uso" <<endl;
	}
}
void idUnidad::cantidadAsientos() { //revisa la cantidad de asientos que hay
	Asiento a;
	int cont = 0; //contador para revisar la cantidad de asientos ocupados que hay
	int cont2 = 0; //contador para revisar la cantidad de asientos desocupados
	for (int i = 0; i < (a.getTam()) ; i++) {
		if (cont < (a.getCan())) { //pregunta si hay asientos ocupados
			cont++;
		}
		else {
			cont2++;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " \t\tCantidad de asientos: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << a.getTam() << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " \t\tAsientos ocupados: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << cont << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " \t\tAsientos desocupados: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << cont2 << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	setCapacidad(cont2);
}
void idUnidad::imprimeId() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "\tBus: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << getId() << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "\tPlaca: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << getPlaca() << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " \tCapacidad: " << endl;
	cantidadAsientos();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " \tEstado: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << getEstado() << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " \tDisponibilidad: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << getDisponibilidad() << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl;
	cout << " \t------------------------------------------"<<endl;
}
idUnidad::~idUnidad(){}