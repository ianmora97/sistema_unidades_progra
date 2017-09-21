#include "empresaDatos.h"

EmpresaDatos::EmpresaDatos() {

}
EmpresaDatos::EmpresaDatos(string name, int num) {
	
	nombreEmpresa = name;
	telefonoEmpresa = num;
}

void EmpresaDatos::setNombreEmpresa(string n){
	nombreEmpresa = n;
}

void EmpresaDatos::setTelefonoEmpresa(int t){
	telefonoEmpresa = t;
}

string EmpresaDatos::getNombreEmpresa(){
	return nombreEmpresa;
}

int EmpresaDatos::getTelefonoEmpresa(){
	return telefonoEmpresa;
}

void EmpresaDatos::cambioTel(){
	bool bandera = true;
	int numeroNuevo;
	while (bandera == true){
		cout << nombreEmpresa << endl;
		cout << "Digite su nuevo numero > ";
		cin >> numeroNuevo;
		if (numeroNuevo != telefonoEmpresa) {
			telefonoEmpresa = numeroNuevo;
			cout << "Su numero ha sido cambiado correctamente" << endl;
			bandera = false;
		}
		else{
			cout << "Su numero debe ser diferente al numero anterior"<<endl;
			cin.get();
			bandera = true;
		}
	}
}

void EmpresaDatos::toString(){
	cout <<" \n\n\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	cout << " \t\tNombre de la empresa "<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " \t\t" << nombreEmpresa << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	cout << " \t\tNumero de la empresa "<<endl; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " \t\t" << telefonoEmpresa << endl;
	cout << "----------------------------------------- \n\n"<<endl;
}



EmpresaDatos::~EmpresaDatos() {

}

