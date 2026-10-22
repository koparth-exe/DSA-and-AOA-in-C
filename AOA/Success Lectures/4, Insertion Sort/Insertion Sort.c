#include <stdio.h>

void main()
{
	int n;
	printf("Enter size of array: \n");
	scanf("%d", &n);
	int a[n];

	for(int i = 0; i <= n - 1; i++)
	{
		printf("Enter a number at a[%d]: \n", i);
		scanf("%d", &a[i]);
	}

	for(int i = 1; i <= n - 1; i++)
	{
		int item = a[i];
		int j = i - 1;
		
		while (j > -1 && a[j] > item)
		{
		    a[j + 1] = a[j];
		    j--;
		}
		a[j + 1] = item;
	}
	
	printf("Sorted Array is:\n");
	for (int i = 0; i <= n - 1; i++)
	{
	    printf("%d ", a[i]);
	}
}