#include<stdio.h>
#include<string.h>
struct student
{
char name[20];
int roll;
float cpi;
int backlog;
};

int main(){

struct student s1;

printf("\nenter the student name \n");
//scanf("%s",s1.name);
gets(s1.name);


printf("\nenter the roll no \n");
scanf("%d",&s1.roll);


printf("\nenter the cpi \n");
scanf("%f",&s1.cpi);

printf("\nenter the backlog \n");
scanf("%d",&s1.backlog);


///printing data

printf(" name is %s",s1.name);
printf("roll no %d",s1.roll);
printf("cpi is %f",s1.cpi);
printf("backlog %d",s1.backlog);



}
