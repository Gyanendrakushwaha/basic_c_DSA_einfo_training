#include<stdio.h>
#include<string.h>
int a[5] ;
int top=-1;
int size=5;

void push(int s[],int data){
if(top==size){
printf("print stack overflow");
}else{
top++;
s[top]=data;
}
}

int pop(int s[]){
if(top==-1){
printf("stack underflow");
}else{
int data=s[top];
top--;
//printf("%d",data);
return data;
}
}

void display(int s[]){
if(top==-1){
printf("empty");
}else{
int data=s[top];
top--;
printf("%d ",data);

}
}
void removeMiddle(int s[],int size){
//base condition
if(top==size/2){
pop(s);
return;
}

//take poped value

int x=pop(s);
//calling function again
removeMiddle(s,size);

//pushing poped data
push(s,x);
}





int main(){

push(a,20);
push(a,25);
push(a,35);
push(a,59);
push(a,29);

removeMiddle(a,size);



for(int i=0;i<5;i++){
display(a);
}
}

