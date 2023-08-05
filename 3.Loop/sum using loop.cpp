#include<stdio.h>

int main()

{
	int a=0,sum=0,num;
	printf("Enter the no upto which you wanna sum : ");
	scanf("%d",&num);
	
	while(a<=num)
	
	{
		sum+=a;
		a++;
		
	}
	
	printf("Sum is %d",sum);
	
	return 0;
}