//Question 7: A class teacher has two sections, Section A and Section B. Each section’s roll numbers are stored
//separately in two arrays. Now, the teacher wants to combine both sections’ roll numbers into one list so she can
//prepare a single attendance sheet for the whole class. Write a C program that merges the roll numbers of both
//sections into one new array and displays the final combined list.


#include<stdio.h>
int main() {
	
	int sectionA[6] = {101, 102, 103, 104, 105, 106};
	int sectionB[5] = {107, 108, 109, 110, 111};
	int combined[11];
	
	
	for(int i = 0; i < 6; i++ ) {
		combined[i] = sectionA[i];
	}
	
	for(int j = 0; j < 5; j++) {
		combined[6 + j] = sectionB[j];
	}
	
	printf("The final list of combined roll numbers of both sections:\n");
	
	for(int k = 0; k < 11; k++) {
		printf("%d\n", combined[k]);
	}
	
	printf("\n");
	return 0;
	
}

