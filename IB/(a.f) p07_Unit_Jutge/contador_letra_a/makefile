CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= contador_letra_a
contador_letra_a: contador_letra_a.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f contador_letra_a *.o
	rm -rf a.out 

