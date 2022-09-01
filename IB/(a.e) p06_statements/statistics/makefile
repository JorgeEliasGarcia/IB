CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= statistics
statistics: statistics.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f statistics *.o
	rm -rf a.out 

