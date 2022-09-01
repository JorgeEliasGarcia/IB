CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= sum_of_squares
sum_of_squares: sum_of_squares.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	
	rm -rf a.out
