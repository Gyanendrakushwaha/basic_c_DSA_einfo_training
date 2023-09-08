#include<stdio.h>
int main(){

int n;
printf("enter days");
scanf("%d",&n);


//array creation
int arr[n];
printf("enter the values");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}


int profit=0,max=0,startday=0,endday=0;
for(int j=0;j<n;j++){
for(int k=j+1;k<n;k++){

profit=arr[k]-arr[j];
if(profit>max){
max=profit;
startday=j;
endday=k;
}

}
}

printf("profit is %d \n startday is %d \n endday is %d",max,startday,endday);
}
