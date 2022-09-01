#include <iostream>

void MensajeInicial() {
  std::cout << "Este programa imprime la suma de los componentes del "
               "numero introducido. "
            << std::endl;
  std::cout << "Porfavor, introduzca el número: " << std::endl;
}

int SumaDigitos(int numero_introducido) {
  int suma{0};
  while (numero_introducido > 0) {
    suma += numero_introducido % 10;
    numero_introducido = numero_introducido / 10;
    std::cout << "";
  }
  return suma;
}

int main() {
  MensajeInicial();
  int numero_introducido;
  std::cin >> numero_introducido;
  std::cout << "El resultado de la suma es: " << SumaDigitos(numero_introducido)
            << std::endl;
}
