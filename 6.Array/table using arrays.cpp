#include<stdio.h>

int main()

{
	int mul[10],n;
	printf("Enter no of which table u want : \n");
	scanf("%d",&n);
	for(int i=0;i<10;i++)
	{
		mul[i]=n*(i+1);
	}
	
	for(int i=0;i<10;i++)
	{
		printf("5*%d is %d\n",i+1,mul[i]);
	}
	return 0;
}