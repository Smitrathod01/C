#include<stdio.h>

int fac(int a);

int main()

{
	int a;
	printf("Enter number : \n");
	scanf("%d",&a);
	printf("factorial of %d is %d",a,fac(a));
	return 0;
}

int fac(int a)

{
	if(a==0 || a==1)
	{
		return 1;
	}
	
	else
	{
			return a * fac(a-1);
	}
}