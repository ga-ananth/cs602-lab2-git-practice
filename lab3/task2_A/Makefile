CC = gcc
CFLAGS = -Wall -Wextra

all: list_check list_run

linkedlist.o: linkedlist.c linkedlist.h
	$(CC) $(CFLAGS) -c $< -o $@

list_check: use_ll_2.c linkedlist.o
	$(CC) $(CFLAGS) $^ -o $@

list_run: use_linkedlist.c linkedlist.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f list_check list_run *.o
