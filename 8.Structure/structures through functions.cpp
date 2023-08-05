#include<stdio.h>
#include<string.h>

struct employee
{
	int Id;
	float salary;
	char name[20];
};

void show(struct employee emp)
{
	
	printf("Id is %d\n",emp.Id);
	printf("Id is %f\n",emp.salary);
	printf("Id is %s\n",emp.name);	
	
}

int main()

{
	struct employee emp;
	emp.Id=101;
	emp.salary=34.34;
	strcpy(emp.name,"smit");
	
	show(emp);
	return 0;
}