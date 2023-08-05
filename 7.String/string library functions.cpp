#include<stdio.h>
#include<string.h>//to use string functions

int main()

{
	char str[]="smit";
	char st[]="rathod";
	
	int a=strlen(str);
	printf("%d\n",a);
	
	strcpy(str,st);
	printf("%s\n",str);
	
	strcat(str,st);
	printf("%s\n",str);
	
	int val	= strcmp(str,st);
	printf("%d",val);
	
	return 0;
}