#include<stdio.h>

int main()

{
	int a,b;
	printf("till when you wanna stop : \n");
	scanf("%d",&b);
	
	for(a=0;a<=b;a++)
	
	{
		printf("The value of a is %d\n",a);
	}
	return 0;
}