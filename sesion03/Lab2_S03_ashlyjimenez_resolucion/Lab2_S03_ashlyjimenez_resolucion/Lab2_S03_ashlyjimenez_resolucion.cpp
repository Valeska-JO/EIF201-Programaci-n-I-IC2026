// Lab2_S03_ashlyjimenez_resolucion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "paquetes.h"
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int cantidad = 0;
    double* pesos = nullptr;
    double limite;
    

    cout << "Empresa de mensajeria ingreso de paquetes\n";
   pesos = crearRegistro(cantidad);
    ingresarPesos(pesos, cantidad);
    double total = calcularPesoTotal(pesos, cantidad);
    cout << total << std::endl;

    cout << "Ingrese peso limite: ";
    cin >> limite;
    int conteo = contarSobreLimite(pesos, cantidad, limite);
    cout << "Cargas con sobre peso: " << conteo << std::endl;

    const double* masPesado = buscarMasPesado(pesos, cantidad);
    cout << "El paquete mas pesado es de: " << *masPesado << "kg" << std::endl;



    delete []pesos;
    pesos = nullptr;
    return 0;
}
