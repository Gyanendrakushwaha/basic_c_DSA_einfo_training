#include<stdio.h>
#include<stdlib.h>

int main(){


int n;
printf("Enter the lenght of array");
scanf("%d",&n);
int arr[n];

//entering data for array
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int min=arr[0];
int max=arr[0];
for(int i=0;i<n;i++){
if(arr[i] > min){
min=arr[i];
}
else if(arr[i]<max){
max=arr[i];
}
}


printf("max is %d",min);
printf("min is %d",max);

}
