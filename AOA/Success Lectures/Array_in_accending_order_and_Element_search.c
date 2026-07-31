#include <stdio.h>
void main()
{
    int a[6];
    int i, num;
    for (i = 0; i <=5; i++)
    {
        printf("Enter and fill number at a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Enter a number to find it in array: ");
    scanf("%d", &num);
    for(i = 0; i <= 5; i++)
    {
        if (a[i] == num)
        {
            printf("Element found!");
            break;
        }
        else if (i = 6)
        {
            printf("Element not found!");
        }
    }
    return 0;
}


