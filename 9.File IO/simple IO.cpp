#include<stdio.h>

int main()

{
	FILE *ptr;
	int num,numw=76;
	ptr=fopen("smit.txt","r");//for opening a file existing file needed
	fscanf(ptr,"%d",&num);//helps to read num from file but only int
	ptr=fopen("smiit.txt","w");//for writing this will create a file
	fprintf(ptr,"%d",numw);//helps to write in file
	printf("%d",num);
	return 0;
}