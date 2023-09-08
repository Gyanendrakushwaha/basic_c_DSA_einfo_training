#include<stdio.h>
int main(){

int n,temp,flag=1;


printf("enter the number");
scanf("%d",&n);


for(int i=2;i<n;i++){
if(n%i ==0){
flag=0;
break;
}
}
if(flag==1){
printf("%d number is prime",n);
}else{
printf("%d number not is prime",n);
}
flag=1;






}
