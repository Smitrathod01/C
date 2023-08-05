#include<stdio.h>

int main()

{
	int i,fac=1,num;
	printf("Enter the no : \n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	
	{
		fac*=i;
	}
	
	printf("Factorial is %d ",fac);
	
	return 0;
}