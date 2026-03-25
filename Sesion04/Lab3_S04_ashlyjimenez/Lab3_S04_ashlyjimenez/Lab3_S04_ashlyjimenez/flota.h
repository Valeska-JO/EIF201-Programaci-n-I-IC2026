#pragma once
#ifndef FLOTA_H
#define FLOTA_H
#include "vehiculo.h"
#include <string>
#include <iostream>


namespace UNA {
	class flota
	{
	private:
		vehiculo** lista;
		int cantidad;
		int capacidad;
		void redimensionar();
	public:
		flota();
		~flota();
		vehiculo* buscarPorPlaca(const std::string& placa) const;
		void mostrarPorMarca(const std::string& marca) const;
		void agregar(vehiculo* nuevo);
		void mostrarTodos() const;
		bool eliminar(std::string placa);
		int contarActivos() const;
	};
}
#endif

