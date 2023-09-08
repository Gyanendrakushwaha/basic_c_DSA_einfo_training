#include<stdio.h>
#include<string.h>
#define n 10
int l[n];
int r[n];
int ltop=-1;
int rtop=n;
int st[2*n];
int lsize=0,rsize=0;

void push(int s[],int data){
if(ltop==lsize){
printf("stack overflow");
}else{
ltop++;
s[ltop]=data;
}
}

/*
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
*/
void display(int s[]){
if(ltop==-1){
printf("empty");
}else{
int data=s[ltop];
ltop--;
printf("%d ",data);

}
}




int main(){

push(l,1);
push(l,2);
push(l,3);
push(l,4);
push(l,5);
lsize=sizeof(l)/sizeof(l[0]);
printf("%d",lsize);
/*
while(l[ltop]!='\0'){
display(l);
}
*/

}

