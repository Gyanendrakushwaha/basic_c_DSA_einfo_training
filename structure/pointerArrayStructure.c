#include<stdio.h>

struct student {
char name[20];
int age;
int fees;
};

int main(){

struct student s[5];

struct student *p=s;

for(int i=0;i<5;i++){
printf("enter name");
scanf("%s",p->name);

printf("enter roll no");
scanf("%d",&p->age);



printf("enter backlog");
scanf("%d",&p->fees);

p++;
}

p=s;

for(int i=0;i<5;i++){
printf("\nname: %s",p->name);


printf("\n roll no: %d",p->age);




printf("\nbacklog: %d",p->fees);


p++;
}






}
