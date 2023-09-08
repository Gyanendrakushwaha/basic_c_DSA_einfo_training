#include<stdio.h>
void main(){

int n;
scanf("%d",&n);
printf("table of %d",n);
for(int i=1;i<11;i++){

printf("%d * %d = %d",n,i,i*n);
}
}
