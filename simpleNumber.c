//simple number pattern.

#include<stdio.h>
 int main(){
 	int n;
 	printf("Enter number of rows: ");
 	scanf("%d",&n);
 	int i,j;
 	for(i=1;i<=n;i++){
 		for(j=1;j<=n;j++){
 			printf("%d ",j);
		 }
		 printf("\n");
	 }
	 return 0;
 }
