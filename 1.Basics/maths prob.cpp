#include<stdio.h>
//#define pi 3.14

int main()

{
	
	int l,b,r,h;
	int pi = 3.14;
	printf("Enter l -" );
	scanf("%d", &l);
	printf("\nEnter b -" );
	scanf("%d", &b);
	printf("\nEnter r -" );
	scanf("%d", &r);
	printf("\nEnter h -" );
	scanf("%d", &h);
	
	printf("area of rectangle = %d",l*b);
	printf("area of circle = %d",pi*r*r);
	printf("volume of cyclinder = %d",pi*r*r*h);
	
	return 0;
}