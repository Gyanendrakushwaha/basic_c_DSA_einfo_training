#include<stdio.h>

struct student {
char name[20];
int age;
int fees;
};

int main(){

struct student s={"gk",10,20};

struct student *p=&s;

printf("%s",p->name);
printf("%d",p->age);
printf("%d",p->fees);




}
