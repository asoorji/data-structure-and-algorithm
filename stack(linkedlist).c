#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *address;
};
struct stack *first, *second, *third, *last, *temp;

int main()
{
    printf("Orji ");

    first = malloc(sizeof(struct stack));
    second = malloc(sizeof(struct stack));
    third = malloc(sizeof(struct stack));
    last = malloc(sizeof(struct stack));

    first -> data = 1;
    second -> data = 2;
    third -> data = 3;
    last -> data = 4;

    first -> address = NULL;
    second -> address = first;
    third  -> address = second;
    last -> address = third;

    temp = last;
    while (temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> address;
    }
    
    return 0;
}
