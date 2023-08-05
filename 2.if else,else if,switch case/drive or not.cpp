#include<stdio.h>

int main()

{
	int age,vippass;
	
	printf("Enter your age : ");
	scanf("%d",&age);	
	printf("Enter your vippass status : ");
	scanf("%d",&vippass);
	
	if((age<=70 && age>=18) || vippass==1)
	
	{
		printf("You can drive");
	}
	
	else
	
	{
		printf("You cannot drive");
	}
	return 0;
}