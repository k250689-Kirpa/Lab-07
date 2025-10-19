#include <stdio.h>

int main (void)
{
	int arr[12] = {101, 102, 105, 102, 101, 103, 102, 104, 102, 105, 160, 100};
	
	int element=arr[0], maxcount=0, i, j;
	
	for(i = 0; i < 12; i++)
	{
		int count =0;
		
		for(j = 0; j < 12; j++)
		{
			if (arr[i]==arr[j])
			{
				count ++;
			}
		}
		if (count>maxcount)
		{
			maxcount=count;
			element=arr[i];
		}
	}
	
	printf("The most frequent item id in sales record is %d with count of %d\n", element, maxcount);
	
	return 0;
}
