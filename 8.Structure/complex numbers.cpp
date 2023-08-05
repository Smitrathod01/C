#include<stdio.h>

typedef struct complex
{
	int real;
	int imaginary;
}comp;

void display(comp e)
{
	printf("Real values are %d: \n",e.real);
	printf("Imaginary parts are %d: \n",e.imaginary);
}

int main()

{
	comp cnums[5];
	
	for(int i=0;i<5;i++)
	{
	printf("Enter values of real parts :\n");
	scanf("%d",&cnums[i].real);
	
	printf("Enter values of imaginary parts :\n");
	scanf("%d",&cnums[i].imaginary);	
	}	
	
	for(int i=0;i<5;i++)
	{
	display(cnums[i]);
	}
	return 0;
}