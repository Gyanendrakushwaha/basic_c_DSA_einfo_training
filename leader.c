#include<stdio.h>
int main(){

int n,flag=1;
printf("Enterthe number");
scanf("%d",&n);
int arr[n];

printf("enter array values");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}


//checking and printing leader
for(int j=0;j<n;j++){
for(int k=j+1;k<n;k++){
if(arr[j]<arr[k]){
flag=0;
break;
}
}

if(flag==1){
printf("%d  ",arr[j]);
}
flag=1;
}










}
