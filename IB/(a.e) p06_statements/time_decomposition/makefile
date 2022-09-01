CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all: time_decomposition
time_decomposition: time_decomposition.o	
	$(CXX) $(CXXFLAGS) -o  $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f time_decomposition *.o
	rm -rf a.out

