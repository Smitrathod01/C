#include<stdio.h>

int  main()

{
	int marks[1];
//	marks[0]=1;
//	marks[1]=4;
	printf("Enter marks : \n");
	scanf("%d %d",&marks[0],&marks[1]);
	printf("%d",marks[0]+marks[1]);
	
	
	return 0;
}


//int marks[]={12,34,56,56,56,554}  this is also correct