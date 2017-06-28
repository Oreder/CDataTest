#include "stack.h"
#include <assert.h>

struct node
{
    int info;
    int body;
    struct node *next;
};

struct stack_t
{
    struct node *head;
};

struct stack_t *create(void)         // create stack
{
    struct stack_t *tmp = malloc(sizeof(*tmp));
    if (tmp)
        tmp->head = NULL;
    return tmp;
}

int is_empty(const struct stack_t *s)   // check empty stack
{
    return s->head == NULL;
}

int push(struct stack_t *s, int info, int body)
{
    struct node *tmp = malloc(sizeof(*tmp));
    if (tmp)
    {
        tmp->info = info;
        tmp->body = body;
        tmp->next = s->head;

        s->head = tmp;      // new header
        return 1;           // return 1 (TRUE): PUSH is executed
    }

    return 0;               // PUSH error
}

void display(const struct stack_t *s)
{
    struct node *p = s->head;
    while (p)
    {
        printf("%d : %d\n", p->info, p->body);
        p = p->next;
    }
}

int create_stack_from_file(FILE *f, struct stack_t **s)
{
    int info, body, count = 0;

    while (!feof(f))
    {
        fscanf(f, "%d%d", &info, &body);
        push(*s, info, body);
        count++;
    }

    return count;
}

void search(struct stack_t *s)
