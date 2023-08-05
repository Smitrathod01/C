#include<stdio.h>

int main()

{
	int salary;
	
	printf("Enter your salary : ");
	scanf("%d",&salary);
	
	if(salary<=10000)
	
	{
		printf("You are poor");
	}
	
	else if(salary<=20000)
	
	{
		printf("You are middle class");
	}
	
	else
	
	{
		printf("You are rich");
	}
	
	return 0;
}