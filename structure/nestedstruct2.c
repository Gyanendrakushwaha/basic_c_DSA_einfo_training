#include<stdio.h>

struct cricketer
{
char name[20];

int score;

struct cricketer *next;

};

void main(){

struct cricketer c[3]={{"kohli",105,c+1},{"yuvi",36,c+2},{"raina",40,c}};
struct cricketer *p=c;

printf("%s\n",p->name);  //kohli
printf("%d\n",p->score); //105
printf("%p\n",p->next);   //addres of c+1

p=p->next;
printf("%s\n",p->name);  //yuvi
printf("%d\n",p->score); //36
printf("%p\n",p->next);   //addres of c+2

p=p->next;
printf("%s\n",p->name);  //raina
printf("%d\n",p->score); //40
printf("%p\n",p->next);   //addres of c
}
