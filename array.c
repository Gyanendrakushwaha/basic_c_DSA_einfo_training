#include<stdio.h>
int main(){

int arr[4][4];


printf("Enter values of array");
//scan array
for(int i=0;i<4;i++){
for(int j=0;j<4;j++){
scanf("%d",&arr[i][j]);
}

}

for(int i=0;i<4;i++){
for(int j=0;j<4;j++){
printf("%d",arr[i][j]);
}
printf("\n");
}








}
