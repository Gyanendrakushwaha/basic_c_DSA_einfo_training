#include<stdio.h>
#include<stdlib.h>

void heapify(int arr[],int size,int largest){
if(size==1){
printf("single element in heap");
}
else{
int largest=i;
int l=2*i +1;
int r=2*i+2;

if(l<size && array[l]>array[largest]){
largest =l;
}
if(r<size && array[r] >array[largest]){
largest=r;
}

//swaping
if(largest != i){
swap(&array[i],&array[largest]);
heapify(array,size,lagest);
}
}
}


void insert(int arr[],int newnum){
if(size==0){
array[0]=newnum;
size +=1;
}
else{
array[size]=newnum;
size+=1;
for(int i=size-1;i>=0;i--){
heapify(array,size,i);
}
}
}


int main(){
int arr[10]={10,8,9,0,7,0,0};
insert(arr,15);



}
