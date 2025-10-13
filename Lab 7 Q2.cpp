#include<stdio.h>
int main()
{
	int marks[10];
	int highestMarks;
	
	printf("Enter the marks for 10 students:\n");
	
	for(int i = 1; i <= 10; i++)
	{
		printf("Student %d:", i);
		scanf("%d", &marks[i]);
		
	
	}
	
	for (int i = 1; i <=10; i++)
	{
			if (i == 1)
		{
			highestMarks = marks[i];
		}
		
		else if(marks[i] > highestMarks)
		{
			highestMarks = marks[i];
		}
	}
	
	printf("The highest marks in the class is %d", highestMarks);
	return 0;
}

