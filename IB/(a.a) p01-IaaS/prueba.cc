
/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file balanced_numbers.cc
 * @author Jorge Elías alu0101472294@ull.es
 * @date Nov 24 2021
 * @brief Este programa recibe del usuario una cadena de números e imprimirá en
 * pantalla si la suma de los números localizados en las posiciones pares es
 * igual a los números situados en las posiciones impares.
 */

#include <iostream>
#include <vector>

int main() {
  int cn;
  std::cin >> cn; 
  std::vector <int> a; 
  for (int i{1}; i <= cn; ++i) {
    int numero; 
    std::cin >> numero; 
    a.emplace_back(numero); 
  }
  std::cout << "comienzo" << std::endl; 
  for (int b : a) {
    std::cout << b << " "; 
  }
}
