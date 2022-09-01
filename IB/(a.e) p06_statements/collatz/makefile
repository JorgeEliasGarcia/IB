CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= collatz
collatz: collatz.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f collatz *.o
	rm -rf a.out 

