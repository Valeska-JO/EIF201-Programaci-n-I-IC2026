#pragma once
#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>
#include <iostream>
namespace UNA {
	class vehiculo{
	private:
		std::string placa;
	    std::string marca;
		double kilometraje;
		bool activo;
	public:
		vehiculo(std::string p, std::string m, int a, double k);
		int year;
		std::string getPlaca() const;
		std::string getMarca() const;
		bool isActivo() const;
		void registrarKilometros(double km);
		void desactivar();
		void reactivar();
		void mostrar() const;
	};
}
#endif