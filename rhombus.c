//Rhombus pattern

#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		int j;
		for(j=1;j<=n-i;j++)
		{
		 printf(" ");
		}
		int k,a=n;
		for(k=1;k<=a;k++)
		{
			printf("*");
		}
		a--;
		printf("\n");
	}
	
	return 0;
}
