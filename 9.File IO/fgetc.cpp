#include<stdio.h>

int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("getcdemo.txt", "r");//this will need to be created
   
    while(c!=EOF)//end of file
	{
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0;
}