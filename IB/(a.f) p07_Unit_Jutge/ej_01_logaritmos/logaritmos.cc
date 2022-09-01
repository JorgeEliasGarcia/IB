/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file logaritmos.cc
 * @author Jorge Elías alu0101472294@ull.es
 * @date Nov 18 2021
 * @brief Este programa calcula el logaritmo de la base y argumento introducidos
 * por el usuario.
 * @bug There are no known bugs
 */

#include <cmath>
#include <iostream>

void MensajeInicial() {
  std::cout
      << "Este programa calcula el logaritmo de los dos números introducidos."
      << std::endl;
  std::cout << "Introduzca dos números, n y b, tal que  b≥ 2 y n≥ 1."
            << std::endl;
}

void ComprobarValoresLogaritmo(int base_logaritmo, int argumento_logaritmo) {
  if (base_logaritmo < 2 || argumento_logaritmo < 1) {
    std::cerr << "Valores no válidos.";
    exit(EXIT_SUCCESS);
  }
}

int CalculadorDeLogaritmos(int base_logaritmo, int argumento_logaritmo) {
  int valor_del_logaritmo;
  if (base_logaritmo == 10 && argumento_logaritmo >= 1000) {
    valor_del_logaritmo = log10(argumento_logaritmo);
    return valor_del_logaritmo;
    exit(EXIT_SUCCESS);
  }
  valor_del_logaritmo = log(argumento_logaritmo) / log(base_logaritmo);
  return valor_del_logaritmo;
}

int main() {
  // MensajeInicial();
  int base_logaritmo;
  int argumento_logaritmo;
  std::cin >> base_logaritmo >> argumento_logaritmo;
  if (!std::cin) {
    std::cerr << "valor no válido.";
    exit(EXIT_SUCCESS);
  }
  ComprobarValoresLogaritmo(base_logaritmo, argumento_logaritmo);
  std::cout << CalculadorDeLogaritmos(base_logaritmo, argumento_logaritmo);
  return 0;
}