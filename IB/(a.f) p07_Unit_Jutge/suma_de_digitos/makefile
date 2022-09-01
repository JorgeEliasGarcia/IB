CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= suma_de_digitos
suma_de_digitos: suma_de_digitos.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f suma_de_digitos *.o
	rm -rf a.out 

