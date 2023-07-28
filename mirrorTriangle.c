#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number of lines:");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		int j;
		for(j=1;j<=n-i;j++) //for spaces
		{
			printf(" ");
		}
		int k;
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");	
	}
	
	return 0;
}
