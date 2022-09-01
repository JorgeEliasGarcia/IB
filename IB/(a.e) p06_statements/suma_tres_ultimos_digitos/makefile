CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS = 

all: suma_tres_ultimos_digitos 
suma_tres_ultimos_digitos:suma_tres_ultimos_digitos.o
	$(CXX) $(CXXFLAGS) -o  $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f suma_tres_ultimos_digitos *.o
	rm -rf a.out
         

