/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file elementos.cc
 * @author Jorge Elías alu0101472294@ull.es
 * @date Nov 14 2021
 * @brief Este programa pide al usuario dos carácteres que pueden ser V, A o P.
 * Teniendo en cuenta que El agua (A) vence a la piedra (P) que a su vez vence
 * al viento (V) que vence al agua, dirá quien gana el enfrentamiento, o si se
 * produce un empate.
 * @bug There are no known bugs
 */

#include <iostream>

void MensajeInicial() {
  std::cout << "Este programa mostrará el resultado de jugar a Piedra, Agua o "
               "Viento. Recuerde que el agua (A) vence a la piedra (P) que a "
               "su vez vence al viento, que vence al agua."
            << std::endl;
  std::cout
      << "Introduzca el primer elemento, pulse espacio, y el siguiente elemento"
      << std::endl;
}

char ResultadoAguaPapelViento(char primer_elemento, char segundo_elemento) {
  const char kViento{'V'}, kAgua{'A'}, kPiedra{'P'};
  const char kEmpate('-');
  const char kVictoriaPrimerElemento('1');
  const char kVictoriaSegundoElemento('2');
  if (primer_elemento == segundo_elemento) {
    return kEmpate;
  } else if (primer_elemento == kViento && segundo_elemento == kAgua) {
    return kVictoriaPrimerElemento;
  } else if (primer_elemento == kViento && segundo_elemento == kPiedra) {
    return kVictoriaSegundoElemento;
  } else if (primer_elemento == kPiedra && segundo_elemento == kViento) {
    return kVictoriaPrimerElemento;
  } else if (primer_elemento == kPiedra && segundo_elemento == kAgua) {
    return kVictoriaSegundoElemento;
  } else if (primer_elemento == kAgua && segundo_elemento == kPiedra) {
    return kVictoriaPrimerElemento;
  } else if (primer_elemento == kAgua && segundo_elemento == kViento) {
    return kVictoriaSegundoElemento;
  }
}

int main() {
  // MensajeInicial();
  char primer_elemento, segundo_elemento;
  std::cin >> primer_elemento >> segundo_elemento;
  const char kViento{'V'}, kAgua{'A'}, kPiedra{'P'};
  if ((primer_elemento != kAgua && primer_elemento != kViento &&
       primer_elemento != kPiedra) ||
      (segundo_elemento != kAgua && segundo_elemento != kViento &&
       segundo_elemento != kPiedra)) {
    std::cerr << "Valor no válido, unicamente son correctos V, A y P"
              << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::cout << ResultadoAguaPapelViento(primer_elemento, segundo_elemento)
            << std::endl;
}
