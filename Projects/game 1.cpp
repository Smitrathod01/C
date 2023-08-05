#include<stdio.h>
#include<stdlib.h>//for random number generator
#include<time.h>//for time 

int main()

{
	int number,guess,nguess=1;
	srand(time(0));
	number = rand()%100+1;//generates a random number
//	printf("The number is %d",number);
	
	do
	{
		printf("Guess the no between 1 to 100 : \n");
		scanf("%d",&guess);
		
		if(guess>number)
		{
			printf("lower number please\n");
		}
		
		else if(guess<number)
		{
			printf("higher number please\n");
		}
		
		else
		{
			printf("You guess it in %d attempts\n",nguess);
		}
		nguess++;
	}while(guess!=number);
	
	return 0;
}