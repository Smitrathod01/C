#include<stdio.h>

strlen(char *st)//st[]
{
	char *ptr=st;
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
	int l=strlen(st);
	printf("%d",l);
		
	return 0;
}