#include <cmath>
#include <iostream>

int main() {
  std::cout << "Hola! Este programa imprime en pantalla el resultado de operar "
               "varias variables con todos los operadores que pueda utilizar "
               "con ellas"
            << std::endl;
  std::cout << "Escriba el primer número: " << std::endl;
  double numero_1;
  std::cin >> numero_1;
  std::cout << "Ahora escriba el segundo número: " << std::endl;
  double numero_2;
  std::cin >> numero_2;
  std::cout << "El resultado de operar: " << numero_1 << " + " << numero_2
            << " es: " << numero_1 + numero_2 << std::endl;
  std::cout << "El resultado de operar: " << numero_1 << " - " << numero_2
            << " es: " << numero_1 - numero_2 << std::endl;
  std::cout << "El resultado de operar: " << numero_1 << " * " << numero_2
            << " es: " << numero_1 * numero_2 << std::endl;
  std::cout << "El resultado de operar: " << numero_1 << " / " << numero_2
            << " es: " << numero_1 / numero_2 << std::endl;
  double epsilon{__FLT_EPSILON__};
  if ((numero_1 - numero_2) >= 0 && (numero_1 - numero_2) <= __FLT_EPSILON__) {
    std::cout << "El resultado de operar: " << numero_1 << " = " << numero_2
              << " es verdadero, los valores son iguales." << std::endl;
  } else if ((numero_1 - numero_2) > __FLT_EPSILON__) {
    std::cout << "El resultado de operar: " << numero_1 << " = " << numero_2
              << " es falso, ya que el número: " << numero_1 << " > " << numero_2
              << std::endl;
  } else if ((numero_2 - numero_1) > __FLT_EPSILON__) {
    std::cout << "El resultado de operar: " << numero_1 << " = " << numero_2
              << "es falso, ya que el número: " << numero_2 << " > " << numero_1
              << std::endl;
  }
  int numero_1_entero = ceil (numero_1 + 0.5);
  int numero_2_entero = ceil (numero_2 + 0.5);
  std::cout << "EL resultado de operar: " << numero_1 << " % " << numero_2
            << " (tomando el valor entero más proximo al valor decimal) es " << numero_1_entero % numero_2_entero << std::endl;

  return 0;
}
