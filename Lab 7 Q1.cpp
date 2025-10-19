//Question 1: A school administrator has a sorted list of student roll numbers stored in an array.
//Due to a data entry mistake, some roll numbers were entered more than once. Now, the administrator wants
//to remove all duplicate roll numbers so that each student appears only once in the list. 
//Write a  program that deletes duplicate elements from the sorted array of roll numbers.


#include <stdio.h>
int main()
{
    int roll[9] = {101, 102, 102, 103, 104, 104, 105, 105, 106};
    

    printf("Original Roll Numbers:\n");
    
    for(int i = 0; i < 9; i++)
    {
        printf("%d ", roll[i]);
    }

    printf("\n\nRoll Numbers after removing duplicates:\n");

    
    for(int i = 0; i < 9; i++)
    {
        if(i == 0 || roll[i] != roll[i - 1])
        {
            printf("%d ", roll[i]);
        }
    }

    printf("\n");
    return 0;
}


