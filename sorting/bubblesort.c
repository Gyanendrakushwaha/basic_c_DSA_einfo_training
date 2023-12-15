#include<stdio.h>
int main(){

int arr[5]={20,10,30,50,40};

//bubble logic
for(int i=0;i<5;i++){
for(int j=0;j<5-i-1;j++){

if(arr[j]>arr[j+1]){
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}


}
}


//printing sorted array
for(int i=0;i<5;i++){
printf("%d ",arr[i]);
}

}
