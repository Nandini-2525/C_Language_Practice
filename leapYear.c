//Check whether the given year is a leap year.
#include<stdio.h>
int main()
{
	int y;
	printf("Enter the number");
	scanf("%d",&y);
	if(y%4==0)
	{
		printf("%d is a Leap year",y);
	}
	else
	{
		printf("%d is not a leap year",y);
	}
return 0; 
}
