#include<stdio.h>
 int main(){
 	int n;
 	printf("Enter number of rows: ");
 	scanf("%d",&n);
 	int i,j ;
 	for(i=1;i<=n;i++){
 		int a=1;
 		for(j=1;j<=i;j++){
 			if(i%2!=0)
	 		{	
 				printf("%d ",j);
 			}
 			else
 			{
 				int d=a+64;
	 			char ch =(char)d;  //typecasting
	 			printf("%c ",ch);
	 			a++;
 				
			 }
		 }
		 printf("\n");
	 }
	 return 0;
 } 
