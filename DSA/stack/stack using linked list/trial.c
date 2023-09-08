#include<stdio.h>
#include<stdlib.h>

struct node *top=0;

struct node {
int data;
struct node *link;
};

void push(int data){
struct node *new=malloc(sizeof(struct node));
new->data=data;
new->link=top;
top=new;
}

void pop(){
struct node *temp=top;
if(top==0){
printf("empty");
return ;
}
// else condition
top=temp->link;
printf("%d",temp->data);
free(temp);
}

void display(){
struct node *temp=top;
while(temp!=0){
printf("%d",temp->data);
temp=temp->link;
}
}

int main(){
push(1);
push(1);
push(1);
push(1);
push(1);
display();
pop();
printf("\n");
display();


}
