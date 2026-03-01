#include "extratorDeNombre.h"
#include <string>
#include <iostream>
#include <algorithm>

void extraerNombre(const std::string& nombreCompleto) {
    int contadorEspacios = -1;
    for (int i = 0; i < nombreCompleto.length(); i++) {
        if (nombreCompleto[i] == char(32)) {
            contadorEspacios = i;
            break;
        }
    }
    if (contadorEspacios != -1) {
        std::string nombre = nombreCompleto.substr(0, contadorEspacios);
        std::string apellido = nombreCompleto.substr(contadorEspacios + 1);
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Primer apellido: " << apellido << std::endl;

    }
    else {
        std::cout << "No se agrego espacios!" << std::endl;
    }
}
void extraerVocales(const std::string& nombreCompleto) {
    int letra = 0;
    for (int i = 0; i < nombreCompleto.length(); i++) {
        char vocales = nombreCompleto[i];
        if (vocales == 'a'|| vocales == 'e'|| vocales == 'i'|| vocales == 'o'|| vocales == 'u'
         || vocales == 'A'|| vocales == 'E'|| vocales == 'I'|| vocales == 'O'|| vocales == 'U') {
            
            letra++;
        }
    }
    std::cout << "Cantidad de vocales en el nombre completo: " << letra << std::endl;
}
void convertorMayusculas(std::string& nombreCompleto) {
    for (int i = 0; i < nombreCompleto.length(); i++) {
        nombreCompleto[i] = std::toupper(nombreCompleto[i]);
    }
    std::cout << "Nombre completo en mayusculas: " << nombreCompleto << std::endl;
}
void longitudTotal(const std::string& nombreCompleto){
    int contadorLetras = 0;
    for (int i = 0; i < nombreCompleto.length(); i++){
        if (nombreCompleto[i] != char(32)) {
            contadorLetras++;
        }
    }
    std::cout << "Longitud del nombre(sin espacio): " << contadorLetras << std::endl;
}