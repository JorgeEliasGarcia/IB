CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= elementos
elementos: elementos.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f elementos *.o
	rm -rf a.out 

