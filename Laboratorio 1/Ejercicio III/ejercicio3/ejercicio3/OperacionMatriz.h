#pragma once
#ifndef OPERACIONMATRIZ_H
#define OPERACIONMATRIZ_H
#include <array>

void sumaFila(const std::array<std::array<int, 3>, 3>& matriz);
void sumaColumna(const std::array<std::array<int, 3>, 3>& matriz);
void sumaDiagonal(const std::array<std::array<int, 3>, 3>& matriz);


#endif