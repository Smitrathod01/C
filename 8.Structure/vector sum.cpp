#include<stdio.h>

struct vector
{
	int x;
	int y;
};

struct vector sumvector(struct vector v1,struct vector v2)
{
	struct vector result;
	result.x=v1.x+v2.x;
	result.y=v1.y+v2.y;
	return result; 
}

int main()

{
	struct vector v1,v2,sum;
	v1.x=2;
	v1.y=3;
	
	v2.x=3;
	v2.y=5;
	
	sum=sumvector(v1,v2);
	printf("%d and %d",sum.x,sum.y);		
	return 0;
}