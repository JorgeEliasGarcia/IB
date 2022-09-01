#include <iostream>

int main() {
  const int kValor_inical_codigoASCII{32};
  const int kValor_final_codigoASCII{126};
  std::cout << "Este programa imprime en pantalla los caracteres (char) "
               "asociados con los códigos ASCII en el rango [32, 126]."
            << std::endl << std::endl;
  std::cout << "Cógigo        Carácter";
  for (int numero{kValor_inical_codigoASCII};
       numero <= kValor_final_codigoASCII; ++numero) {
    std::cout << numero << "                " << char{numero} << std::endl;
  }

  return 0;
}