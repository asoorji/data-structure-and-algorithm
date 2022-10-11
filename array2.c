#include <stdio.h>

int main()
{
    int i, length, arr[15];
    
    printf("Enter length of array: ");
    scanf("%d", &length);

    for (i=0; i<=length-1; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    for (i=0; i<=length-1; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
