#include<stdio.h>
int main(){

int n;


int arr1[3][3]={2,3,1,7,4,1,9,-2,1};
int arr2[3][3]={1,1,1,0,0,0,0,0,0};
int arr3[3][3];
int sum=0;


//multi logic
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
arr3[i][j]=0;
for(int k=0;k<3;k++){
arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];

}
}

}



//printing ans matrix
for(int i=0;i<3;i++){
for(int k=0;k<3;k++){
printf("%d ",arr3[i][k]);
}
printf("\n");
}
}


