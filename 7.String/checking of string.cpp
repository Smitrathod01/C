#include<stdio.h>

int check(char *st,char s)
{
	char *ptr=st;
	int count=0;
	while(*ptr!='\0')
	{
		if(*ptr==s)
		{
			count++;
		}
		ptr++;
	}
	return count;
}
int main()

{
	char st[]="smitrathod";
	int a=check(st,'t');
	printf("%d",a);
	return 0;
}