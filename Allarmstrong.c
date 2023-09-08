#include<stdio.h>
int main(){



int n,m,rem=0,arm=0,count=0;
printf("enter the number to check armstrong");
scanf("%d",&m);


for(int i=1;i<=m;i++){

n=i;
arm=0;


while(n>0){
rem=n%10;
arm=arm+(rem*rem*rem);
n=n/10;
}

if(arm==i){
printf("%d \n",arm);
count++;
}



}

printf("total armstrong %d",count);
}
