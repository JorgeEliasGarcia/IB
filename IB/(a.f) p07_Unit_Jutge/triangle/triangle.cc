/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file triangle.cc
 * @author Jorge Elías alu0101472294@ull.es
 * @date Nov 11 2021
 * @brief Este programa pregunta al usuario un número natural e imprime en
 * pantalla un triángulo de asteriscos de tantas filas como sea el número
 * introducido.
 * @bug There are no known bugs
 */

#include <iostream>

void MensajeInicial() {
  std::cout << "Este programa imprimirá en pantalla un triángulo de "
               "asteríscos de tantas filas como desee. "
            << std::endl
            << std::endl;
  std::cout << "Introduzca el número: " << std::endl;
}

void TrianguloAsteriscos(int numero_inicial) {
  const char kAsterisco{'*'};
  for (int contador_filas{1}; contador_filas <= numero_inicial;
       ++contador_filas) {
    for (int asteriscos_por_fila{1}; asteriscos_por_fila <= contador_filas;
         ++asteriscos_por_fila) {
      std::cout << kAsterisco;
    }
    std::cout << std::endl;
  }
}

int main() {
 // MensajeInicial();
  int numero_inicial;
  std::cin >> numero_inicial;
  if (!std::cin) {
    std::cerr << "Debe introducir un número natural. " << std::endl;
    exit(EXIT_SUCCESS);
  }
  TrianguloAsteriscos(numero_inicial);
  return 0;
}
