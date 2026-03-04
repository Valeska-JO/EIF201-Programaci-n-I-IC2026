#pragma once
#ifndef TEMPERATURA_H
#define TEMPERATURA_H
double* crearRegistro(int& cantidadDias);
void ingresarTemperaturas(double* registro, int cantidad);
double calcularPromedio(const double* reistro, int cantidad);
double calcularMaximo(const double* registro, int cantidad);
double calcularMinimo(const double* registro, int cantidad);
void mostrarResultados(const double* registro, int cantidad);
#endif
