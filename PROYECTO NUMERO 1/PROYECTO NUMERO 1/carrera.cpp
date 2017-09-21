#include "carrera.h"

Carrera::Carrera(){
	hora1 = 8;
	hora2 = 15;
	
}
void Carrera::calcularRuta() { //pide que posicion de unidad
	Asiento a;
	Persona p;
	idUnidad iu;
	Unidad un;
	TerminalA ta;
	TerminalB tb;

	int ad=0; // el monto va a ser fijo pero dependiendo de la hora es mas plata
	int base=0; // la suma del monto inicial + ad
	monto = 0; //o cada vez que vaya a calcular el monto

	string nombre;
	string id;



	int opc; //opcion general
	int opc1;// opcion despues de elegir la opcion general 1
	int opc2;
	bool ciclo = true; //ciclo general
	bool ciclo1 = true;//ciclo despues de elegir la opcion general 1
	bool ciclo12 = true;//ciclo para confirmacion del tiquete
	bool ciclo3 = true;
	bool ciclo31 = true;
	bool ciclo2=true;
	bool ciclo22 = true;
	bool ciclo23 = true;
	char confirmacion;//opcion para confirmacion del tiquete
	while (ciclo==true) {
		cout << "Que ruta desea tomar? " << endl;
		cout << "[1](A-B) \n[2](B-A)" << endl;
		cout << "> ";
		cin >> opc;
		if (opc==1 || opc==2) {
			ciclo = false;
		}
		else {
			ciclo = true;
		}
	}
	if (opc == 1) {
		if ((ta.getCan()) > 0) {
			cout << "Ruta tomada \n(A-B)" << endl;
			monto = 2000;
			cout << "Monto: 2000 colones";
			while (ciclo1 == true) {
				cout << "A que hora desea tomar el bus?" << endl;
				cout << "[1]8:00am \n[2]3:00pm" << endl;
				cin >> opc1;
				if (opc1 == 1 || opc1 == 2) {
					ciclo1 = false;
				}
				else {
					ciclo1 = true;
				}
			}
			if (opc1 == 1) {
				ciclo12 = true;
					while (ciclo12 == true) {
						ad = 500;
						cout << "Ruta tomada \n(A-B)" << endl;
						cout << "Sale a las 8:00 am" << endl;
						base = monto + ad;
						cout << "Monto final: " << base << endl;
						cout << "Comprar tiquete? \n[Y] \t[N]" << endl;
						cin >> confirmacion;
						if (confirmacion == 'y' || confirmacion == 'n' || confirmacion == 'Y' || confirmacion == 'N') {
							ciclo12 = false;
						}
						else {
							ciclo12 = true;
						}
					}
					cout << "Digite su nombre >";
					cin >> nombre;
					p.setNombre(nombre);
					cout << "Digite su identificacion >";
					cin >> id;
					p.setId(id);
					a.insertaEl(p);
					cuentaCarreras();
					//un clean screen aqui
					a.imprimeClientes();
					a.imprimeUnidad();
			}
			else if (opc1 == 2) {
				ciclo3 = true;
					while (ciclo3 == true) {
						ad = 800;
						cout << "Ruta tomada \n(A-B)" << endl;
						cout << "Sale a las 3:00 pm" << endl;
						base = monto + ad;
						cout << "Monto final: " << base << endl;
						cout << "Comprar tiquete? \n[Y] \t[N]" << endl;
						cin >> confirmacion;
						if (confirmacion == 'y' || confirmacion == 'n' || confirmacion == 'Y' || confirmacion == 'N') {
							ciclo3 = false;
						}
						else {
							ciclo3 = true;
						}
					}
					cout << "Digite su nombre >";
					cin >> nombre;
					p.setNombre(nombre);
					cout << "Digite su identificacion >";
					cin >> id;
					p.setId(id);
					a.insertaEl(p);
					cuentaCarreras();
					//un clean screen aqui
					a.imprimeClientes();
					a.imprimeUnidad();
				}
		}
		else {
			cout << "No hay unidades disponibles en la terminal (A - B) "<<endl;
			system("pause");
		}
	}
	if (opc == 2) {
		if ((tb.getCan()) > 0) {
			cout << "Ruta tomada \n(B-A)" << endl;
			monto = 2500;
			cout << "Monto: "<< monto <<" colones"<<endl;
			ciclo2 = true;
			while (ciclo2 == true) {
				cout << "A que hora desea tomar el bus?" << endl;
				cout << "[1]8:00am \n[2]3:00pm" << endl;
				cin >> opc2;
				if (opc2 == 1 || opc2 == 2) {
					ciclo2 = false;
				}
				else {
					ciclo2 = true;
				}
			}
			if (opc2 == 1) {
				ciclo22 = true;
				while (ciclo22 == true) {
					ad = 700;
					cout << "Ruta tomada \n(B-A)" << endl;
					cout << "Hora de salida: 8:00 am" << endl;
					base = monto + ad;
					cout << "Monto final: " << base << endl;
					cout << "Comprar tiquete? \n[Y] \t[N]" << endl;
					cin >> confirmacion;
					if (confirmacion == 'y' || confirmacion == 'n' || confirmacion == 'Y' || confirmacion == 'N') {
						ciclo22 = false;
					}
					else {
						ciclo22 = true;
					}
				}
				cout << "Digite su nombre >";
				cin >> nombre;
				p.setNombre(nombre);
				cout << "Digite su identificacion >";
				cin >> id;
				p.setId(id);
				a.insertaEl(p);
				cuentaCarreras();
				//un clean screen aqui
				a.imprimeClientes();
				a.imprimeUnidad();
			}
			else if (opc2 == 2) {
				ciclo23 = true;
				while (ciclo23 == true) { //cambiar el 1 por el 2
					ad = 200;
					cout << "Ruta tomada \n(B-A)" << endl;
					cout << "Hora de salida: 3:00 pm" << endl;
					base = monto + ad;
					cout << "Monto final: " << base << endl;
					cout << "Comprar tiquete? \n[Y] \t[N]" << endl;
					cin >> confirmacion;
					if (confirmacion == 'y' || confirmacion == 'n' || confirmacion == 'Y' || confirmacion == 'N') {
						ciclo23 = false;
					}
					else {
						ciclo23 = true;
					}
				}
				cout << "Digite su nombre >";
				cin >> nombre;
				p.setNombre(nombre);
				cout << "Digite su identificacion >";
				cin >> id;
				p.setId(id);
				a.insertaEl(p);
				cuentaCarreras();
				//un clean screen aqui
				a.imprimeClientes();
				a.imprimeUnidad();
			}
		}
		else {
			cout << "No hay unidades disponibles en la terminal (B - A) " << endl;
			system("pause");
		}
	}

}
void Carrera::asignaEstado() {
}

void Carrera::imprimeCarreras() {
	EmpresaDatos emp;	
	cout << "La empresa " << emp.getNombreEmpresa() << " tiene " << getCarreras() << " carreras realizadas" << endl;
}
void Carrera::cuentaCarreras() {
	carreras++;
}
int Carrera::getCarreras() {
	return carreras;
}
Carrera::~Carrera(){

}