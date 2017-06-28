#include "lib.h"
#include "string.h"

struct node
{
    int n;
    struct node *prev;
};

struct stack
{
    struct node *end;
};

struct stack *init(void)
{
    struct stack *s = malloc(sizeof(*s));
    if (s)
        s->prev = NULL;
    return s;
}

int push(struct stack **s, int n)
{
    struct node *tmp = malloc(sizeof(*tmp));
    if (tmp)
    {
        tmp->n = n;
        tmp->prev = NULL;

        (*s)->end->prev = tmp;
        return 1;
    }
    return 0;
}

struct stack *get_num(const char *c)
{
    struct stack *tmp = malloc(sizeof(*tmp));
    if (tmp)
    {
        for (size_t i = strlen(c) - 1; i >= 0; i--)
            if (!push(&tmp, c[i]))
                break;

        return tmp;
    }
    return NULL;
};

void display(const struct stack *s)
{
    struct node *pe = s->end;
    while (pe->prev != NULL)
    {
        printf("%d <- ", pe->n);
        pe = pe->prev;
    }
    printf("%d\n", pe->n);
}

void pop(struct stack *s)
{
    struct node *p = s->end;
    if (p)
    {
        s->end = p->prev;
        free(p);
    }
}

void free_stack(struct stack *s)
{
    while (s->end != NULL)
        pop(s);
    free(s);
}
