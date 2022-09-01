#include <iostream>
#include <vector>

std::vector<int> Divisores(int numero_introducido) {
  std::vector<int> todos_los_divisores;
  for (int divisor{1}; divisor <= numero_introducido; divisor++) {
    if (numero_introducido % divisor == 0)
      todos_los_divisores.emplace_back(divisor);
  }
  return todos_los_divisores;
}

int main() {
  std::cout << "Este programa imprime los divisiores del número introducido"
            << std::endl;
  std::cout << "Introduzca el número: " << std::endl;
  int numero_introducido;
  std::cin >> numero_introducido;
  std::vector<int> mis_divisores = Divisores(numero_introducido);
  std::cout << "Los divisores del número son: ";
  for (int divisor : mis_divisores) {
    std::cout << divisor << " ";
  }
  std::cout << std::endl;
  return 0;
}
