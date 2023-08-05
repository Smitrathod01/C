#include<stdio.h>
#include<string.h>//imp while using str functions

struct employee
{
	int id;
	float salary;
	char name[10];
};

int main()

{
	struct employee s;
	s.id = 1;
	s.salary = 34.54;
	strcpy(s.name,"smit");
	
	printf("%d %.2f %s",s.id,s.salary,s.name);
	
	return 0;
}