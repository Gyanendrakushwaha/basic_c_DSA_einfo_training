#include<stdio.h>
#include<string.h>

char a[20];
int size;
int top=-1;


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
//printf("%c",data);
}
}

int isValid(char a[],char s[]){ //a string    ---  //s stack
//int bvalid=1;
int count=0;
for(int i=0;i<size;i++){
if(a[i]=='(' || a[i]=='{' || a[i]=='['){
push(s,a[i]);
count++;
}
else{
if(s[top]=='(' && a[i]==')'){
pop(s);

}
else if(s[top]=='{' && a[i]=='}'){
pop(s);
}
if(s[top]=='[' && a[i]==']'){
pop(s);
}

}
/*
if(top!=-1){
bvalid=0;
}*/

}
if(count==0 && strlen(a)!=0){
return 0;
}
else if(top==-1 ){
return 1;
}
else{
return 0;
}
//return bvalid;
}


int main(){
gets(a);
size=strlen(a);
char s[size];

printf("%d",isValid(a,s));



}

