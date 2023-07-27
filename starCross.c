/* print a pattern:  * *
					  *
					 * *
*/					 

#include<stdio.h>
 int main(){
 	int m;
 	printf("Enter number of rows: ");
 	scanf("%d",&m);
	int n;
 	printf("Enter number of columns: ");
 	scanf("%d",&n);
 	int i,j ;
 	for(i=1;i<=m;i++)
	 { int a=n+1;
		for(j=1;j<=n;j++)
		{
			if(i==j || i+j==a) printf("*");
			else printf(" ");
		}
		printf("\n");		
	}	 
	 return 0;
 } 
