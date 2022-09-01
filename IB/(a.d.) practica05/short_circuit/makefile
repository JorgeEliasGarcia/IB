CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all: short_circuit
short_circuit: short_circuit.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

