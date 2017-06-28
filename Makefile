# Compiler
CC := gcc

# Compiler options
FLAG := -std=c99 -Wall -Werror -pedantic -ggdb



clean:
	$(RM) *.o *.exe
