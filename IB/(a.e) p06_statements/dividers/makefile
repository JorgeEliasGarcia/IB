CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS = 

all= dividers
dividers: dividers.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f dividers *.o
	rm -rf a.out 

