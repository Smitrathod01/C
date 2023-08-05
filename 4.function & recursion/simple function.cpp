#include<stdio.h>

void display();//prototype
void smit();

int main()//we can make function inside a function 

{
	printf("Initializing display\n");
	display();//call
	printf("\nDisplay finished its work");
    smit();
	return 0;
}

void display()//executable part

{
	printf("Good afternoon\n");
	printf("Good night");
}

void smit()

{
	printf("\nbye bye");
}