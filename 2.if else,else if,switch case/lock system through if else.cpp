#include<stdio.h>

int main()

{
	int id,password;
	printf("Enter id : \n");
	scanf("%d",&id);

	
	if(id==000)
	{
	printf("Enter your password : \n");
	scanf("%d",&password);
	
	if(password==101)
	{
	printf("Welcome to system\n");	
	}
	else
	{
	printf("Incorrect password\n");	
	}
	}
	else
	{
	printf("Incorrrect id\n");	
	}		
		
	return 0;
}