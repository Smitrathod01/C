#include<stdio.h>

void sumavg(int a,int b,int *sum,int *avg)

{
	 *sum=a+b;
	 *avg=(a+b)/2;
	
 } 

int main()

{
	int a=4,b=4;
	int sum,avg;
	sumavg(a,b,&sum,&avg);
	printf("%d %d",sum,avg); 	
	return 0;
}