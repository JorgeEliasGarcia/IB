#include <iostream>

bool AnyoBisiesto(int anyo_introducido) {
  bool anyo_bisiesto;
  int dividendo_anyo_entre_100 = anyo_introducido / 100;
  if ((anyo_introducido % 4 == 0) && (anyo_introducido % 100 > 0)) {
    anyo_bisiesto = true;
  } else if (((dividendo_anyo_entre_100 % 4) == 0) &&
             ((anyo_introducido % 100) == 0)) {
    anyo_bisiesto = true;
  } else {
    anyo_bisiesto = false;
  }
  return anyo_bisiesto;
}

int main() {
  std::cout << "Este programa determina si el año introducido es bisiesto o no."
            << std::endl;
  std::cout << "Introduzca el año: " << std::endl;
  int anyo_introducido;
  std::cin >> anyo_introducido;
  bool anyo_bisiesto{AnyoBisiesto(anyo_introducido)};
  if (anyo_bisiesto == false) {
    std::cout << "El año " << anyo_introducido << " no es bisiesto. "
              << std::endl;
  } else if (anyo_bisiesto == true) {
    std::cout << "El año " << anyo_introducido << " sí es bisiesto. "
              << std::endl;
  }

  return 0;
}
