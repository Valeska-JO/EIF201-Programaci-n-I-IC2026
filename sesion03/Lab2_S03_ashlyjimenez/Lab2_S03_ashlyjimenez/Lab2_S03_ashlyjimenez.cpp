// Lab2_S03_ashlyjimenez.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "temperatura.h"
#include <iostream>

int main()
{
    int cantidadDias = 0;
    // 1. Crear arreglo dinamico
    double* registroTemp = crearRegistro(cantidadDias);

    // 2. Llenar con datos del usuario
    ingresarTemperaturas(registroTemp, cantidadDias);

    // 3. Mostrar resultados
    mostrarResultados(registroTemp, cantidadDias);

    // 4. Liberar memoria (obligatorio)
    delete[] registroTemp;
    registroTemp = nullptr;

    return 0;
}
