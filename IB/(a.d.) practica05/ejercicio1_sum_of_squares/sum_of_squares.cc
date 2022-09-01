#include <iostream>


int main() {
  std::cout << "Este programa imprime la suma de los cuadrados de los números "
               "inferiores al número introducido"
            << std::endl;
  std::cout << "Ingrese el número deseado: " << std::endl; 
  int numero_introducido; 
  std::cin >> numero_introducido; 
  int suma{0};
  for (int contador{1}; contador<= numero_introducido; contador++) {
      suma = suma + (contador * contador );
  }
  std::cout << "La suma es: " << suma << std::endl; 
  return 0;
}