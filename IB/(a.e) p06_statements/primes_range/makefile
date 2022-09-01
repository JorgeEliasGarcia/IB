CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= primes_range
primes_range: primes_range.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f primes_range *.o
	rm -rf a.out 

