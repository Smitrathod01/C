#include<stdio.h>

int main()

{
	int ID,Password;
	printf("Enter your ID : \n");
	scanf("%d",&ID);
	
	switch(ID)
	
	{
		
		case 000 :
			printf("Enter your Password : \n");
			scanf("%d",&Password);
			
			switch(Password)
			
			{
				
				case 101 :
					printf("Welcome to system\n");
					break;
					
					default :
						printf("Incorrect Password\n");
						break;
			}
			break;
			default : 
			printf("Incorrect id");
			break;
			
	}
	
	

	return 0;
}