#include <stdio.h>
int main() {
	char itemname[100];
	float price, totalcost = 0, itemcost = 0 , cost = 0;
	char choice;
	int itemcount = 0, overnightshipping = 0;
	
	printf("Welcome to the our online order System!\n");
   
    do {
        printf("Enter item name: ");
        scanf("%s", itemname); 

        printf("Enter item price: $");
        scanf("%f", &price);

        printf("Do you need overnight shipping for this item? (1 for Yes, 0 for No): ");
        scanf("%d", &overnightshipping);

        itemcount++;
        itemcost = price;
		cost += itemcost;

        printf("Do you want to continue shopping? (Y/N): ");
        scanf(" %c", &choice); 

    } while (choice =='Y' || choice == 'y');

    // minimum order requirement check
    if (itemcount< 2) {
        printf("A minimum of 2 items is required for one order.\n");
        return 1; // Ending the program if the minimum requirement is not met
    }
	 
	// calculating shipping costs
        if ( cost < 10) 
		{
            cost += 2; // regular shipping for items under $10
        } else 
		{
            cost += 3; // regular shipping for items $10 or more
        }

        if (overnightshipping) 
		{
            cost += 5; // overnight delivery
        }

        totalcost += cost;

    // applying discount if more than 5 items are ordered
    if (itemcount > 5) {
        totalcost *= 0.8; // applying a 20% discount
    }

    // displaying the receipt
    printf("\n  Your Receipt \n");
    printf("Total items: %d\n", itemcount);
    printf("Total cost: $%.2f\n", totalcost);
    printf("Thank you for shopping with us!\n");

    return 0;
}
	 