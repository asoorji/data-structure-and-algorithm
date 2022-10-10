#include <stdio.h>
#include <stdlib.h>
// #define N 5;

int stack[5];
int top = -1;

void push();
void pop();
void peek();
void display();

int main()
{
    int choice;
    
    while(1)
    {
        printf("\n*******************MENU*****************");
        printf("\n 1. Push");
        printf("\n 2. Pop");
        printf("\n 3. Peek");
        printf("\n 4. Display");
        printf("\n 9. Exit");
        printf("----------------");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
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

void push()
{
    int x;
    printf("Enter value: ");
    scanf("%d", &x);
    if(top == 4)
    {
        printf("Overflow");     
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Nothing to remove. Stack is empty");
    }
    else{
        int item;
        item = stack[top];
        top--;
        printf("The top item to be removed is %d", item);
    }
}

void peek()
{
    printf("The top item  is %d", stack[top]);
}

void display()
{
    if(top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("The values are ");
        for(int i=top; i>=0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
}
