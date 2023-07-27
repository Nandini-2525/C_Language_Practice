#include<stdio.h>
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int i,j,a=n;
	for(i=1;i<=n;i++){
		for(j=1;j<=a;j++){
			printf("* ");
		}
		a--;
		printf("\n");
	}
	return 0;
}
