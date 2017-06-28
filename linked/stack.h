#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

struct stack_t;

struct stack_t *create(void);

int is_empty(const struct stack_t *);

int push(struct stack_t *, int, int);

void pop(struct stack_t *, int *, int *);

void display(const struct stack_t *);

int create_stack_from_file(FILE *, struct stack_t **);

#endif // STACK_H_INCLUDED
