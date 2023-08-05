#include<stdio.h>       

int main()

{
	int choice;
	printf("********Smit's bill system*********");
	printf("\n\n\n");
	printf("Enter your choice : \n");
	printf("1.Bill");
	printf("\n2.Exit\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			int p,q,num,sum,sum1;
			int bill[30];
			char st[30];
			printf("Enter no of items :");
			scanf("%d",&num);
			
			for(int i=1;i<=num;i++)
			{
				printf("Enter name of item :");
				scanf("%s",st);
				printf("Enter quantity : ");
				scanf("%d",&q);
				printf("Enter price : ");
				scanf("%d",&p);
				bill[i]=q*p;		
				
			}
			
			for(int j=1;j<=num;j++)
			{
				sum+=bill[j];
			}
		
			printf("\n3 per. GST will considered\n");
			sum1=sum+(sum*0.03);
			printf("Your total amount - %d",sum+sum1);	
			break;			

		case 2:
			break;
			
		default:
			printf("Incorrect press!!!\n");
	}
	
			printf("Thanks for choosing our restaurant!!");
	return 0;
}