#include <stdio.h>

void main()
{
	int a[6];

	for(int i = 0; i <= 5; i++)
	{
		printf("Enter a number in a[%d]: \n", i);
		scanf("%d", &a[i]);
	}

	int num;
	printf("Enter a number to search: \n");
	scanf("%d", &num);

	int i, found;
	int pivot = (num - 1) / 2;
	if (num >= a[pivot])
	{
		for (i = pivot; i <= 5; i++)
		{
			if (a[i] == num)
			{
			    found = 1;
				break;
			}
		}
	}
	else {
		for (i = pivot - 1; i >= 0; i--)
		{
			if (a[i] == num)
			{
			    found = 1;
				break;
			}
		}
	}
	if (found == 1) {
		printf("Found at position %d\n", i);
	}
	else {
		printf("Not found\n");
	}
}
	
	
	