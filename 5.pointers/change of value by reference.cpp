#include<stdio.h>

void change(int *ptr)
{
	*ptr*=10;
}
int main()

{
	int a=10;
	change(&a);
	printf("%d",a);
	return 0;
}