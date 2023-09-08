
#include<stdio.h>
#include<string.h>
int a[5]={69,10,96,143,25};
int top=4;
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
//if(data>s[top]){
if(top==-1 || data>s[top] ){
push(s,data);
return;
}
//take poped value
int x=pop(s);

//calling function again
sortedinsert(s,data);

//pushing poped data
push(s,x);
}
/////////////////////////////////////////////////////////////////  sort  function is having issue ///////////////  /////////////////////////////////////////////////////////////////
void sort(int s[]){
//base condition
if(top==-1){
return ;
}
int x=pop(s);
sort(s);
sortedinsert(s,x);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int max(int a,int b){
if(a>b){
return a;
}else{
return b;
}
}




int main(){
//int data=33;
//sortedinsert(a,data);
sort(a);


for(int i=0;i<5;i++){
display(a);
}

}

