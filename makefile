all: lab1

lab1: lab1.o list.o
	g++ lab1.o list.o -o 1lab

lab1.o: lab1.cpp
	g++ -c lab1.cpp

list.o: list.cpp
	g++ -c list.cpp

clean:
	rm -rf *o lab1
