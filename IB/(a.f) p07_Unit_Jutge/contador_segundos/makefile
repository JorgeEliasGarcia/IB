CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= contador_segundos
contador_segundos: contador_segundos.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f contador_segundos *.o
	rm -rf a.out 
