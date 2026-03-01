#include "Invertido.h"
#include <iostream>


void originalOrden(std::array <int, 20> numero, int tamano) {
    for (int i = 0; i < tamano; ++i) {
        std::cout << std::endl << "Numero: " << numero[i];
    }
}
void ordenInvertido(const std::array <int, 20>& entrada, std::array <int, 20>& salida, int tamano) {
    for (int i = 0; i < tamano; ++i) {
        salida[i] = entrada[tamano - 1 - i];
        std::cout << "Numero: " << salida[i] << std::endl;
    }
}