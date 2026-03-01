#include "OperacionMatriz.h"
#include <iostream>
#include <array>
void sumaFila(const std::array<std::array<int, 3>, 3>& matriz){
	for (int i = 0; i < 3; i++) {
		int suma = 0;
		for (int j = 0; j < 3; j++) {
			
			suma = suma + matriz[i][j];
		}
		std::cout << "La fila " << i << " la suma es: " << suma << "\n";
	}
}


void sumaColumna(const std::array<std::array<int, 3>, 3>& matriz) {
	for (int j = 0; j < 3; j++) {
		int suma = 0;
		for (int i = 0; i < 3; i++) {
			suma = suma + matriz[i][j];
		}
		std::cout << "La columna " << j << " la suma es: " << suma << "\n";
	}
}
void sumaDiagonal(const std::array<std::array<int, 3>, 3>& matriz) {
	int suma = 0;
	for (int i = 0; i < 3; i++) {
			suma = suma + matriz[i][i];
	}
	std::cout << " la suma es: " << suma << "\n";
}
