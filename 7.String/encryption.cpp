#include<stdio.h>

void encrypt(char *st)
{
	char *ptr=st;
	while(*ptr!='\0')
	{
		*ptr=*ptr+1;
		ptr++;
	}
}

int main()

{
	char st[]="smit";
	encrypt(st);
	printf("%s",st);	
	return 0;
}