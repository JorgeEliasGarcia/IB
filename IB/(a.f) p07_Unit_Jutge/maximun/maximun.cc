/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file maximun.cc
 * @author Jorge Elías alu0101472294@ull.es
 * @date Nov 13 2021
 * @brief Este programa pregunta tres números e imprime en pantalla el mayor de
 * ellos.
 * @bug There are no known bugs
 */

#include <iostream>

void MensajeInicial() {
  std::cout << "Este programa imprime en pantalla el número mayor de los 3 "
               "introducidos. "
            << std::endl;
  std::cout
      << "Introduzca los tres número de la siguiente manera: Introduzca un "
         "número y la tecla enter hasta haber introducido los 3 número: "
      << std::endl;
}

int NumeroMayor(int primer_numero, int segundo_numero, int tercer_numero) {
  if (primer_numero >= segundo_numero && primer_numero >= tercer_numero) {
    return primer_numero;
  } else if (segundo_numero >= primer_numero &&
             segundo_numero >= tercer_numero) {
    return segundo_numero;
  } else {
    return tercer_numero;
  }
}

int main() {
  // MensajeInicial();
  int primer_numero, segundo_numero, tercer_numero;
  std::cin >> primer_numero >> segundo_numero >> tercer_numero;
  if (!std::cin) {
    std::cerr << "Debe introducir un número entero. ";
    exit(EXIT_SUCCESS);
  }
  std::cout << NumeroMayor(primer_numero, segundo_numero, tercer_numero)
            << std::endl;
}
