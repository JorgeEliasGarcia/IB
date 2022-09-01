CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

all= integrer_division_and_reminder
integrer_division_and_reminder: integrer_division_and_reminder.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

clean: 
	rm -f integrer_division_and_reminder *.o
	rm -rf a.out 

