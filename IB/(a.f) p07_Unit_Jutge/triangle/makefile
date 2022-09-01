CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= triangle
triangle: triangle.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f triangle *.o
	rm -rf a.out 


double NumeroArmonicoPrimerNumero(int primer_numero) {
  double numero_armonico_primer_numero{0};
  for (double contador{1}; contador <= primer_numero; ++contador) {
    numero_armonico_primer_numero += (1 / contador);
  }
  return numero_armonico_primer_numero;
}

double NumeroArmonicoSegundoNumero(int segundo_numero) {
  double numero_armonico_segundo_numero{0};
  for (double contador{1}; contador <= segundo_numero; ++contador) {
    numero_armonico_segundo_numero += (1 / contador);
  }
  return numero_armonico_segundo_numero;
}

std::cout << std::fixed << std::setprecision(10)
              << NumeroArmonicoPrimerNumero(primer_numero) -
                     NumeroArmonicoSegundoNumero(segundo_numero)
              << std::endl;


void MensajeInicial() {
  std::cout
      << "Este programa recibe dos números, tal que el primero tiene que ser "
         "mayor que el segundo, e imprime en pantalla la resta del número "
         "armónico del primer número con el número armónico del segundo"
      << std::endl;
  std::cout << "Introduzca los dos números separados por un espacio y pulse la "
               "tecla enter. "
            << std::endl;
}