#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int display(int you,int comp)

{
if(you==comp)
{
	return 0;
}
else if(you=='s' && comp=='w')
{
	return 1;
}
else if(you=='s' && comp=='g')
{
	return -1;
}
else if(you=='w' && comp=='s')
{
	return -1;
}
else if(you=='w' && comp=='g')
{
	return 1;
}
else if(you=='g' && comp=='s')
{
	return 1;
}
else if(you=='g' && comp=='w')
{
	return -1;
}
}

int main()

{
	int num;
	char you,comp;
	srand(time(0));
	num=rand()%100+1;
	
	if(num<33)
	{
		comp='s';
	}
	else if(num>33 && num<66)
	{
		comp='w';
	}
	else
	{
		comp='g';
	}
	
	printf("Enter s for snake,w for water,g for gun : \n");
	scanf("%c",&you);
	
	printf("You have chosen %c and computer has chosen %c\n",you,comp);
	
	int result = display(you,comp);
	
	if(result==0)
	{
		printf("Draw\n");
	}
	else if(result==-1)
	{
		printf("you lose\n");
	}
	else if(result==1)
	{
		printf("you win\n");
	}
	
	return 0;
}