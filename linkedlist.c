#include <stdio.h>
#include <stdlib.h>

/**
*Resource: https://log2base2.com/courses/data-structures-in-c/linked-list-basics-c-trial
*/

struct node
{
    int data;
    struct node *next;
};

struct node *head, *middle, *last, *temp;

int main()
{
   
    head = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));
    
    head->data = 10;
    middle->data = 20;
    last->data = 30;
    
    head->next = middle;
    middle->next = last;
    last->next = NULL;
    
    struct node *temp = head;
    
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
