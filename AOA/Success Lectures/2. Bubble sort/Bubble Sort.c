#include <stdio.h>

void main()
{
    int n;
    printf("Enter size of Array: \n");
	scanf("%d", &n);
	int a[n];

	for(int i = 0; i <= n - 1; i++)
	{
		printf("Enter a number in a[%d]: \n", i);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i <= n - 1; i++)
	{
    	for (int i = 0; i <= n - 2; i++)
    	{
    	    if (a[i] > a[i + 1])
    	    {
    	        // Swap
    	        a[i] = a[i] - a[i + 1];
    	        a[i + 1] = a[i] + a[i + 1];
    	        a[i] = a[i + 1] - a[i];
    	    }
    	}
	}
	for(int i = 0; i <= n - 1; i++)
	{
		printf("%d ", a[i]);
	}
}
	
	
	