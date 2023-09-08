#include<stdio.h>

void printArray(int *p){

//operations on array using pointer.
p=p+1;
printf("%d ",*p);
p=p+2;
printf("%d ",*p);
p=p-1;
printf("%d \n",*p);

//printing address
printf("%p ",p);
}



//make array using pointer
void makearray(int *p,int n){
printf("enter the values");
for(int i=0;i<n;i++){
scanf("%d",p);
p++;
}
}




int main(){
int x[5];
int y[6];


//calling makearray and printarray for x
makearray(x,5);
printArray(x);


//calling makearray and printarray for y
makearray(y,6);
printArray(y);



}
