//Question 5: A shopkeeper is checking the prices of items in his store. He has a list of item prices stored in an array.
//A customer comes and says:
//“I want to buy two items whose total price is exactly equal to my budget.”
//The shopkeeper wants to quickly find which two items have prices that add up to the customer’s given budget (it is
//also called 2 sum problem). You are required to help him by writing a C program that finds and displays the pair of
//item prices whose sum equals the given budget.
	
#include<stdio.h>
int main()
{
	int prices[9] = {200, 750, 400, 676, 450, 890, 235, 214, 745};
	int budget;
	int found = 0;
	
	printf("Item prices in the store:\n");
	for(int i = 0; i < 9; i++) {
		printf("%d  ", prices[i]);
	}
	
	printf("\n\nEnter customer's budget: ");
	scanf("%d", &budget);
	
	printf("\n\nSearching for two items whose total equals the budget....");
	
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < i+1; j++) {
			if(prices[i] + prices[j] == budget) {
				printf("\n\nItems found: %d and %d (sum = %d)", prices[i], prices[j], budget);
				found = 1;
			}
			
		}
	}
	
	if(!found) {
		printf("No two items found with total price equal to the %d.", budget);
	}
	return 0;
}


