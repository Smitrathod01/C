#include<stdio.h>

float average(int a,int b,int c);
    
int main()

{
    int a,b,c;
	printf("Enter 3 numbers : \n");
	scanf("%d %d %d",&a,&b,&c);
	printf("Aveage is %f",average(a,b,c));
	return 0;
}

float average(int a,int b,int c)

{
	int result;
	result = (float)(a+b+c)/3;//type cast because average is gonna come onlyu integer because 3 nos are int
	return result;
}