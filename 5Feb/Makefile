# Compiler
CC := gcc

# Compiler options
FLAG := -std=c99 -Wall -Werror -pedantic -ggdb

main.exe: main.o lib.o
	$(CC) $^ -o main.exe

lib.o: lib.c lib.h
	$(CC) $(FLAG) -c lib.c

main.o: main.c lib.h
	$(CC) $(FLAG) -c main.c

clean:
	$(RM) *.o *.exe
