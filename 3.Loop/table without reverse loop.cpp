#include<stdio.h>

int main()

{
	int i,num;
	printf("Enter a no : \n");
	scanf("%d",&num);
	
	for(i=0;i<10;i++)
	{
		printf("%d * %d = %d\n",num,i+1,num*(i+1));
	}
	return 0;
}