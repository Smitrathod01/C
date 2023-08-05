#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main()
{
   struct employee smit = {3,34.54,"smit"};
   printf("%d %f %s",smit.code,smit.salary,smit.name);

    return 0;
}