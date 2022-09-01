#include <iostream>
#include <vector>

void MesajeInical() {
  std::cout << "Hola, este porgrama calcula la secuencia de Collatz de un "
               "número entero."
            << std::endl
            << std::endl;
  std::cout << "Introduzca el número: " << std::endl << std::endl;
}

std::vector<int> SecuenciaCollatz(int numero_introducido) {
  std::vector<int> numeros_secuencia_collatz;
  numeros_secuencia_collatz.emplace_back(numero_introducido);
  while (numero_introducido > 1) {
    if (numero_introducido % 2 == 0) {
      numero_introducido /= 2;
      numeros_secuencia_collatz.emplace_back(numero_introducido);
    } else {
      numero_introducido = (numero_introducido * 3) + 1;
      numeros_secuencia_collatz.emplace_back(numero_introducido);
    }
  }
  return numeros_secuencia_collatz;
}

int main() {
  MesajeInical();
  int numero_introducido;
  std::cin >> numero_introducido;
  std::vector<int> numeros_secuencia_collatz{
      SecuenciaCollatz(numero_introducido)};
  for (int componentes_secuencia_collatz : numeros_secuencia_collatz) {
    std::cout << componentes_secuencia_collatz << " ";
  }
  std::cout << std::endl;
  return 0;
}
