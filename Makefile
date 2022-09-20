CXX = g++
CXXFLAGS = -Wall -g

all: list

list: main.cpp Node.hpp Node.cpp IntegerLinkedList.h IntegerLinkedList.cpp
	$(CXX) $(CXXFLAGS) -o list $^
	
run: clean list
	./list run

clean:
	rm -f list