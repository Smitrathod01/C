#include<stdio.h>

int main()

{
	int phy,chem,mat,total;
	printf("Enter marks of phy,chem,mat :");
	scanf("%d",&phy);
	scanf("%d",&chem);
	scanf("%d",&mat);
	total = (phy + chem + mat)/3;
	
	if((total<40) || phy<33 || chem<33 || mat<33)
	
	{
		printf("You are fail");
	}
	
	else
	
	{
		printf("You are pass");
	}
	
	return 0;
}