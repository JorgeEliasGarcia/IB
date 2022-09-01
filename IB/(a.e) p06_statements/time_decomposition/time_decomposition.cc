#include <iostream>
#include <vector>

void MensajeInicial() {
  std::cout << "Este programa imprime el el número de horas, minutos y "
               "segundos representados por el número introducido. "
            << std::endl;
  std::cout << "Introduzca el número: " << std::endl;
}

std::vector<int> HorasMinutosSegundos(int numero_introducido) {
  std::vector<int> horas_minutos_segundos;
  int horas{numero_introducido / 3600};
  horas_minutos_segundos.emplace_back(horas);
  int minutos{(numero_introducido % 3600) / 60};
  horas_minutos_segundos.emplace_back(minutos);
  int segundos{(numero_introducido % 3600) % 60};
  horas_minutos_segundos.emplace_back(segundos);
  return horas_minutos_segundos;
}

int main() {
  MensajeInicial();
  int numero_introducido;
  std::cin >> numero_introducido;
  std::vector<int> horas_minutos_segundos{
      HorasMinutosSegundos(numero_introducido)};
  std::cout << "Horas"
            << "   "
            << "Minutos"
            << "   "
            << "Segundos" << std::endl;
  for (int contador : horas_minutos_segundos) {
      std::cout << contador << "         "; 
  }
  std:: cout << std::endl; 
  return 0;
}
