CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all: data_types
data_types: data_types.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

