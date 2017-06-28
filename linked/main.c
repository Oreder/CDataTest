#include "stack.h"

int main()
{
    FILE *f = fopen("test.txt", "r");
    if (!f)
    {
        printf("Error #1: File does not exist!\n");
        return -1;
    }

    struct stack_t *s = create();

    int n = create_stack_from_file(f, &s);

    printf("#Total [%d] nodes were created!\n\n", n);

    display(s);



    return 0;
}
