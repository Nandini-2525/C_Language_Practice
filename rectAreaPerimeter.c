// wap to check an area of the rectangle is greater than the perimeter of rectangle or not.
#include<stdio.h>
int main()
{
	int l;
	printf("Enter the Length:");
	scanf("%d",&l);
	int b;
	printf("Enter the breadth");
	scanf("%d",&b);
	int area = l * b;
	int p = 2 * (l+b);
	if(area > p){
		printf("Area is greater than perimeter");
	} 
	if(area < p){
		printf("Area is not greater than perimeter");
	}
	return 0;
}
