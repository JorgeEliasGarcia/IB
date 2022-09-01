#include <iostream>

int main() {
  int valor_numerico_entero = {7};
  int &ref_valor_numerico_entero = valor_numerico_entero;
  double valor_numerico_decimal{5.50};
  double &ref_valor_numerico_decimal = valor_numerico_decimal;
  bool valor_booleano = true;
  bool &ref_valor_booleano = valor_booleano;
  char caracter('a');
  char &ref_caracter = caracter;

  std::cout << "El valor que almacena la variable tipo int es: "
            << ref_valor_numerico_entero << std::endl;
  std::cout << "El valor que almacena la variable tipo double  es: "
            << ref_valor_numerico_decimal << std::endl;
  std::cout << "El valor que almacena la variable tipo bool es: "
            << ref_valor_booleano << std::endl;
  std::cout << "El valor que almacena la variable tipo char es: "
            << ref_caracter << std::endl;

  return 0;
}
