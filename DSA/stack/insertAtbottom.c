#include<stdio.h>
#include<string.h>
int a[6]={1,2,3,4,5};
int top=4;
int size=6;

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
void insert(int s[],int data){

//base condition
if(top==-1){
push(s,data);
}
else{
//take poped value
int x=pop(s);

//calling function again
insert(s,data);

//pushing poped data
push(s,x);
}
}



int main(){
int s[5];
/*
for(int i=0;i<5;i++){
push(s,a[i]);
}
for(int i=0;i<5;i++){
pop(s);
}
*/

insert(a,100);

for(int i=0;i<6;i++){
display(a);
}

}

