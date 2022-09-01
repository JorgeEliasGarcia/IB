CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all: longest_shortest
longest_shortest: longest_shortest.o        
	$(CXX) $(CXXFLAGS) -o  $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f longest_shortest *.o
	rm -rf a.out


