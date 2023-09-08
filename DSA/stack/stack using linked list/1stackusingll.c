///implimentation of stack using linked list
#include<stdio.h>
#include<stdlib.h>

struct node *top=0;

struct node {
int data;
struct node *link;
};

void push(int data){
//creating new node and allocatiing memory
struct node *new=(struct node *)malloc(sizeof(struct node));
//struct node *temp;
new->data=data;
new->link=top;
top=new;
}

void display(){
struct node *temp=top;
while(temp!=0){
printf("%d",temp->data);
temp=temp->link;
}
}

void pop(){
struct node *temp=top;
//underflow coniditio
if(top==0){
printf("empty");
return;
}else{
top=temp->link;
printf("poped element is %d",temp->data);
free(temp);
}
}

//peek is top element
void peek(){
if(top==0){
printf("empty");
}
else{
printf("%d",top->data);
}
}

int main(){
push(1);
push(2);
push(3);
push(4);
push(5);
display();
printf("\n");
pop();
pop();
printf("\n");
display();
peek();
}

