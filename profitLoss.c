// If the cost price and selling price of an item is input through keyboard, wap to program to determine whether the seller has made loss or profit.
#include<stdio.h>
int main()
{
	int cp, sp;
	printf("Enter the cost prince:");
	scanf("%d",&cp);
	printf("Enter the Selling price:");
	scanf("%d",&sp);
	if(cp<sp)
	{
		printf("Profit");
	}
	if(cp>sp)
	{
		printf("Loss");
	}
	if(cp==sp)
	{
		printf("No profit , No Loss");
	}
return 0;
}
