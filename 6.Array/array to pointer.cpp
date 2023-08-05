#include<stdio.h>

void pointarray(int *ptr,int n)
{
	for(int i=0;i<n;i++)
	{
	 printf("the marks of %d is %d\n",i+1,*ptr);
		
		ptr++;
	}
}
int main()

{
	int arr[]={1,4,3,5,6,7,6};
	pointarray(arr,7);      
	return 0;
}