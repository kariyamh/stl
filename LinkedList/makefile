main: main.o LinkedListChar.o
	g++ -Wall main.o LinkedListChar.o 

main.o: main.cpp LinkedListChar.h
	g++ -Wall -c main.cpp

LinkedListChar.o: LinkedListChar.cpp LinkedListChar.h
	g++ -Wall -c LinkedListChar.cpp

clean:
	rm *.o *.~ main
