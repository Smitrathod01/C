#include<stdio.h>
	
int main()

{
	//char str[]={'s','m','t','t','\0'}; both are valid
	//char str[]="smit";
	char str[10];
	printf("Enter your string : \n");
	scanf("%s",&str);//not dependent on & u can remove it
	printf("%s",str);
	return 0;
}

//second way
//int main()
//
//{
//	char str[]="smit";
//	char *ptr = str;
//	while(*ptr!='\0')
//	{
//		printf("%c",*ptr);
//		ptr++;
//	}
//	return 0;
//}