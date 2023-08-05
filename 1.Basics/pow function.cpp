#include<stdio.h>
#include<math.h>

int main()

{
	int side;
	printf("enter the side");
	scanf("%d",&side);
	printf("\narea is %f",pow(side,2));//pow always returns double value so int wont work here
	return 0;
}