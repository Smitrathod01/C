#include<stdio.h>

void pointarray(int *ptr,int n)//ptr[]
{
	for(int i=0;i<n;i++)
	{
		printf("The marks of %d is %d\n",i+1,*(ptr+i));//ptr[i] or ptr++ after this line
	}
	*(ptr+2)=555;
}
int main()

{
	int arr[]={1,4,3,5,6,7,6,5};
	pointarray(arr,8);
	printf("%d\n",arr[2]);//this will change due to address
	return 0;
}