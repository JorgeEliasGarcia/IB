CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all: references
references: references.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

