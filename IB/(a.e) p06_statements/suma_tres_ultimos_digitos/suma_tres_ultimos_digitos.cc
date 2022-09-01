#include <iostream>

void MensajeInicial() {
  std::cout << "Hola! Este programa imprime la suma de los tres últimos "
               "digitos del número introducido. "
            << std::endl
            << std::endl;
  std::cout << "Porfavor, introduzca el número: " << std::endl;
}

int SumaTresUltimosDigitos(int numero_introducido) {
  const int kDivisor{10};
  int digito_1, digito_2, digito_3, suma;
  digito_1 = numero_introducido % kDivisor;
  digito_2 = (numero_introducido / 10) % kDivisor;
  digito_3 = (numero_introducido / 100) % kDivisor;
  suma = digito_1 + digito_2 + digito_3;

  return suma;
}

int main() {
  MensajeInicial();
  int numero_introducido;
  std::cin >> numero_introducido;
  std::cout << "La suma de los tres últimos dígitos es: "
            << SumaTresUltimosDigitos(numero_introducido) << std::endl;
}
