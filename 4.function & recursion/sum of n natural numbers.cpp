#include<stdio.h>

int sum(int a);

int main()

{
	int a;
	printf("Enter a :\n");
	scanf("%d",&a);
	printf("sum is %d",sum(a));
	return 0;
}

int sum(int a)

{
	if(a!=0)
	{
		return a+sum(a-1);
	}
	else
	{
		return a;
	}
	
}