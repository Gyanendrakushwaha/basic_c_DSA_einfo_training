#include<stdio.h>
int main(){

int n,happy=0,sum=0,rem=0,count=0;
printf("enter the number to find happy no");
scanf("%d",&n);
int num=n;


while(happy != 1){

while(n){

rem=n%10;
sum=sum+rem*rem;
n=n/10;

}

if(sum==1){
printf("%d is happy no",num);
break;
}else if(count==20){
printf("%d is not happy no",num);
break;
}
n=sum;
sum=0;
count++;
}

}
