#include<stdio.h>

int main()

{
	int n1=0,n2=1,n3,number,i;
	printf("Enter number : \n");
	scanf("%d",&number);
	printf("Seris is : \n");
	printf("01");
	
	for(i=2;i<number;++i)
	{
	
	n3=n2+n1;
	printf("%d",n3);
	n1=n2;
	n2=n3;
    }
	return 0;
}