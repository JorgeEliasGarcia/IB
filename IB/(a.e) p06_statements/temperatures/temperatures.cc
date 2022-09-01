#include <iostream>

void MensajeInicial() {
  std::cout
      << "¡Hola! Este programa determinará si la temperatura está bien, hace "
         "frío o hace calor. Además,  el programa le advertirá si con la "
         "temperatura dada el agua herviría, o se congelaría. "
      << std::endl
      << std::endl;
  std::cout << "Porfavor, introduzca la temperatura en grados: " << std::endl;
}

void Temperatura(int temperatura) {
  if (temperatura <= 30 && temperatura >= 10) {
    std::cout << "La temperatura está bien, no hace ni frío ni calor"
              << std::endl;
  } else if (temperatura > 30) {
    std::cout << "Hace calor. " << std::endl;
  } else {
    std::cout << "Hace frío." << std::endl;
  }
}

void EbullicionCongelacionAgua(int temperatura) {
  if (temperatura > 0 && temperatura < 100) {
    std::cout << "El agua ni se evaporará ni se congelará. " << std::endl;
  } else if (temperatura < 0) {
    std::cout << "El agua se congelará. " << std::endl;
  } else {
    std::cout << "El agua se evaporará." << std::endl;
  }
}

int main() {
  MensajeInicial();
  int temperatura;
  std::cin >> temperatura;
  Temperatura(temperatura);
  EbullicionCongelacionAgua(temperatura);
  return 0;
}
