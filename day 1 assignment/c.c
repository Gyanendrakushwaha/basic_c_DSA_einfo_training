#include<stdio.h>

void main(){

float a,b,c,d,e,total=500,percentage=0,aggrigate=0;
printf("enter the marks obtained by students in five subjects");

scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
aggrigate=a+b+c+d+e;
printf("%f \n",aggrigate);

percentage=(aggrigate*100)/total;

printf("%f",percentage);

}
