/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file contador_segundos.cc
 * @author Jorge Elías alu0101472294@ull.es
 * @date Nov 14 2021
 * @brief Este programa devuelve el número de segundos que han pasado durante la
 * cantidad de años, días, horas, minutos y segundos introducidos por el
 * usuario.
 * @bug There are no known bugs
 */

#include <iostream>
#include <vector>

void MensajeInicial() {
  std::cout << "Hola, este programa calcula el número de segundos que han "
               "pasado durante la cantidad de años, días, horas, minutos y "
               "segundos introducidos."
            << std::endl;
  std::cout << "Introduzca los datos de la siguiente manera: Primero la "
               "cantidad de años y, seguidamente, la tecla enter y así con la "
               "cantidad de días, horas, minutos y segundos. Recuerde que debe "
               "seguir el orden impuesto."
            << std::endl;
}

std::vector<int> CalculaLaCantidadDeSegundos(int anyos, int dias, int horas,
                                             int minutos, int segundos) {
  std::vector<int> vector_almacen_de_segundos;
  int anyos_en_segundos{anyos * 31536000};
  vector_almacen_de_segundos.emplace_back(anyos_en_segundos);
  int dias_en_segundos{dias * 86400};
  vector_almacen_de_segundos.emplace_back(dias_en_segundos);
  int horas_en_segundos{horas * 3600};
  vector_almacen_de_segundos.emplace_back(horas_en_segundos);
  int minutos_en_segundos{minutos * 60};
  vector_almacen_de_segundos.emplace_back(minutos_en_segundos);
  vector_almacen_de_segundos.emplace_back(segundos);
  return vector_almacen_de_segundos;
}

int main() {
  //MensajeInicial();
  int anyos, dias, horas, minutos, segundos;
  std::cin >> anyos >> dias >> horas >> minutos >> segundos;
  if (!std::cin) {
    std::cerr << "Debe introducir un número natural. ";
    exit(EXIT_SUCCESS);
  }
  int suma{0};
  for (int contador :
       CalculaLaCantidadDeSegundos(anyos, dias, horas, minutos, segundos)) {
    suma += contador;
  }
  std::cout << suma << std::endl; 
  return 0;
}
