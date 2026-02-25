#include "Estadistica.h"
int numberMax(std::array<int, 10> numeros) {
    int mayor = numeros[0];
    int menor = numeros[0];
    for (size_t i = 0; i < numeros.size(); ++i) {
        if (mayor < numeros[i]) {
            mayor = numeros[i];
        }
        if(mayor > numeros[i]) {
            menor = numeros[i];
        }
    }
    return mayor;
    return menor;
}
int numberMini(std::array<int, 10> numeros) {
    int menor = numeros[0];
    for (size_t i = 0; i < numeros.size(); ++i) {
        if (menor > numeros[i]) {
            menor = numeros[i];
        }
    }
    return menor;
}
int sumaTotal(std::array<int, 10> numeros) {
    int suma = 0;
    for (size_t i = 0; i < numeros.size(); ++i) {
        suma += numeros[i];
    }
    return suma;
}
double numberProm(std::array<int, 10> numeros) {
   double promedio = numeros[0];
   double suma = 0;
   suma = sumaTotal(numeros);
   promedio = suma / 10;
   return promedio;     
}