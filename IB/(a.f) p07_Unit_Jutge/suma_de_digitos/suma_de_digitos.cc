/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file suma_de_digitos.cc
 * @author Jorge Elías alu0101472294@ull.es
 * @date Nov 16 2021
 * @brief Este programa recibe del usuario una serie de números naturales e
 * imprime en pantalla la suma de los dígitos que conforman el número.
 * @bug There are no known bugs
 */

#include <iostream>

void MensajeInicial() {
  std::cout << "Este pograma calcula la suma de los dígitos de los numeros "
               "introducidos."
            << std::endl;
  std::cout << "Introduzca todos los números separados por un espacio y, "
               "cuando finalice, pulse la tecla enter. "
            << std::endl;
}

int CalcularSumaDigitos(int numero_introducido) {
  const int kDivisor{10};
  int suma{0};
  for (int dividendo{numero_introducido}; dividendo > 0; dividendo /= 10) {
    suma += dividendo % kDivisor;
  }
  return suma;
}

int main() {
  //MensajeInicial();
  while (std::cin) {
    int numero_introducido;
    std::cin >> numero_introducido;
    if (!std::cin || numero_introducido < 0) {
      std::cerr << "El número debe ser un número natural. ";
      exit(EXIT_SUCCESS);
    }
    std::cout << "The sum of the digits of " << numero_introducido << " is "
              << CalcularSumaDigitos(numero_introducido) << "." << std::endl;
  }
  return 0;
}