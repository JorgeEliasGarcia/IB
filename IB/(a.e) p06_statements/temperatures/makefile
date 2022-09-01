CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= temperatures
temperatures: temperatures.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f temperatures *.o
	rm -rf a.out
