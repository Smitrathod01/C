#include<stdio.h>

int main()

{
	int i=0,num;
	printf("Enter your no : \n");
	scanf("%d",&num);
	
	do
	
	{
		printf("The num is %d\n",i);
		if(i==20)
		{
			break;
		}
		i++;
	}
	
	while(i<=num);
	return 0;
}