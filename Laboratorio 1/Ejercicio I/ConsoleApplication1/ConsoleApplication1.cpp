// Estadísticas de un arreglo//

#include <iostream>
#include <array>
#include "Estadistica.h"

int main()
{
    std::array<int, 10> numeros;
    for (size_t i = 0; i < numeros.size(); ++i) {
            std::cout << "Ingrese 10 numeros" << std::endl;
            std::cin >> numeros[i];
        }
    std::cout << "Numero Mayor: " << numberMax(numeros) << std::endl;
    std::cout << "Numenro Menor: " << numberMini(numeros) << std::endl;
    std::cout << "Suma Total: " << sumaTotal(numeros) << std::endl;
    std::cout << "Promedio: " << numberProm(numeros);
   
   return 0;
}
