/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file secuencia_de_collatz.cc
 * @author Jorge Elías alu0101472294@ull.es
 * @date Nov 15 2021
 * @brief Este programa recibe una de números naturales mayores o igual que 1 e
 * imprime cuantos pasos han sido necesarios para alcanzar el número 1.
 * @bug There are no known bugs
 */

#include <iostream>

void MensajeInicial() {
  std::cout
      << "Hola, este programa recibe una serie de número naturales, mayores o "
         "iguales que uno, e imprime en pantalla cuantos pasos han sidos "
         "necesarios para alcanzar el 1 siguiendo la secuencia de Collatz."
      << std::endl;
  std::cout << "Introduzca cada uno de los números seguidos de la tecla "
               "espacio, para separarlos unos de otro, y una vez haya "
               "introducido el último número pulse la tecla enter. "
            << std::endl;
}

int NumeroPasosSecuenciaCollatz(int numero_introducido) {
  int numero_de_pasos{0};
  while (numero_introducido > 1) {
    if (numero_introducido % 2 == 0) {
      numero_introducido /= 2;
      ++numero_de_pasos;
    } else if (numero_introducido % 2 != 0) {
      numero_introducido = numero_introducido * 3 + 1;
      ++numero_de_pasos;
    }
  }
  return numero_de_pasos;
}

int main() {
  //MensajeInicial();
  while (std::cin) {
    int numero_introducido;
    std::cin >> numero_introducido;
    if (!std::cin || numero_introducido < 1) {
      std::cerr
          << "Debe introducirse un número natural mayor o igual que uno. ";
      exit(EXIT_SUCCESS);
    }
    std::cout << NumeroPasosSecuenciaCollatz(numero_introducido) << std::endl;
  }

  return 0;
}