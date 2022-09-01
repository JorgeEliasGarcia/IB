CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= secuencia_de_collatz
secuencia_de_collatz: secuencia_de_collatz.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f secuencia_de_collatz *.o
	rm -rf a.out 

