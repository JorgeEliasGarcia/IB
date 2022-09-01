CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all: change_case
change_case: change_case.o        
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

