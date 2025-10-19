//Question 6: A shopkeeper keeps a record of daily sold items using an array of item codes. However, one of the
//items (say item code 3) was found to be defective. Now the shopkeeper wants to remove all occurrences of that
//defective item code (3) from the record, so that only valid items remain in the list. Write a C program that helps the
//shopkeeper remove all occurrences of a given item code from the array and display the updated list of items.


#include<stdio.h>
int main()
{
	
	int itemsCode[10] = {2, 3, 5, 3, 7, 8, 3, 10, 3, 12};
	int defectiveCode = 3;
	int newSize = 0;
	
	printf("Original items code\n");
	for(int i = 0; i < 10; i++) {
		printf("%d  ", itemsCode[i]);
	}
	for(int i = 0; i < 10; i++) {
		if(itemsCode[i] != defectiveCode) {
			itemsCode[newSize] = itemsCode[i];
			newSize++;
		}
		
	}
		 printf("\n\nUpdated item codes (after removing code %d):\n", defectiveCode);
         for (int i = 0; i < newSize; i++) {
         	 printf("%d ", itemsCode[i]);
          }
         
        printf("\n");
        
		return 0;
}

