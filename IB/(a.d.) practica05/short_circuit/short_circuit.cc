#include <iostream>

int main() {
  int valor_prueba_1 {1};
  std::cout << "Este programa evidencia que c++ emplea circuito corto" << std::endl;

  bool evidencia_1 { valor_prueba_1 != 1 && ++valor_prueba_1 == 2};
  // El programa únicamente evaluará el primer operando, ya que al tratarse de
  // un operador AND, desde que el primero sea falso la evalucaión del segundo
  // no cambiará el resultado de la disyunción, que resto será falso.
  std::cout << "El valor de la primera evidencia es: " << evidencia_1
            << std::endl;
  bool evidencia_2 {valor_prueba_1 == 1 || ++valor_prueba_1 != 2};
  // El  programa únicamente evaluará el primer operanco, ya que al tratarse de
  // un operador OR, desde que el primero sea cierto la evaluación del segundo
  // no cambiaría el resultado de la disyunción, que será cierta.
  std::cout << "El valor de la segunda evidecia es: " << evidencia_2
            << std::endl;

  return 0;
}
