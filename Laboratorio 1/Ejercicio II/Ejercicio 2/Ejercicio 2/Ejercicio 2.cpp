// Inversión de un arreglo sin modificar el original.//
#include "Invertido.h"
#include <iostream>
#include<array>


int main()
{
    std::array<int, 20> numero;
    std::array<int, 20> invertido = {};
    int tamano;
    std::cout << "Agregar tamaño(Máximo 20):";
    std::cin >> tamano;
   if ( tamano > 20||tamano <= 0)
    {
        std::cout << "Tamaño no permitido." << std::endl;
        return 0;
    }
   for (int i = 0; i < tamano; ++i) {
       std::cout << "Agregue numero " << i << ": ";
       std::cin >> numero[i];
   }
   std::cout << "Orden de Origen: ";
   originalOrden(numero, tamano);
   std::cout << std::endl;
   std::cout << "Orden de Invertido: \n";
   ordenInvertido(numero, invertido, tamano);
    return 0;
}

