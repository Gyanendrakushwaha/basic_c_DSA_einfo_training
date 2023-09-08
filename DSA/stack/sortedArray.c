

#include<stdio.h>
#include<string.h>
int a[5]={20,25,35,59};
int top=3;
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

void sortedinsert(int s[],int data){
//base condition
if(data>s[top]){
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

/*
for(int i=0;i<5;i++){
push(s,a[i]);
}
for(int i=0;i<5;i++){
pop(s);
}
*/
int data=33;
sortedinsertinsert(a,data);



for(int i=0;i<5;i++){
display(a);
}

}

