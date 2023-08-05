#include<stdio.h>

int main()

{
	char ch;
	printf("Enter character");
	scanf("%c",&ch);
	
	if(ch<=122 && ch>=97)
	
	{
		printf("lowercase");
	}
	
	else 
	
	{
		printf("uppercase");
	}
	return 0;
}
