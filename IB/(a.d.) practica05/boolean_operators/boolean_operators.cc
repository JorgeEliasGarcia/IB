#include <iostream>

int main() {
  std::cout << "Hola! Este programa imprime la tabla de verdad de los "
               "operadores lógicos de c++"
            << std::endl
            << std::endl;
  std::cout << "Pulse cualquier número y enter para continuar" << std::endl;
  char numero_cualquiera;
  std::cin >> numero_cualquiera;
  std:: cout << std::endl << std::endl;
  bool primer_valor_A{true};
  bool segundo_valor_B{false};
  std::cout << "A " << "   " << "B " << "   "  << "A & B " << "   "
            << "A || B "  << "   "  << "A! " << "   " << "B!" << std::endl;
  std::cout << primer_valor_A << "    " << segundo_valor_B << "      " 
            << (primer_valor_A && segundo_valor_B) << "        " 
            << (primer_valor_A || segundo_valor_B) << "       " 
            << !primer_valor_A << "      " <<!segundo_valor_B 
            << std::endl << std::endl;
  std::cout << "Ahora operaremos con negados" << std::endl << std::endl;
  std::cout <<"A! & B " << "   " << "A & B!" << "   " 
            << "!A || B "  << "   "  << "A || !B" 
            << std::endl; 
  std::cout << "   " << (!primer_valor_A && segundo_valor_B) << "         "
            << (!segundo_valor_B && primer_valor_A) << "        "
            << (!primer_valor_A  || segundo_valor_B) << "         "
            << (!segundo_valor_B || primer_valor_A) << std::endl; 
}
