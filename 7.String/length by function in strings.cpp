#include<stdio.h>

int length(char *st)
{
	char*ptr = st;
	int len=0;
	
	while(*ptr!='\0')
	{
	ptr++;
	len++;
	}
	return len;
}
int main()

{
	char st[]="smit";
	int len = length(st);
	printf("%d",len);
	return 0;
}