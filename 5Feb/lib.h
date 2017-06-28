#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

struct stack;

struct stack *init(void);

int push(struct stack **, int);

struct stack *get_num(const char *);

void display(const struct stack *);

void pop(struct stack *);

void free_stack(struct stack *);

#endif // LIB_H_INCLUDED
