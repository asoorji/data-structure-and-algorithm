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
    printf("******STACK(LIFO) USING LINKEDLIST ********\n");
    printf("To opt out, type 0\n");

    first = malloc(sizeof(struct stack));
    second = malloc(sizeof(struct stack));
    third = malloc(sizeof(struct stack));
    last = malloc(sizeof(struct stack));

    first -> address = NULL;
    second -> address = first;
    third  -> address = second;
    last -> address = third;

    printf("Enter first value: ");
    scanf("%d", &first -> data);

    printf("Enter second value: ");
    scanf("%d", &second -> data);

    printf("Enter third value: ");
    scanf("%d", &third -> data);

    printf("Enter last value: ");
    scanf("%d", &last -> data);

    temp = last;
    printf("The values are: ");
    while(temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> address;
    }

    return 0;
}
