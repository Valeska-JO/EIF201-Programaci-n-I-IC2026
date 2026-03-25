#include "vehiculo.h"
namespace UNA {
vehiculo::vehiculo(std::string p, std::string m, int a, double k) : placa(p), year(a), marca(m), kilometraje(k), activo(true){}

std::string vehiculo::getPlaca() const { return placa;}
std::string vehiculo::getMarca() const { return marca;}
bool vehiculo::isActivo() const { return activo;}
void vehiculo::registrarKilometros(double km) {
	if (activo && km > 0) {
		kilometraje += km;
	}
	else {
		std::cout << "Error: vehiculo inactivo o kilometraje invalido." << std::endl;
	}
}
void vehiculo::desactivar() {
	if (!activo) std::cout << "Ya esta fuera de servicio." << std::endl;
	else activo = false;
}
void vehiculo::reactivar() {
	if (activo) std::cout << "Ya esta activo." << std::endl;
	else activo = true;
}

void vehiculo::mostrar()const {
	std::cout << "[" << placa << "]" << marca << "(" << year << ") - KM: " << kilometraje << " - Estado: " << (activo? "ACTIVO" : "FUERA DE SERVICIO") << std::endl;
}

}
