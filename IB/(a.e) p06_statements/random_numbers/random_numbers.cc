#include <iostream>
#include <ctime> 

void MensajeInicial() {
  std::cout << "Este programa genera un número aleatorio entre los dos números "
               "introducidos. "
            << std::endl;
  std::cout << "Introduzca el primer número: " << std::endl;
}

void SegundoMensajeInicial() {
  std::cout << "Introduzca el segundo número: " << std::endl;
}

int NumeroAleatorio(int numero_menor, int numero_mayor) {
  srand (time(NULL));
  int numero_aleatorio{std::rand() % (numero_mayor - (numero_menor + 1)) +
                       numero_menor};
  return numero_aleatorio;
}

int main() {
  MensajeInicial();
  int numero_menor;
  std::cin >> numero_menor;
  SegundoMensajeInicial();
  int numero_mayor;
  std::cin >> numero_mayor;
  if (numero_menor > numero_mayor) {
    int almacen_numero_menor{numero_menor};
    numero_menor = numero_mayor;
    numero_mayor = almacen_numero_menor;
  }
  std::cout << "El número aleatorio es: "
            << NumeroAleatorio(numero_menor, numero_mayor) << std::endl;
  return 0;
}
