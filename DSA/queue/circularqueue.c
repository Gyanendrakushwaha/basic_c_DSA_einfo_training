#include<stdio.h>

int q[5];
int n=5;
int f=-1;  //front start
int r=-1;  //moving pointer

void enqueue(int q[],int data){
//for overflow condition  //both normal and circular case
if(f==0 && r==n-1 || (r==f-1)){
printf("overflow");
return;
}else{

//for first element  //normal case
if(f==-1){
f=0;
}
// if r is at last  //circular case
if(r==n-1){
r=0;

}else{
r=r+1;
}
//another approach
//r=(r+1)%n;
q[r]=data;
}
}
int dequeue(int q[]){
int y;
//check underflow
if(f==-1){
printf("queue underflow");
return 0;
}else{
y=q[f];
//limiting 

//normal case
if(f==r){
f=r=-1;
}else{
f=(f+1)%n;
}
}
return y;
}

void display(int q[]){
if(f==-1){
printf("empty");
return;
}
//normal display case
else if(r>f){

for(int i=f;i<=r;i++){
printf("%d ",q[i]);
}
}
//for cicular case
else{
for(int i=f;i<n;i++){
printf("%d",q[i]);
}
for(int i=0;i<=r;i++){
printf("%d",q[i]);
}

}
}




int main(){
enqueue(q,1);
enqueue(q,2);  //r
enqueue(q,3);
enqueue(q,4);  //f
enqueue(q,5);
display(q);

dequeue(q);
dequeue(q);
dequeue(q);
//printf("%d",f);
/*
printf("\n");
display(q);
printf("\n");
*/
enqueue(q,8);
enqueue(q,9);
//printf("%d",r);
display(q);
}
