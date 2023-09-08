#include<stdio.h>
int main(){


int n,totalsum=0; //5
printf("enter the number");

scanf("%d",&n);
n=n-1; //4
printf("enter the values of array");
int arr[n];
for(int j=0;j<n;j++){
scanf("%d",&arr[j]);
}


//creating actualsum
totalsum=(n+1)*(n+2)/2;

//creating sum of array values
int sum=0;
for(int k=0;k<n;k++){
sum=sum+arr[k];
}

int missing=totalsum-sum;
printf("%d",missing);

}
