// Lab3_S04_ashlyjimenez.cpp//
#include <iostream>
#include <string>
#include "Flota.h"
#include "Vehiculo.h"

using namespace std;
using namespace UNA;

void mostrarMenu() {
    std::cout << "\n--- FlotaExpress: Registro de Vehiculos ---" << endl;
    std::cout << "1. Registrar vehiculo" << endl;
    std::cout << "2. Buscar vehiculo por placa" << endl;
    std::cout << "3. Mostrar vehiculos por marca" << endl;
    std::cout << "4. Registrar kilometros a un vehiculo" << endl;
    std::cout << "5. Desactivar vehiculo (fuera de servicio)" << endl;
    std::cout << "6. Reactivar vehiculo" << endl;
    std::cout << "7. Eliminar vehiculo (dar de baja definitiva)" << endl;
    std::cout << "8. Mostrar flota completa" << endl;
    std::cout << "9. Mostrar cantidad de vehiculos activos" << endl;
    std::cout << "10. Salir" << endl;
    std::cout << "Seleccione una opcion: ";
}

int main() {
    flota miFlota;
    int opcion;
    string placa, marca;
    int year;
    double km;

    do {
        mostrarMenu();
        std::cin >> opcion;

        switch (opcion) {
        case 1: {
            std::cout << "Placa: "; 
            std::cin >> placa;
            std::cout << "Marca: "; 
            std::cin >> marca;
            std::cout << "Anio: "; 
            std::cin >> year;
            std::cout << "Kilometraje inicial: "; 
            std::cin >> km;
            vehiculo* v = new vehiculo(placa, marca, year, km);
            miFlota.agregar(v);
         
            std::cout << "Vehiculo registrado con exito." << endl;
            break;
        }
        case 2: {
            std::cout << "Ingrese placa a buscar: "; 
            std::cin >> placa;
            vehiculo* v = miFlota.buscarPorPlaca(placa);
            if (v){
                v->mostrar();
            }
            else
            {
                cout << "Vehiculo no encontrado." << endl;
            }
            break;
        }
        case 3: {
            std::cout << "Ingrese marca: "; 
            std::cin >> marca;
            miFlota.mostrarPorMarca(marca);
            break;
        }
        case 4: {
            std::cout << "Placa: "; 
            std::cin >> placa;
            vehiculo* v = miFlota.buscarPorPlaca(placa);
            if (v) {
                std::cout << "Kilometros a sumar: "; 
                std::cin >> km;
                v->registrarKilometros(km);
            }
            else {
                std::cout << "Vehiculo no encontrado." << endl;
            }
                break;
           
        }
        case 5: {
            std::cout << "Placa a desactivar: "; 
            std::cin >> placa;
            vehiculo* v = miFlota.buscarPorPlaca(placa);
            if (v) { v->desactivar(); }
            else {
                std::cout << "Vehiculo no encontrado." << endl;
            }
            break;
        }
        case 6: {
            std::cout << "Placa a reactivar: ";
            std::cin >> placa;
            vehiculo* v = miFlota.buscarPorPlaca(placa);
            if(v){v->reactivar();
        }
            else {
                std::cout << "Vehiculo no encontrado." << endl;
            }
                break;
        }
        case 7: {
            std::cout << "Placa a eliminar (debe estar inactivo): "; 
            std::cin >> placa;
            if (miFlota.eliminar(placa)) {
                std::cout << "Vehiculo eliminado correctamente." << endl;
            }
            else {
                std::cout << "No se pudo eliminar. Verifique que exista y este desactivado." << endl;
            }
            break;
        }
        case 8:
            miFlota.mostrarTodos();
            break;
        case 9:
            std::cout << "Vehiculos activos actualmente: " << miFlota.contarActivos() << endl;
            break;
        case 10:
            std::cout << "Saliendo del sistema..." << endl;
            break;
        default:
            std::cout << "Opcion invalida." << endl;
        }
    } while (opcion != 10);

    return 0;
}