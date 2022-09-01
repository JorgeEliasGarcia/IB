CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS = 	

all: random_numbers
random_numbers: random_numbers.o 
	$(CXX) $(CXXFLAGS) -o  $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f random_numbers *.o
	rm -rf a.out



