CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= aumentar_un_segundo
aumentar_un_segundo: aumentar_un_segundo.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f aumentar_un_segundo *.o
	rm -rf a.out 
