#include<stdio.h>

int main()

{
	int a,n;
	printf("****Smit Rathod's**** \n\n");
	printf("Enter no of which table u want : \n\n");
	scanf("%d",&n);
	for(a=10;a;a--)
	
	{
		printf("\n%d x %d = %d",n,a,a*n);
	}
	return 0;
}