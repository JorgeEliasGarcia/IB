CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= suma_digitos_numero_natural
suma_digitos_numero_natural: suma_digitos_numero_natural.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f suma_digitos_numero_natural *.o
	rm -rf a.out 

