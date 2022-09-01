#include <iostream>

void MensajeInicial() {
  std::cout << "Este programa imprime un cuadrado del número de asteríscos "
               "introducido. "
            << std::endl
            << std::endl;
  std::cout << "Introduzca el número de asteriscos que quiere imprimir por "
               "fila y columna"
            << std::endl;
}

void CuadradoAsteriscos(int numero_introducido) {
  for (int contador_filas{1}; contador_filas <= numero_introducido;
       ++contador_filas) {
    for (int numero_asteriscos_por_fila{1};
         numero_asteriscos_por_fila <= numero_introducido;
         ++numero_asteriscos_por_fila) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

int main() {
  MensajeInicial();
  int numero_introducido;
  std::cin >> numero_introducido;
  CuadradoAsteriscos(numero_introducido);
  return 0;
}
