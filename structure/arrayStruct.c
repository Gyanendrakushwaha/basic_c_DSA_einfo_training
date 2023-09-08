#include<stdio.h>
#include<string.h>

struct student{
char name[20];
int roll;
float cpi;
int backlog;
};

int main(){

struct student s[5];

for(int i=0;i<5;i++){
printf("enter name");
scanf("%s",s[i].name);

printf("enter roll no");
scanf("%d",&s[i].roll);

printf("enter cpi");
scanf("%f",&s[i].cpi);

printf("enter backlog");
scanf("%d",&s[i].backlog);
}

for(int i=0;i<5;i++){
printf("\nname is : %s",s[i].name);


printf("\nenter roll no: %d",s[i].roll);


printf("\nenter cpi: %f",s[i].cpi);


printf("\nenter backlog: %d",s[i].backlog);

}




return 0;
}
