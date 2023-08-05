#include<stdio.h>

//int value(int x)
//
//{
//	x=20;
//	return x*10;
//	
//}
//int main()
//
//{
//	int a=10;
//	printf("%d",value(a));
//	return 0;
//}

void swap(int *a,int *b)

{
	int temp=*a;
	*a=*b;
	*b=temp;
	
}
int main()

{
	int a=3,b=4,temp;
	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
}