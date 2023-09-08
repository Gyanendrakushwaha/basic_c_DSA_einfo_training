#include<stdio.h>

char a[5]="hello";
int top=-1;
int size=5;

void push(char s[],char data){
if(top==size){
printf("print stack overflow");
}else{
top++;
s[top]=data;
}
}

void pop(char s[]){
if(top==-1){
printf("stack underflow");
}else{
char data=s[top];
top--;
printf("%c",data);
}
}




int main(){
char s[5];

for(int i=0;i<5;i++){
push(s,a[i]);
}

for(int i=0;i<5;i++){
pop(s);
}
}

