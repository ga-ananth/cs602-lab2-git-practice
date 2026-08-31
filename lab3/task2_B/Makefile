CC = gcc
CFLAGS = -Wall -Wextra

all: calculator

calculator: main.o addition.o subtraction.o multiplication.o division.o
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.c operations.h
	$(CC) $(CFLAGS) -c $< -o $@

addition.o: addition.c operations.h
	$(CC) $(CFLAGS) -c $< -o $@

subtraction.o: subtraction.c operations.h
	$(CC) $(CFLAGS) -c $< -o $@

multiplication.o: multiplication.c operations.h
	$(CC) $(CFLAGS) -c $< -o $@

division.o: division.c operations.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f calculator *.o
