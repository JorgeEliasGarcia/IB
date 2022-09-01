CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= leap_year
leap_year: leap_year.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f leap_year *.o
	rm -rf a.out 

