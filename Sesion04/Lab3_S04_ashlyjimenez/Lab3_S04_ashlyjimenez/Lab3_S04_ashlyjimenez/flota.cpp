#include "flota.h"
#include <string>
#include <iostream>

namespace UNA {

	flota::flota() : cantidad(0), capacidad(3) {
		lista = new vehiculo * [capacidad];
	}
	flota:: ~flota() {
		for (int i = 0; i < cantidad; i++) {
			delete lista[i];
			delete[] lista;
		}
	}
    


	void flota::redimensionar() {
		capacidad *= 2;
		vehiculo** nuevaLista = new vehiculo * [capacidad];
		for (int i = 0; i < cantidad; i++) {
			nuevaLista[i] = lista[i];
		}
		delete[] lista;
		lista = nuevaLista;
	}
    void flota::agregar(vehiculo* nuevo) {
        if (cantidad >= capacidad) {
            redimensionar();
        }
        lista[cantidad++] = nuevo;
    }
	bool flota::eliminar(std::string placa) {
	for (int i = 0; i < cantidad; i++) {
		if (lista[i]->getPlaca() == placa) {
			if (lista[i]->isActivo()) return false; 
				delete lista[i];
				for (int j = i; j < cantidad -1; j++) {
					lista[j] = lista[j + 1];
					cantidad--;
					return true;
				}
			
			}
		}
	return false;
	}
    vehiculo* flota::buscarPorPlaca(const std::string& placa)const {
        for (int i = 0; i < cantidad; i++) {
            if (lista[i]->getPlaca() == placa) {
                return lista[i];
            }
        }
        return nullptr;  
    }
    void flota::mostrarPorMarca(const std::string& marca)const {
        int encontrados = 0;
        for (int i = 0; i < cantidad; i++) {
            if (lista[i]->getMarca() == marca) {
                lista[i]->mostrar();
                encontrados++;
            }
        }

        if (encontrados > 0) {
            std::cout << "Se encontraron " << encontrados << " vehiculos de la marca " << marca << "." << std::endl;
        }
        else {
            std::cout << "No hay vehiculos registrados de la marca: " << marca << "." << std::endl;
        }
    }
    int flota::contarActivos() const {
        int activos = 0;
        for (int i = 0; i < cantidad; i++) {
            if (lista[i]->isActivo()) {
                activos++;
            }
        }
        return activos;
    }
    void flota::mostrarTodos() const {
        if (cantidad == 0) {
            std::cout << "La flota se encuentra vacia actualmente." << std::endl;
        }

        std::cout << "--- Listado de Flota Completa ---" << std::endl;
        for (int i = 0; i < cantidad; i++) {
            lista[i]->mostrar(); 
        }
    }

}