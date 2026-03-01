//Procesamiento de nombre completo //
#include "extratorDeNombre.h"
#include <string>
#include <iostream>

int main()
{
    std::cout << "Ingrese nombre completo con espacios(Si tiene dos nombres escribalos sin espacio):\n";
    std::string nombreCompleto;
    std::getline(std::cin, nombreCompleto);
    std::cout << "";
    extraerNombre(nombreCompleto);
    extraerVocales(nombreCompleto);
    convertorMayusculas(nombreCompleto);
    longitudTotal(nombreCompleto);
    return 0;
}

