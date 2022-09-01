#include <iostream>

int main() {
  std::cout << "Este programa determina si la letra introudica es mayúscula o "
            "minúsucla. Además de si es vocal o consonante. "
      << std::endl;
  std::cout << "Porfavor, introduzca la letra deseada: " << std::endl;
  char letra_introducida;
  std::cin >> letra_introducida;

  if (65 <= letra_introducida <= 90 && 65 <= letra_introducida <= 69) {
        std::cout << "La letra introducida es una mayúscula. Además es una vocal. " << std::endl; 
    } else if  (65 <= letra_introducida <= 90 && 69 < letra_introducida < 91) {
        std::cout << "La letra introducida es una mayúscula. Además es una consonante"
            << std::endl;
    } else if (96 < letra_introducida < 123 && 96 < letra_introducida << 102) {
        std::cout << "La letra introducida es una minúscula. Además es una "
                     "vocal."
                  << std::endl;
    } else if (96 < letra_introducida < 123 && 101 < letra_introducida << 123) {
        std::cout << "La letra introducida es una minúscula. Además es una consonante. " << std::endl; 

    } else {
    std::cout << "Valor no válido, debe introducir una letra";
    std::cout << " lo sentimos" << std::endl;
  }
  
  
  return 0;
}