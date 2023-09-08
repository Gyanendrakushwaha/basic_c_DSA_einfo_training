#include<stdio.h>
int main(){

int m,n,count=0,flag=1;


printf("enter the number");
scanf("%d",&m);

for(int j=1;j<=m;j++){
n=j;
for(int i=2;i<n;i++){
if(n%i ==0){
flag=0;
break;
}
}
if(flag==1){
printf("%d number is prime\n",n);
count++;
}
flag=1;

}
printf("total prime %d",count);
}
