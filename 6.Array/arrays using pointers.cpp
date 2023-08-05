#include<stdio.h>

int main()

{
	int marks[3];
	int *ptr;
	ptr=&marks[0];
	//ptr = marks; is also valid
	
	for(int i=0;i<3;i++)
	{
		printf("Enter the marks : \n");
		scanf("%d",ptr);
		ptr++;
	}
	
	for(int i=0;i<3;i++)
	{
		printf("marks of %d is %d",i+1,marks[i]);
	}
	return 0;
}