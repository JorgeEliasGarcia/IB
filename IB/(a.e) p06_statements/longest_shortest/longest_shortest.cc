#include <iostream>
#include <string>
#include <vector>

void MensajeInicial() {
  std::cout << "Este programa muestra en pantalla la palabra más larga y la "
               "más corta de las palabras introducidas. "
            << std::endl
            << std::endl;
  std::cout << "Introduzca el número de palabras: " << std::endl;
}

std::vector<std::string> PalabrasIntroducidas(int numero_palabras) {
  std::vector<std::string> almacenar_palabras;
  for (int contador{1}; contador <= numero_palabras; ++contador) {
    std::string palabra;
    std::cout << "Palabra " << contador << ": ";
    std::cin >> palabra;
    almacenar_palabras.emplace_back(palabra);
    std::cout << std::endl;
  }

  return almacenar_palabras;
}

std::string PalabraMayor(std::vector<std::string> palabras_introducidas) {
  std::string palabra_mayor{""};
  for (std::string cada_palabra_del_vector : palabras_introducidas) {
    if (cada_palabra_del_vector.size() > palabra_mayor.size()) {
      palabra_mayor = cada_palabra_del_vector;
    }
  }

  return palabra_mayor;
}

std::string PalabraMenor(std::vector<std::string> palabras_introducidas) {
  std::string palabra_menor{palabras_introducidas[1]};
  for (std::string cada_palabra_del_vector : palabras_introducidas) {
    if (cada_palabra_del_vector.size() < palabra_menor.size()) {
      palabra_menor = cada_palabra_del_vector;
    }
  }

  return palabra_menor;
}

int main() {
  MensajeInicial();
  int numero_palabras;
  std::cin >> numero_palabras;
  std::cout << "Cantidad de palabras: " << numero_palabras << std::endl
            << std::endl;
  std::vector<std::string> palabras_introducidas{
      PalabrasIntroducidas(numero_palabras)};
  std::cout << "La palabra mayor es: " << PalabraMayor(palabras_introducidas)
            << std::endl;
  std::cout << "La palabra menor es: " << PalabraMenor(palabras_introducidas)
            << std::endl;

  return 0;
}