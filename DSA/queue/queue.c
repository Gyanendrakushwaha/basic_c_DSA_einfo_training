#include<stdio.h>

int q[5];
int f=-1;  //front start
int r=-1;  //moving pointer

void enqueue(int q[],int data){
if(r>=4){
printf("overflow");
return;
}
if(f==-1){
f=0;
}
r=r+1;
q[r]=data;
}
int dequeue(int q[]){
//check underflow
if(f==-1){
printf("queue underflow");
return 0;
}
int y=q[f];
//limiting 
if(f==r){
f=r=-1;
}else{
f=f+1;
}
return y;
}

void display(int q[]){
if(f==-1){
printf("empty");
}

for(int i=f;i<=r;i++){
printf("%d ",q[i]);
}
}

int main(){
enqueue(q,1);
enqueue(q,2);
enqueue(q,3);
enqueue(q,4);
enqueue(q,5);
display(q);
//printf("%d",f);
dequeue(q);
printf("\n");
display(q);
}
