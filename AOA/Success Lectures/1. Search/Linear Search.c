#include <stdio.h>

void main()
{
    int a[6];
    for (int i = 0; i <= 5; i++)
    {
        printf("Enter number in a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    
    for (int i = 0; i <= 5; i++)
    {
        if (num == a[i])
        {
            printf("Element found at a[%d]: \n", i);
            break;
        }
        else if (i == 5) {
            printf("Element not found");
        }
    }
}