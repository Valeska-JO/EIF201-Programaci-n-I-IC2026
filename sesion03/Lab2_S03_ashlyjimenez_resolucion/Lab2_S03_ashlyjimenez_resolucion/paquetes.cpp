#include "paquetes.h"
#include <iostream>
using std::cout;
using std::cin;

double* crearRegistro(int& cantidad) {
	cout << "Ingrese cantidad de paquetes: ";
	cin >> cantidad;
	cout << std::endl;
	double* pesos = new double[cantidad];

	return pesos;
}

void ingresarPesos(double* pesos, int cantidad) {
	for (int i = 0; i < cantidad; i++) {
		cout << "Ingrese peso por paquete:";
		cin >> pesos[i];
	}
}


double calcularPesoTotal(const double* pesos, int cantidad) {
	double total = 0;
	for (int i = 0; i < cantidad; i++) {
		total = total + pesos[i];
	}
	cout << " El peso total seria: " << std::endl;
	return total;
}


int contarSobreLimite(const double* pesos, int cantidad, double limite) {
	int conteo = 0;
	for (int i = 0; i < cantidad; i++) {
		if (pesos[i] > limite) {
			conteo++;
		}
	}
	return conteo;
}
const double* buscarMasPesado(const double* pesos, int cantidad) {
	int masPesado = 0;
	for (int i = 0; i < cantidad; i++) {
		if (pesos[i] > pesos[masPesado]) {
			masPesado = i;
		}
	}
	return &pesos[masPesado];
}