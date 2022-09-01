CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all: asteriscos
asteriscos: asteriscos.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f asteriscos *.o
	rm -rf a.out 



