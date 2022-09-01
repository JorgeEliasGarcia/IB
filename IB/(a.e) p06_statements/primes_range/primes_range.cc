#include <iostream>
#include <vector>

void PrimerMensajeInicial() {
  std::cout
      << "Este programa, dados dos números que formen un intervalo, imprime"
         "en pantalla todos los número primos dentro de ese intervalo"
      << std::endl;
  std::cout << "Introduzca el primer número: " << std::endl;
}

void SegundoMensajeInical() {
  std::cout << "Imprima el segundo número: " << std::endl;
}

std::vector<int> NumerosPrimos(int primer_numero, int segundo_numero) {
  std::vector<int> vector_numeros_primos;
  for (int i{primer_numero}; i <= segundo_numero; ++i) {
    for (int segundo_contador{1}; segundo_contador < i;
         ++segundo_contador) {
      if (i % segundo_contador == 0) {
        segundo_contador == i;
      } else if (i % segundo_contador != 0 &&
                 segundo_contador == i - 1) {
        vector_numeros_primos.emplace_back(segundo_contador);
      }
    }
  }
  return vector_numeros_primos;
}

int main() {
  PrimerMensajeInicial();
  int primer_numero;
  std::cin >> primer_numero;
  SegundoMensajeInical();
  int segundo_numero;
  std::cin >> segundo_numero;
  NumerosPrimos(primer_numero, segundo_numero);
  for (int cada_numero_primo : NumerosPrimos(primer_numero, segundo_numero)) {
    std::cout << cada_numero_primo << " ";
  }
  std::cout << std::endl;
  return 0;
}