#include<stdio.h>

int main()

{
	int i,j,k,num,m;
	printf("Enter a no : ");
	scanf("%d",&num);
	m=num;

	for(i=1;i<=num;i++)
	{
		printf(" ");
		
		for(j=1;j<=m-1;j++)
		{
			printf(" ");
			
		}
			for(k=1;k<=(2*i)-1;k++)
			{
				printf("*");
			}
			
		m--;
		
		printf("\n");
	}

	return 0;
}