// Operaciones sobre matriz //
#include <array>
#include <iostream>
#include "OperacionMatriz.h"

int main()
{
    std::array < std::array < int, 3 >, 3 > matriz;
   
    std::cout << "Matriz\n";
    for (int filas = 0; filas < 3; filas++) {
        for (int cols = 0; cols < 3; cols++) {
            std::cout << "Ingrese el valor en " << filas << " , " << cols << ": ";
            std::cin >> matriz[filas][cols];
		}
    }
    std::cout << std::endl;
    std::cout << " Suma de filas: \n";
    sumaFila(matriz);
    std::cout << std::endl;
    std::cout << " Suma de columnas: \n";
    sumaColumna(matriz);
    std::cout << "\n Suma Diagonal principal: \n";
    sumaDiagonal(matriz);
    return 0;
}

