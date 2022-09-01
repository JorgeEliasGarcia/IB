
#include <iostream>

int main() {

  std::cout << "¡Hola! Este programa transforma tu letra en su mayúscula "
               "correspondiente"
            << std::endl;
  std::cout << "Inserte la letra: " << std::endl;
  char letra_introducida;
  std::cin >> letra_introducida;

  if (letra_introducida >= 65 && letra_introducida <= 122) {
    if (letra_introducida <= 90) {
      char letra_devuelta{letra_introducida + 32};
      std::cout << "La letra " << letra_introducida << " corresponde a ";
      std::cout << letra_devuelta << std::endl;
    } else if (letra_introducida >= 97) {
      char letra_devuelta{letra_introducida - 32};
      std::cout << "La letra " << letra_introducida << " corresponde a ";
      std::cout << letra_devuelta << std::endl;
    } else {
      std::cout << "Valor no válido, debe introducir una letra";
      std::cout << " lo sentimos" << std::endl;
    }

  } else {
    std::cout << "Valor no válido, debe introducir una letra";
    std::cout << " lo sentimos" << std::endl;
  }
  return 0;
}
