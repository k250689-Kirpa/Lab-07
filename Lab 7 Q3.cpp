#include<stdio.h>
int main()
{
	int n;
	int ids[n];
	
	printf("Enter the number of employees: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++)
	{
		printf("\nID for Employee %d: \n", i);
		scanf("%d", & ids[i]);
	}
	
	printf("\nThe rearranged list of Employee ID is:\n");
	
	for(int i = 1; i <= n; i++)
	{
		if(ids[i] % 2 == 0)
		{
			printf("%d ", ids[i]);
		}
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(ids[i] % 2 != 0)
		{
			printf("%d ", ids[i]);
		}
	}
	printf("\n");
	return 0;
	}
