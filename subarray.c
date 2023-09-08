#include<stdio.h>
int main(){
int n,sum=0,S;

printf("Enter tne number");
scanf("%d",&n);



printf("enter the array elements");
int arr[n];
for(int k=0;k<n;k++){
scanf("%d",&arr[k]);
}

printf("enter the sum");
scanf("%d",&S);

for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
sum=sum+arr[j];
if(S==sum){
printf("%d to %d is ",i,j);
for(int p=i;p<=j;p++){
printf("%d ",arr[p]);
}
printf("\n");
}
}

sum=0;
}






}
