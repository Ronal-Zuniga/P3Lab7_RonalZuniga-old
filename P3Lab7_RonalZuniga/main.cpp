#include <iostream>
#include "Mago.h"
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include <vector>
using namespace std;
int menu();
vector<Mago*> creacionMagos();

int main() {
	int opcion;
	while((opcion = menu()) != 4) {
		switch(opcion) {
			case 1: {
				int n1, n2, n3, n4, n5;
				srand ((unsigned)time(0));
				n1 = (0 + (rand() % (20))) + 80;
				n2 = (0 + (rand() % (20))) + 80;
				n3 = (0 + (rand() % (100)));
				n4 = (0 + (rand() % (100)));
				n5 = (0 + (rand() % (100)));
				MagoSlytherin* ms = new MagoSlytherin(n1, n2, n3, n4, n5);
				cout << ms->toString() << endl;
				cout << endl;
				delete ms;
				break;
			}

			case 2: {
				break;
			}

			case 3: {
				break;
			}
		}//fin del switch
	}//fin del while
	return 0;
}

int menu() {
	int opcion;
	cout << "----MENU----" << endl;
	cout << "1. Separar por casas" << endl;
	cout << "2. Imprimir Magos por casa" << endl;
	cout << "3. Imprimir cualidades promedio por casa" << endl;
	cout << "4. Salir" << endl;
	cout << endl;
	cout << "Ingrese la opcion: ";
	cin >> opcion;
	cout << endl;
	while(opcion <= 0 || opcion > 4) {
		cout << "Seleccione una opcion dentro del rango" << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcion;
		cout << endl;
	}
	return opcion;
}

