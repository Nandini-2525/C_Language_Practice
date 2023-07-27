// Print a pattern 
/* here we print solid rectagle (different values for n and m)
And we can also print solid square(same values for n and m) 
*/

 #include<stdio.h>
 int main(){
 	int n;
 	printf("Enter number of rows: ");
 	scanf("%d",&n);
 	int m;
 	printf("Enter number of column: ");
 	scanf("%d",&m);
 	int i,j;
 	for(i=1;i<=n;i++){
 		for(j=1;j<=m;j++){
 			printf("*");
		 }
		 printf("\n");
	 }
	 return 0;
 }
