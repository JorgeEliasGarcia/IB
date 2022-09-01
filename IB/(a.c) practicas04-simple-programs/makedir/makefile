CXX = g++ 
CXFLAGS = -std=c++14 -Wall
LDFLAGS = 
       
all: arithmetic_operators boolean_operators change_case data_types references short_circuit 

arithmetic_operators: arithmetic_operators.o
	$(CXX) $(CXFLAGS) -o $@ $^ $(LDFLAGS) 
.PHONY: all clean 

boolean_operators: boolean_operators.o 
	$(CXX) $(CXFLAGS) -o $@ $^ $(LDFLAGS)
.PHONY: all clean

change_case: change_case.o
	$(CXX) $(CXFLAGS) -o $@ $^ $(LDFLAGS)
.PHONY: all clean

data_types: data_types.o
	$(CXX) $(CXFLAGS) -o $@ $^ $(LDFLAGS)
.PHONY: all clean

references: references.o 
	$(CXX) $(CXFLAGS) -o $@ $^ $(LDFLAGS)
.PHONY: all clean

short_circuit: short_circuit.o
	$(CXX) $(CXFLAGS) -o $@ $^ $(LDFLAGS)
.PHONY: all clean

