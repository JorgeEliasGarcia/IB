CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= intervals
intervals: intervals.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f intervals *.o
	rm -rf a.out 

