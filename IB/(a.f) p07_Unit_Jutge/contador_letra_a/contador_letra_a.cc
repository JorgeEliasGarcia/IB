/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file contador_letra_a.cc
 * @author Jorge Elías alu0101472294@ull.es
 * @date Nov 11 2021
 * @brief Este programa recibe del usuario un único caracater o una secuencia de
 * caracteres, la cual terminará al introducir un punto, y determina cuantas
 * veces se ha empleado la letra a.
 * @bug There are no known bugs
 */

#include <iostream>

void MensajeInicial() {
  std::cout
      << "Hola, este programa recibe una secuencia de caracteres o un único "
         "caracter,  por ejemplo una "
         "frase o una palabra, la cual terminará cuando se emplee un punto, e "
         "imprimirá en pantalla cuantas veces se ha empleado la letra a. "
      << std::endl;
  std::cout << "Introduzca los caracteres: " << std::endl;
}

int main() {
  //MensajeInicial();
  int contador{0};
  const char kLetraA{'a'};
  const char kPunto{'.'};
  while (std::cin) {
    char cada_caracter_introducido;
    std::cin >> cada_caracter_introducido;
    std::cout << cada_caracter_introducido; 
    if (!std::cin) {
        std::cerr << "Debe introducir un carácter válido. " << std::endl; 
        exit(EXIT_SUCCESS);
    }
    if (cada_caracter_introducido == kLetraA) {
      ++contador;
    }
    if (cada_caracter_introducido == kPunto) {
      std::cout << contador << std::endl;
      contador = 0;
    }
  }
  return 0;
}