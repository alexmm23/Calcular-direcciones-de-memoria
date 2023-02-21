#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int opc = 1;
	double memoria = 0, bitsCelda = 0, resultado, bitsDireccion;

	while (opc != 0) {
		cout << "Calcula tus localidades de memoria" << endl;
		cout << "Ingresa la cantidad de memoria en bits o bytes" << endl;
		cout << "1 - Bits" << endl;
		cout << "2 - Bytes" << endl;
		cout << "0 - Salir " << endl;
		cin >> opc;



		switch (opc) {
		case 1://Bits
			cout << "Ingrese la cantidad de bits de memoria: ";
			cin >> memoria;
			cout << "Ingrese el tamanio de la celda en bits: ";
			cin >> bitsCelda;
			resultado = (memoria / bitsCelda);
			bitsDireccion = ceil(log2(resultado));
			system("cls");

			cout << "Las localidades de memoria en bits son: " << resultado << "de " << (bitsCelda / 8) <<" Bytes" << endl;
			cout << "Las localidades de memoria en bytes son: " << resultado*(bitsCelda/8) <<" Bytes" << endl;
			cout << "Los bits necesarios para direccionar son: " << bitsDireccion << endl;
			system("pause");
			system("cls");

			break;
		case 2://Bytes
			cout << "Ingrese la cantidad de bytes de memoria: ";
			cin >> memoria;
			cout << "Ingrese el tamaño de la celda en bits: ";
			cin >> bitsCelda;
			resultado = (memoria / (bitsCelda/8));
			bitsDireccion = ceil(log2(resultado));
			system("cls");

			cout << "Las localidades de memoria en bits son: " << resultado << "de " << (bitsCelda / 8) << " Bytes" << endl;
			cout << "Las localidades de memoria en bytes son: " << resultado * (bitsCelda / 8) << " Bytes" << endl;
			cout << "Los bits necesarios para direccionar son: " << bitsDireccion << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	return 0;

}