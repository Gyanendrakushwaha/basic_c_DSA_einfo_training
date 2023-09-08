#include<stdio.h>
int main(){



int n,rem=0,temp,arm=0;
printf("enter the number to check armstrong");
scanf("%d",&n);
temp=n;

while(n>0){
rem=n%10;
arm=arm+(rem*rem*rem);
n=n/10;
}

if(arm==temp){
printf("%d is armstrong number",temp);
}else{
printf("%d is not  armstrong number",temp);
}













}
