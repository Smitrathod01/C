#include<stdio.h>

void reverse(int *arr,int n)

{
	for(int i=0;i<n/2;i++)//n/2 because n will perform 2 times reverse thats why half to perrform one time reverse
	{
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
	}
	
}

	


int main()

{
	int arr[7]={1,2,3,4,5,6,7};
	reverse(arr,7);
	for(int i=0;i<7;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}