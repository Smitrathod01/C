#include<stdio.h>

void decrypt(char *st)
{
	char *ptr=st;
	while(*ptr!='\0')
	{
		*ptr=*ptr-1;
		ptr++;
	}
}

int main()

{
	char st[]="tnju";
	decrypt(st);
	printf("%s",st);	
	return 0;
}