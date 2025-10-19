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
