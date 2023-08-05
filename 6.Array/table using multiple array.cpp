#include<stdio.h>

int main()

{
	int multab[3][10];
	
	for(int i=0;i<10;i++)
	{
		multab[0][i] = 2*(i+1);
	}
	for(int i=0;i<10;i++)
	{
		printf("2*%d is %d\n",i+1,multab[0][i]);
	}
	
		for(int i=0;i<10;i++)
	{
		multab[1][i] = 3*(i+1);
	}
	
	for(int i=0;i<10;i++)
	{
		printf("3*%d is %d\n",i+1,multab[1][i]);
	}
	
		for(int i=0;i<10;i++)
	{
		multab[2][i] = 4*(i+1);
	}
	
	for(int i=0;i<10;i++)
	{
		printf("4*%d is %d\n",i+1,multab[2][i]);
	}
	
	return 0;
}