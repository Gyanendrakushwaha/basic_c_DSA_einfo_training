#include<stdio.h>

int main(){
int flag=1;

int k;
printf("enter the size");
scanf("%d",&k);


int m[k];
printf("enter the values");
for(int i=0;i<k;i++){
scanf("%d",&m[i]);
}


printf("enter the value to search");
int n;
scanf("%d",&n);
for(int j=0;j<k;j++){
if(n==m[j]){
printf("%d found,index is %d",n,j);
flag=0;
break;
}
}

if(flag){
printf("number not found");
}


}
