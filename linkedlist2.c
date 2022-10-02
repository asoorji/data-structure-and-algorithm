/**
* Create and display a LinkedList 
*Resource: https://www.edureka.co/blog/linked-list-in-c/#:~:text=What%20is%20Linked%20List%20in,which%20is%20called%20a%20node.
*/

#include <stdio.h>
#include <stdlib.h>

void create();
void display();

struct node {
    int info;
    struct node *next;
};
struct node *start = NULL;

int main()
{
    int choice;
    
    while(1)
    {
        printf("\n*******************MENU*****************");
        printf("\n 1. Create     n");
        printf("\n 2. Display    n");
        printf("\n 9. Exit   n");
        printf("----------------");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 9:
                exit(0);
                break;
            default:
                printf("n Wrong Choice: n");
                break;
        }
    }
    return 0;
}

void create()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("nOut of memory space: ");
        exit(0);
    }
    printf("Enter the data value for the node: ");
    scanf("%d", &temp->info);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
             ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("nList is empty:n");
                return;
        }
        else
        {
                ptr=start;
                printf("The List elements are:");
                while(ptr!=NULL)
                {
                        printf("%d",ptr->info );
                        ptr=ptr->next ;
                }
        }
}
