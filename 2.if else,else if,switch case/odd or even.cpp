#include<stdio.h>

int main()

{
	int a;
	printf("Enter a number - ");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("\nNumber is even");
	}
	
	else
	{
		printf("\nNumber is odd");
	}
	return 0;
}