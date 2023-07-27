/* Pattern zero's and one triangle:  
	1
	0 1
	1 0 1
	0 1 0 1
	Method 1
*/


#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int i,j;
	int a=0;
	for(i = 1; i<=n;i++)
	{	if(i%2!=0) a=1;
		else a=0;
	
		for(j=1; j<=i; j++)
		{
		printf("%d ",a);
		if(a==0) a=1;
		else a=0;
		}
		printf("\n");
	}
	return 0;
}
