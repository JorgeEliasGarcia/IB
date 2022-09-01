/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file intervals.cc
 * @author Jorge Elías alu0101472294@ull.es
 * @date Nov 15 2021
 * @brief Este programa muestra la intersección entre dos intevalos introducidos
 * por el usuario, asumiendo que el primer número del intervalo será menor que
 * el segundo.
 * @bug There are no known bugs
 */

#include <iostream>

void MensajeInicial() {
  std::cout << "Este programa imprime la intersección entre dos intervalos "
               "introducidos por el usuario. Introduzca los intervalos de la "
               "siguiente manera: numero menor del primer intervalo espacio "
               "numero mayor del primer intervalo, luego dos espacios e "
               "introduzca el segundo intervalo de la misma manera."
            << std::endl;
}

void ComprobarOrdenDeValores(int numero_menor_primer_intervalo,
                             int numero_mayor_primer_intervalo,
                             int numero_menor_segundo_intervalo,
                             int numero_mayor_segundo_intervalo) {
  if (numero_menor_primer_intervalo > numero_mayor_primer_intervalo) {
    std::cerr << "Debe introducir los valores del intervalo en orden.";
    exit(EXIT_SUCCESS);
  }
  if (numero_menor_segundo_intervalo > numero_mayor_segundo_intervalo) {
    std::cerr << "Debe introducir los valores del intervalo en orden.";
    exit(EXIT_SUCCESS);
  }
}

int ValorMaximoInterseccion(int numero_menor_primer_intervalo,
                            int numero_mayor_primer_intervalo,
                            int numero_menor_segundo_intervalo,
                            int numero_mayor_segundo_intervalo) {
  int valor_maximo_de_interseccion;
  if (numero_mayor_primer_intervalo <= numero_mayor_segundo_intervalo) {
    valor_maximo_de_interseccion = numero_mayor_primer_intervalo;
  } else {
    valor_maximo_de_interseccion = numero_mayor_segundo_intervalo;
  }

  return valor_maximo_de_interseccion;
}

int ValorMinimoInterseccion(int numero_menor_primer_intervalo,
                            int numero_mayor_primer_intervalo,
                            int numero_menor_segundo_intervalo,
                            int numero_mayor_segundo_intervalo) {
  int valor_minimo_de_interseccion;
  if (numero_menor_primer_intervalo >= numero_menor_segundo_intervalo) {
    valor_minimo_de_interseccion = numero_menor_primer_intervalo;
  } else {
    valor_minimo_de_interseccion = numero_menor_segundo_intervalo;
  }
  return valor_minimo_de_interseccion;
}

int main() {
  // MensajeInicial();
  int numero_menor_primer_intervalo, numero_mayor_primer_intervalo,
      numero_menor_segundo_intervalo, numero_mayor_segundo_intervalo;
  std::cin >> numero_menor_primer_intervalo >> numero_mayor_primer_intervalo >>
      numero_menor_segundo_intervalo >> numero_mayor_segundo_intervalo;
  if (!std::cin) {
    std::cerr << "Debe introducir números naturales. ";
    exit(EXIT_SUCCESS);
  }
  ComprobarOrdenDeValores(
      numero_menor_primer_intervalo, numero_mayor_primer_intervalo,
      numero_menor_segundo_intervalo, numero_mayor_segundo_intervalo);
  int valor_minimo_interseccion = ValorMinimoInterseccion(
      numero_menor_primer_intervalo, numero_mayor_primer_intervalo,
      numero_menor_segundo_intervalo, numero_mayor_segundo_intervalo);
  int valor_maximo_interseccion = ValorMaximoInterseccion(
      numero_menor_primer_intervalo, numero_mayor_primer_intervalo,
      numero_menor_segundo_intervalo, numero_mayor_segundo_intervalo);
  if (valor_minimo_interseccion > valor_maximo_interseccion) {
    std::cout << "[]" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::cout << "[" << valor_minimo_interseccion << ","
            << valor_maximo_interseccion << "]" << std::endl;
  return 0;
}
