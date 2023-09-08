#include<stdio.h>
int main(){

int arr[4][4];


//scan array
printf("Enter values of array");
for(int i=0;i<4;i++){
for(int j=0;j<4;j++){
scanf("%d",&arr[i][j]);
}
}


//print all values once to cross check
for(int i=0;i<4;i++){
for(int j=0;j<4;j++){
printf("%d",arr[i][j]);
}
printf("\n");
}


//logic for celibrity
int index=0,sum=0,k=0;
while(index<4){

  for(int m=0;m<4;m++){
    sum=sum+arr[m][index];
  }

  if(sum==3 && arr[index][k++]==0){
    break;
   }else{ sum=0; }

  index++;
  k=0;
}

printf("celibrity is %d",index);

return 0;
}
