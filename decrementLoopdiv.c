wap to display the GP - 100,50,25... all positive integer
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int a=100;
	int i;
	for(i=1;a>0;i++)
	{
		printf("%d ",a);
		a =a/2;
	}
	return 0;
	
}
