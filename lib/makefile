# Makefile for pqace lib

test: main.o libpqace.a
	g++ -o test main.o -L. -lpqace -lpqxx -lpq

main.o: main.cpp
	g++ -c main.cpp

libpqace.a: pqace.o
	ar r libpqace.a pqace.o

pqace.o: pqace.cpp
	g++ -c pqace.cpp

clean:
	rm -f *.o *.a test