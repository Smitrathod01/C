#include<stdio.h>

int main()

{
	int i,marks[4];
	
	for(i=0;i<5;i++)
	{
		printf("Enter marks : \n");
		scanf("%d",&marks[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("marks of student %d is %d\n",i+1,marks[i]);
	}
	return 0;
}