#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name, "Smit");

    facebook[1].code = 101;
    facebook[1].salary = 90.45;
    strcpy(facebook[1].name, "Rathod");

    facebook[2].code = 102;
    facebook[2].salary = 110.45;
    strcpy(facebook[2].name, "SkillKhiladi");//we can go till 100
    printf("Done");

    return 0;
}