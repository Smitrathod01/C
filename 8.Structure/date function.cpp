#include<stdio.h>

struct date
{
	int date;
	int month;
	int year;
};

void show (struct date e)
{
	printf("date is %d/%d/%d",e.date,e.month,e.year);
}

int main()

{
	struct date e= {2,3,2002};
	show(e);	
	
	return 0;
}