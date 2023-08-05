#include<stdio.h>

int fc(int a,int b)//use void main if you dont want to return any value
{
	b=a*9/5+23;
	return 0;
}
int main()

{
	int a=20,b=30;
	printf("%d",fc(a,b));
	return 0;
}