#include<stdio.h>

int main()

{
	int a,b,c,d;
	printf("Enter 4 numbers\n");
	scanf("%d %d %d %d",&a, &b, &c, &d);
	
	if(a>b && a>c && a>d)
	{
		printf("\n%d is geatest",a);
	}
	
    else if(b>a && b>c && b>d)
	{
		printf("\n%d is geatest",b);
	}
	
	else if(c>a && c>b && c>d)
	{
		printf("\n%d is geatest",c);
	}
	
	else if(d>a && d>b && d>c)
	{
		printf("\n%d is geatest",d);
	}
	
	
	return 0;
	
}