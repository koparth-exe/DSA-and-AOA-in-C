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

	for(int i = 0; i <= n - 2; i++)
	{
		int small = a[i];
		int pos = i;
		for (int j = i + 1; j <= n - 1; j++)
		{
			if (a[j] < small)
			{
				small = a[j];
				pos = j;
			}
		}
		if (pos != i)
		{
		    a[pos] = a[pos] - a[i];
		    a[i] = a[pos] + a[i];
		    a[pos] = a[i] - a[pos];
		}
	}
	
	printf("Sorted Array is:\n");
	for (int i = 0; i <= n - 1; i++)
	{
	    printf("%d ", a[i]);
	}
}