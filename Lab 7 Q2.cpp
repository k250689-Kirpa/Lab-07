//Question 2: A class teacher has recorded the marks of her 10 students. 
//Now, she wants to find out which student scored the highest marks in the class. Write a C program that finds the largest (highest) marks from the list of students' marks.


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

