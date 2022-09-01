CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= maximun
maximun: maximun.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f maximun *.o
	rm -rf a.out 

