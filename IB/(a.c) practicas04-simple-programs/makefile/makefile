CXX = g++
CXXFLAGS = -std=c++14 -Wall 
LDFLAGS = 

all:contador_dinero coste_carretera 

contador_dinero: contador_dinero.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

coste_carretera: coste_carretera.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

