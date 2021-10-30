#include<iostream>
#include <string>
#include <time.h>

using namespace std;
class Mesa{
	string nombre;
	string apellido;
	string producto;
	int cantidad;
	short dia;
	short mes;
	short anio;
	short min;
public:

	Mesa(short minutos) {

		cout << "Digame su nombre: "; cin>>nombre;
		cout << "Digame su apellido: "; cin >> apellido;
		cout << "¿Que producto llevara?: "; cin >> producto;
		cout << "¿Cuantas porciones?: "; cin >> cantidad;
		dia = 5; mes = 2 ; anio = 2021;
		min = minutos;
	}
	void Imprime() {
		cout << "\tUsuario: " << nombre <<" "<<apellido<< endl;
		cout << "\tProducto: " << producto << endl;
		cout << "\tPorciones: " << cantidad << endl;
		cout << "\tFecha: " << dia << " / " << mes << " / " << anio << endl;
		cout << "\tHora: 4"<<" : "<< this->min;

	}
};
class Clientes {
	Mesa** arreglo;
	int cant;
public:
	Clientes() {
		arreglo = nullptr;
		cant = 0;
	}
	~Clientes() {
		if (arreglo != nullptr)
		{
			for (int i = 0; i < cant; i++)
				delete arreglo[i];
			delete[] arreglo;
		}
	}
	void Agregar(short min) {
		Mesa** aux = new Mesa * [cant + 1];
		Mesa* nuevo = new Mesa(min);
		for (int i = 0; i < cant; i++)
			aux[i] = arreglo[i];

		aux[cant] = nuevo;

		if (arreglo != nullptr)
			delete[] arreglo;
		arreglo = aux;
		cant++;
	}
	void Mostrar() {
		cout << "--------Orden de Despacho-----------" << endl;
		for (int i = 0; i < cant; i++)
		{
			cout << "Mesa #" << i + 1 << endl; arreglo[i]->Imprime();cout << endl;
		}
	}
};

int main() {

	setlocale(LC_ALL,"es");
	short tiempo = 0;
	clock_t start = clock();
	Clientes* e = new Clientes();
	unsigned short op;
	do {
		cout << "\t\t*********************************************" << endl;
		cout << "\t\t*                 MENU                      *" << endl;
		cout << "\t\t*                                           *" << endl;
		cout << "\t\t*          1.Agregar cliente                *" << endl;
		cout << "\t\t*          2.Ver lista de clientes          *" << endl;
		cout << "\t\t*          0.Salir                          *" << endl;
		cout << "\t\t*                                           *" << endl;
		cout << "\t\t*********************************************" << endl;
		cout << "\t\tIngrese la opcion deseada: ";
		cin >> op;
		system("cls");
		if (clock() - start >= CLOCKS_PER_SEC)
		{
			tiempo++;
			start = clock();
		}
		switch (op)
		{
		case 0: exit(0);  break;
		case 1: {	
			e->Agregar(tiempo);
			break;
		}
		case 2:	e->Mostrar(); break;
		}
		system("pause>0");
		system("cls");

	} while (op != 0);
	
	delete e;
	return 0;
}
