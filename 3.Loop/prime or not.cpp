#include<stdio.h>

int main()

{
	 int num,c;
	 printf("Enter a no :\n");
	 scanf("%d",&num);
	 
	 for(int i=1;i<=num;i++)
	 {
	 	if(num%i==0)
	 	{
	 		c++;
		}
	}
		if(c==2)
		{
			printf("no is prime\n");
		}
		else
		{
			printf("no is not prime\n");
		}
	 
	return 0;
}