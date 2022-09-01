CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= classification
classification: classification.o
        $(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f classification *.o
	rm -rf a.out
~                   
