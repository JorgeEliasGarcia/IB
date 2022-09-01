/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file aumentar_un_segundo.cc
 * @author Jorge Elías alu0101472294@ull.es
 * @date Nov 14 2021
 * @brief Este programa pregunta al usuario un número natural de horas, minutos
 * y segundos. Añadirá un segundo a dicha hora, y siempre mostrará el resultado
 * como un reloj digital, tal que horas<24, minutos<60 y segunos<60.
 * @bug There are no known bugs
 */

#include <iostream>

void MensajeInicial() {
  std::cout << "Este progrma añadirá un segundo a la hora introducida. "
            << std::endl;
  std::cout
      << "Introduzca el número de horas, minutos y segundos de la siguiente "
         "forma: Primero introduzca el número de horas y,seguidamente, la "
         "tecla enter y así sucesivamente con los minutos y los segundos."
      << std::endl;
}

void ComprobarNumerosSonCorrectos(int horas, int minutos, int segundos) {
  if (horas >= 24 || minutos >= 60 || segundos >= 60) {
    std::cerr << "Números no válidos, los datos deben introducirse de manera "
                 "que las horas sean menores que 24 y los minutos y segundos "
                 "menores que 60. ";
    exit(EXIT_SUCCESS);
  }
}

int main() {
  //MensajeInicial();
  int horas, minutos, segundos;
  std::cin >> horas >> minutos >> segundos;
  if (!std::cin) {
    std::cerr << "Debe introducir un número natural." << std::endl;
    exit(EXIT_SUCCESS);
  }
  ComprobarNumerosSonCorrectos(horas, minutos, segundos);
  ++segundos;
  if (segundos >= 60) {
    segundos = 00;
    ++minutos;
  }
  if (minutos >= 60) {
    minutos = 00;
    ++horas;
  }
  if (horas >= 24) {
    horas = 00;
  }
  if (horas < 10 && minutos < 10 && segundos < 10) {
    std::cout << "0" << horas << ":0" << minutos << ":0" << segundos
              << std::endl;
  } else if (horas < 10 && minutos < 10 && segundos >= 10) {
    std::cout << "0" << horas << ":0" << minutos << ":" << segundos
              << std::endl;
  } else if (horas < 10 && minutos >= 10 && segundos < 10) {
    std::cout << "0" << horas << ":" << minutos << ":0" << segundos
              << std::endl;
  } else if (horas < 10 && minutos >= 10 && segundos >= 10) {
    std::cout << "0" << horas << ":" << minutos << ":" << segundos << std::endl;
  } else if (horas >= 10 && minutos < 10 && segundos < 10) {
    std::cout << horas << ":0" << minutos << ":0" << segundos << std::endl;
  } else if (horas >= 10 && minutos < 10 && segundos >= 10) {
    std::cout << horas << ":0" << minutos << ":" << segundos << std::endl;
  } else if (horas >= 10 && minutos >= 10 && segundos < 10) {
    std::cout << horas << ":" << minutos << ":0" << segundos << std::endl;
  } else if (horas >= 10 && minutos >= 10 && segundos >= 10) {
    std::cout << horas << ":" << minutos << ":" << segundos << std::endl;
  }

  return 0;
}