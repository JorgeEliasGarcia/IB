
#include <iostream> 

int main() {
  int bytes_int {sizeof(int)};
  int bytes_double {sizeof(double)};
  int bytes_bool {sizeof(bool)};
  int bytes_char {sizeof(char)};

  std::cout << "El tipo de datos bool se representa utilizando " << bytes_bool;
  std::cout << " bytes" << std::endl; 
  std::cout << "El tipo de datos char se representa utilizando " << bytes_char;
  std::cout << " bytes" << std::endl; 
  std::cout << "El tipo de datos int se representa utilizando " << bytes_int ;
  std::cout << " bytes" << std::endl; 
  std::cout << "El tipo de datos double se representa utilizando ";
  std::cout << bytes_double << " bytes" << std::endl; 
  
  return 0;
}