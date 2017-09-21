
#include "interfaz.h"
#include "empresaDatos.h"
#include "asiento.h"
#include "tiquete.h"
#include "Persona.h"
#include "idUnidad.h"
#include "unidad.h"
#include "terminala.h"
#include "terminalb.h"

interfaz::interfaz(){
	cicloMenu = true;
}
void interfaz::setCicloMenu(bool ciclo) {
	cicloMenu = ciclo;
}
void interfaz::menu(){
	
	//------VARIABLES POR PARAMETROS--------
	string cliente;
	string idCliente;
	string empresaname;
	int telempresa;
	
    int opc;
	//contador para sumar unidades
	int cont = 1;
	bool ciclo = true;
	//opcion para elegir que terminal
	//-----!VARIABLES POR PARAMETROS--------
	
	//-----------OBJETOS--------------------
	interfaz i;
	Persona p;
	Asiento a;
	Tiquete t;
	EmpresaDatos ed;
	Unidad u;
	idUnidad u1;
	idUnidad u2;
	idUnidad u3;
	idUnidad u4;
	idUnidad u5;
	idUnidad u6;
	idUnidad u7;
	idUnidad u8;
	TerminalA ta;
	TerminalB tb;

	//----------!OBJETOS--------------------
	//----------IDENTIFICACION DE UNIDAD----
	
	//--Bus 1
	u1.setId(1);
	u1.setPlaca("B1");
	u1.setCapacidad(96);
	u1.setDisponibilidad('N');
	u1.setEstado('C');
	u1.insertarAsientos(a);
	
	//--Bus 2
	u2.setId(2);
	u2.setPlaca("B2");
	u2.setCapacidad(96);
	u2.setDisponibilidad('N');
	u2.setEstado('C');
	u2.insertarAsientos(a);

	//--Bus 3
	u3.setId(3);
	u3.setPlaca("B3");
	u3.setCapacidad(96);
	u3.setDisponibilidad('N');
	u3.setEstado('C');
	u3.insertarAsientos(a);

	//--Bus 4
	u4.setId(4);
	u4.setPlaca("B4");
	u4.setCapacidad(96);
	u4.setDisponibilidad('N');
	u4.setEstado('C');
	u4.insertarAsientos(a);

	//--Bus 5
	u5.setId(5);
	u5.setPlaca("B5");
	u5.setCapacidad(96);
	u5.setDisponibilidad('N');
	u5.setEstado('C');
	u5.insertarAsientos(a);

	//--Bus 6
	u6.setId(6);
	u6.setPlaca("B6");
	u6.setCapacidad(96);
	u6.setDisponibilidad('N');
	u6.setEstado('C');
	u6.insertarAsientos(a);

	//--Bus 7
	u7.setId(7);
	u7.setPlaca("B7");
	u7.setCapacidad(96);
	u7.setDisponibilidad('N');
	u7.setEstado('C');
	u7.insertarAsientos(a);

	//--Bus 8
	u8.setId(8);
	u8.setPlaca("B8");
	u8.setCapacidad(96);
	u8.setDisponibilidad('N');
	u8.setEstado('C');
	u8.insertarAsientos(a);

	//----------!IDENTIFICACION DE UNIDAD---
    while(cicloMenu==true){
        system("cls");
		cout << "-----------------------------------------" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
        cout << " \t\tMenu" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "-----------------------------------------" << endl;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << " \t[1]"; 
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
		
		cout<< "Ingresar nombre de la empresa" << endl;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << " \t[2]";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);

		cout<<"Cambiar numero de la empresa" << endl;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << " \t[3]";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);

		cout<<"Consultar datos de la empresa" << endl;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << " \t[4]";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);

		cout<<"Lista de Flotillas" << endl;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << " \t[5]";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);

		cout << "Registro de Unidades" << endl;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << " \t[6]";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);

		cout << "Actualizacion de estado y disponibilidad" << endl;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << " \t[7]";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);

		cout << "Consulta de Unidades" << endl;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << " \t[8]";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);

		cout << "Registro de carreras" << endl;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        opc = validarOpc();
		if (opc==1) {
			system("cls");
			cout << "Digite el nombre de la empresa >";
			cin>>empresaname;
			ed.setNombreEmpresa(empresaname);
			cout << "Digite el numero de telefono de la empresa >";
			cin >> telempresa;
			ed.setTelefonoEmpresa(telempresa);
			cout << endl<<"----------------------------------------"<<endl;
			cout << "Datos Guardados Correctamente!" << endl;
			ed.toString();
			system("pause");
			i.setCicloMenu(true);
		}
		if (opc==2) {
			system("cls");
			ed.cambioTel();
			system("pause");
			i.setCicloMenu(true);
		}
		if (opc==3) {
			system("cls");
			cout << "Los datos de la empresa son: " << endl;
			ed.toString();
			system("pause");
			i.setCicloMenu(true);
		}
		if(opc == 4){
			system("cls");
			cout << " \nLa empresa "<<ed.getNombreEmpresa()<<" tiene 8 Unidades"<<endl;
			ta.imprimirUnidades();
			tb.imprimeUnidades();
			cout << endl;
			system("pause");
			i.setCicloMenu(true);
		}
		if (opc == 5) {
			system("cls");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
			cout << " \n\t\tRegistro de Unidades \n" << endl;
			u1.imprimeId();
			u2.imprimeId();
			u3.imprimeId();
			u4.imprimeId();
			u5.imprimeId();
			u6.imprimeId();
			u7.imprimeId();
			u8.imprimeId();

			system("pause");
			i.setCicloMenu(true);
		}
		int opcEvaluar;
		if (opc == 6) {
			system("cls");
			cout << "Que unidad desea evaluar?"<<endl;
			cout << "1-2-3-4-5-6-7-8 \n> ";
			cin >> opcEvaluar;
			if (opcEvaluar == 1) {
				
				u1.revisaDisponibilidad();
			}
			if (opcEvaluar == 2) {
				u2.revisaDisponibilidad();
			}
			if (opcEvaluar == 3) {
				u3.revisaDisponibilidad();
			}
			if (opcEvaluar == 4) {
				u4.revisaDisponibilidad();
			}
			if (opcEvaluar == 5) {
				u5.revisaDisponibilidad();
			}
			if (opcEvaluar == 6) {
				u6.revisaDisponibilidad();
			}
			if (opcEvaluar == 7) {
				u7.revisaDisponibilidad();
			}
			if (opcEvaluar == 8) {
				u8.revisaDisponibilidad();
			}

			system("pause");
			i.setCicloMenu(true);
		}
		if (opc==7) {
			system("cls");
			a.imprimeUnidad();
			system("pause");
		}
    }
}
    
int interfaz::validarOpc(){
    int opc;
	cout << endl<<">";
	cin >> opc;
    return opc;
}

void interfaz::imprimeNombreEmpresa(){
	EmpresaDatos empresa;
	//cout << " ------------------------------------";
	//cout << "|";
	int len;
	len = empresa.getNombreEmpresa().length();
	cout << len;
}
