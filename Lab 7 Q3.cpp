//Question 3: A data entry operator is organizing a list of employee ID numbers. 
//She wants to separate all even and odd ID numbers so that even IDs appear first, followed by odd IDs in the list. 
//Write a C program that rearranges the array in such a way that all even numbers come first and
//all odd numbers come after them.


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

