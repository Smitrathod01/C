#include<stdio.h>

int main()

{
	int a=3,b=4;
	int temp=a;
	a=b;
	b=temp;
	printf("after swap %d %d",a,b);
	return 0;
}