#include<stdio.h>

int fib(int i);

int main()

{
	int a,i;
	printf("till when u want series : \n");
	scanf("%d",&a);
	printf("\nSeries is : ");	
	for(i=0;i<a;i++)
	{
	
	printf("%d",fib(i));
	
    }
	return 0;
}

int fib(int i)

{
	if(i==1)
	{
		return 0;
	}
	
	else if(i==2)
	
	{
	 	return 1;
	}
	
	else
	
	{
		return (fib(i-1)+fib(i-2));
	}
}