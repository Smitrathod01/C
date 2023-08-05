#include<stdio.h>

int main()

{
	int student=3,sub=4;//this is optional
	int  marks[3][4];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("Enter marks of %d student in %d : \n",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}
	}
	
		
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("marks of %d in %d is %d\n",i+1,j+1,marks[i][j]);
	    }
    }
	return 0;
}