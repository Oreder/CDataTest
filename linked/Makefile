# Compiler
CC := gcc

# Compiler options
FLAG := -std=c99 -Wall -Werror -pedantic -ggdb

main.exe: main.o stack.o
	$(CC) $^ -o main.exe

stack.o: stack.c stack.h
	$(CC) $(FLAG) -c stack.c

main.o: main.c stack.h
	$(CC) $(FLAG) -c main.c

clean:
	$(RM) *.o *.exe
