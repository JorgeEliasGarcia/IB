#include <algorithm>
#include <ctime>
#include <iostream>
#include <vector>

void MensajeInicial() {
  std::cout << "Hola, el programa imprimirá en pantalla el valor medio de los datos "
               "del intervalo [0.0, 10.0] así como los valores mínimo y máximo."
            << std::endl
            << std::endl;
  std::cout << "Introduzca cuantos número desea que calcule el programa, para "
               "calcular el valor máximo, mínimo y medio"
            << std::endl;
}

std::vector<int> VectorValoresAleatorios(const int kVector_size) {
  srand(time(NULL));
  const int valor_minimo{0};
  const int valor_maximo{10};
  std::vector<int> vector_valores_aleatorios(kVector_size);
  for (int contador{1}; contador <= kVector_size; ++contador) {
    int valores_aleatorios{std::rand() % (valor_maximo - (valor_minimo + 1)) +
                           valor_minimo};
    vector_valores_aleatorios.emplace_back(valores_aleatorios);
  }
  return vector_valores_aleatorios;
}

int ValorMaximo(std::vector<int> vector_valores_aleatorios) {
  int valor_maximo = *std::max_element(vector_valores_aleatorios.begin(),
                                       vector_valores_aleatorios.end());
  return valor_maximo;
}

int ValorMinimo(std::vector<int> vector_valores_aleatorios) {
  int valor_minimo = *std::min_element(vector_valores_aleatorios.begin(),
                                       vector_valores_aleatorios.end());
  return valor_minimo;
}

int main() {
  MensajeInicial();
  int numero_introducido;
  std::cin >> numero_introducido;
  const int kVector_size{numero_introducido};
  std::vector<int> vector_valores_aleatorios{
      VectorValoresAleatorios(kVector_size)};
  std::cout << "El valor máximo es: " << ValorMaximo(vector_valores_aleatorios)
            << std::endl;
  std::cout << "El valor mínimo es: " << ValorMinimo(vector_valores_aleatorios)
            << std::endl;
  int valor_maximo{ValorMaximo(vector_valores_aleatorios)};
  int valor_minimo{ValorMinimo(vector_valores_aleatorios)};
  int valor_medio{(valor_maximo + valor_minimo) / 2};
  std::cout << "El valor medio es: " << valor_medio << std::endl;

  return 0;
}
