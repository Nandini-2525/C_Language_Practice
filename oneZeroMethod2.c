/* Pattern floyd's triangle:  
	1
	0 1
	1 0 1
	0 1 0 1
	Method 2
*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int i,j;
	for(i =1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0) 
			{
				printf("1 ");
			}
			else printf("0 ");
		}
		printf("\n");
	}
	return 0;
}
