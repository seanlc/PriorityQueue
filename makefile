CC= g++
CFLAGS= -Wall -std=c++11 -ggdb

main: main.cpp PriorityQueue.h.gch
	$(CC) $(CFLAGS) -o main main.cpp
PriorityQueue.h.gch: PriorityQueue.h
	$(CC) $(CFLAGS) PriorityQueue.h
clean:
	rm -f main PriorityQueue.h.gch
