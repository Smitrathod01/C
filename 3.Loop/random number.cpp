#include<stdio.h>
#include<stdlib.h>//for random number generator
#include<time.h>//for time 

int main()

{
	int number;
	srand(time(0));
	number = rand()%100+1;//generates a random number
	printf("The number is %d",number);
	return 0;
}